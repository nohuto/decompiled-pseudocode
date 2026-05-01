/*
 * XREFs of ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip@@IEAAXXZ @ 0x1800AD8D8
 * Callers:
 *     ??_G?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@QEAAPEAXI@Z @ 0x1800A1E50 (--_G-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@QEAAPEAXI@Z.c)
 *     ?Release@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ @ 0x1800D3CCC (-Release@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ.c)
 *     ?Release@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ @ 0x1800D4C08 (-Release@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ.c)
 *     ??_G?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@QEAAPEAXI@Z @ 0x18013710C (--_G-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z @ 0x1800ABC80 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXW4TestQueryOptions@@@Z.c)
 */

void __fastcall tip::details::shared_data<0,0,0>::on_destroy(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 232) )
  {
    if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      tip::details::shared_data<0,0,0>::complete_helper(a1, 4LL);
  }
}
