<div class="container-fluid">
    <div class="row">
        <div class="col-sm-12">
            <h4>About Vocabs</h4>
            <p>In many areas of scholarly work, controlled vocabularies (gazetteers, thesauri, etc.) play a crucial role as a stable reference for resources and for ensuring interoperability between disparate projects and their data. The ACDH provides services and tools that allow for collaborative creation, maintenance and publication of vocabularies and taxonomies of any kind. </p>
        </div>
    </div>
</div>
<br>
<div class="container-fluid">
    <div class="row">
        <div class="col-sm-12">
            <h4 id="repository">Vocabs repository</h4>
            <p>The system is based on the open-source software <a href="http://skosmos.org/">Skosmos</a>, which uses <a href="https://www.w3.org/TR/2009/REC-skos-reference-20090818/">SKOS</a> as the underlying data model. Skosmos offers browsing of vocabularies with structured concept displays and visualisation of concept hierarchies. Vocabularies can be searched with a search interface or by consulting an alphabetical or thematic index. Vocabularies can be accessed via a REST-API, to allow for Linked Data. </p>
     
            <p>
                Vocabs repository does not only serve controlled vocabularies for ACDH purposes, but is also employed as a service for partners of the national <a href="http://www.digital-humanities.at/en">CLARIAH-AT</a> consortium, for the <a href="https://www.dariah.eu/activities/working-groups/thesaurus-maintenance/">Thesaurus Maintenance</a> working group in <a href="https://www.dariah.eu/">DARIAH-EU</a>, and for <a href="http://www.parthenos-project.eu/activities-and-wps">WP6 - Services and tools</a> in <a href="http://www.parthenos-project.eu/">PARTHENOS</a>. 
            </p>
        </div>
    </div>
</div>
<br>
<div class="container-fluid">
    <div class="row">
        <div class="col-sm-12">
            <h4 id="editor">Vocabs editor</h4>
        </div>
    </div>
    <div class="row h-100">
        <div class="col-sm-7 pr-2">
            <p>
                Vocabs editor is a web-based tool for collaborative work on controlled vocabularies development. 
            </p>
            <p>
                The editor follows the SKOS data model for the main elements of a vocabulary. The Dublin core schema is used to capture the metadata (such as date created, date modified, creator, contributor, source and other) about each element. Each concept scheme as well as each individual concept can be downloaded in RDF/XML and Turtle format. 
            </p>

            <p>
                The user management system allows a user to share a concept scheme she/he created with other users (called 'curators') to create new, edit and delete concepts and collections within this concept scheme. Each user can find a summary of their latest activity on user's page. The tool also provides API to retrieve the data.
                <br>
                <a href="https://vocabseditor.acdh.oeaw.ac.at/">Visit Vocabs editor demo version</a>  
            </p>

        </div>
        <div class="col-sm-5 h-100 pl-2">
            <div class="text-center h-100">
                <img class="img-responsive" src="../resource/pics/vocabseditor_01.png">
            </div>
        </div>
    </div>
</div>
<br>
<div class="container-fluid">
    <div class="row">
        <div class="col-sm-12">
            <h4 id="sparql">Vocabs SPARQL</h4>
        </div>
    </div>
    <div class="row">
        <div class="col-sm-5 pr-2">
            <div class="text-center">
                <img class="img-responsive" src="../resource/pics/sparql-01.png">
            </div>
        </div>
        <div class="col-sm-5 h-100 pl-2">
            <p>
                <a href="https://github.com/acdh-oeaw/djangobaseproject">DjangoBaseProject</a> and allows to query all published vocabularies using SPARQL.<br>

                A read-only access to Jena Fuseki triple store via SPARQL endpoint.
                The service is based on <a href="https://vocabs-sparql.acdh.oeaw.ac.at/">Visit Vocabs SPARQL</a>

            </p>
        </div>
    </div>
</div>
<br>
<div class="container-fluid">
    <div class="row">
        <div class="col-sm-12">
            <h4 id="vocabs_visualize">Vocabs visualize</h4>
        </div>
    </div>
    <div class="row h-100">
        <div class="col-sm-7 pr-2">
            <p>
                Vocabs visualize service is in ongoing development. The service aims to allow for viewing multiple concept schemes and relationships among their concepts. 
            </p>

        </div>
        <div class="col-sm-5 h-100 pl-2">
            <div class="text-center h-100">
                <img class="img-responsive" src="../resource/pics/vocabs-viz-02.png">
            </div>
        </div>
    </div>
</div>
<br>
<div class="container-fluid">
     <div class="row">
        <div class="col-sm-12">
            <h4 id="api">Vocabs Api</h4>
        </div>
    </div>
    <div class="row">
        <div class="col-sm-12">
            <p>
                SKOSMOS provided API to connect projects’ web applications to published vocabularies. <a href="https://vocabs-api.acdh.oeaw.ac.at/">Visit API swagger documentation</a>
            </p>
        </div>
    </div>
</div>