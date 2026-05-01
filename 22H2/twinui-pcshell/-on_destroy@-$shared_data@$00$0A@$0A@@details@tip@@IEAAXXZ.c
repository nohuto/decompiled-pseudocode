/*
 * XREFs of ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip@@IEAAXXZ @ 0x1800AD8AC
 * Callers:
 *     ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@AEAAKXZ @ 0x1800A8644 (-Release@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@AEAAKXZ.c)
 *     ?Release@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@AEAAKXZ @ 0x1800C0364 (-Release@-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@AEAAKXZ.c)
 * Callees:
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z @ 0x1800ABBD4 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z.c)
 */

void __fastcall tip::details::shared_data<1,0,0>::on_destroy(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 232) )
  {
    if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      tip::details::shared_data<1,0,0>::complete_helper(a1, 4LL);
  }
}
