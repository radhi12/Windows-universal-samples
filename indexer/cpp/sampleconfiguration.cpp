// Copyright (c) Microsoft. All rights reserved.

#include "pch.h"
#include "MainPage.xaml.h"
#include "SampleConfiguration.h"

using namespace SDKTemplate;

Platform::Array<Scenario>^ MainPage::scenariosInner = ref new Platform::Array<Scenario>
{
    { "Add item to the index using the ContentIndexer",             "Indexer.S1_AddWithAPI" }, 
    { "Update and delete indexed items using the ContentIndexer",   "Indexer.S2_UpdateAndDeleteWithAPI" },
    { "Retrieve indexed items added using the ContentIndexer",      "Indexer.S3_RetrieveWithAPI" },
    { "Check the index revision number",                            "Indexer.S4_CheckIndexRevision" }, 
    { "Add indexed items by using appcontent-ms files",             "Indexer.S5_AddWithAppContent" },
    { "Delete indexed appcontent-ms files",                         "Indexer.S6_DeleteWithAppContent" },
    { "Retrieve indexed properties from appcontent-ms files",       "Indexer.S7_RetrieveWithAppContent" }
};
