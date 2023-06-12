# Creating a dev instance

You should have docker installed, a php environment and composer.

The code is usually copied into the container and then some post-processing (installing libraries with composer and copying an example config.ttl) is done. To access the code from outside, run the container with docker-compose and bind the code-directory into the container (this is what the new `docker-compose-dev.yml`-file is doing, therfore run from the source root `docker-compose --file dockerfiles/docker-compose-dev.yml`). This will overwrite the created `/var/www/html`-directory in the container, which means, that the pre-processing with composer is lost. Therefore after having the container up, run in the source root `composer install`. Afterwards you should be able to connect to Skosmos at http://localhost:9090
If you then edit the source then changes are immediately available at the localhost-instance. You don't need to carry about the composer installations as they are already in the .gitignore-file and thus will not have an effect on your code repository.
