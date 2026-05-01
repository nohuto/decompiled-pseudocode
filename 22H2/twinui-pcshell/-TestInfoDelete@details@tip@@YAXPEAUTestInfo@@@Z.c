/*
 * XREFs of ?TestInfoDelete@details@tip@@YAXPEAUTestInfo@@@Z @ 0x1800AA5D4
 * Callers:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AB8B0 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z @ 0x1800ABBD4 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z @ 0x1800ABC80 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC118 (-end_update@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800AC274 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AD0E8 (-is_running@-$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip@@IEAAXPEAU_GUID@@@Z @ 0x1800C1194 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip@@IEAAXPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall tip::details::TestInfoDelete(LPVOID *this, struct TestInfo *a2)
{
  CoTaskMemFree(this[3]);
  this[3] = 0LL;
}
