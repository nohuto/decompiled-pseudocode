/*
 * XREFs of ??1?$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ @ 0x1800A13E8
 * Callers:
 *     ??_G?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@QEAAPEAXI@Z @ 0x1800A1E50 (--_G-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@QEAAPEAXI@Z.c)
 *     ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@AEAAKXZ @ 0x1800A8644 (-Release@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@AEAAKXZ.c)
 *     ?Release@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@AEAAKXZ @ 0x1800C0364 (-Release@-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@AEAAKXZ.c)
 *     ?Release@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ @ 0x1800D3CCC (-Release@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ.c)
 *     ?Release@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ @ 0x1800D4C08 (-Release@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@AEAAKXZ.c)
 *     ??_G?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@QEAAPEAXI@Z @ 0x18013710C (--_G-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@QEAAPEAXI@Z.c)
 * Callees:
 *     TestClose @ 0x1800AF418 (TestClose.c)
 */

void __fastcall tip::details::shared_data<1,0,0>::~shared_data<1,0,0>(__int64 a1)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  if ( *(_QWORD *)(a1 + 232) )
    TestClose();
  tip::test_state::~test_state((tip::test_state *)(a1 + 8));
}
