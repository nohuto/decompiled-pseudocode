/*
 * XREFs of ?TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z @ 0x1800AA5F4
 * Callers:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AB8D0 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z @ 0x1800ABBF4 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z @ 0x1800ABCA0 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC138 (-end_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC294 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AD108 (-is_running@-$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip@@IEAAXPEAU_GUID@@@Z @ 0x1800C11B4 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip@@IEAAXPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall tip::details::TestInfoDelete(LPVOID *this, struct TestInfo *a2)
{
  CoTaskMemFree(this[3]);
  this[3] = 0LL;
}
