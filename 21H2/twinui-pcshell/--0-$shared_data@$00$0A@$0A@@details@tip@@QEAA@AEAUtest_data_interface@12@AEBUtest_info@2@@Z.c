/*
 * XREFs of ??0?$shared_data@$00$0A@$0A@@details@tip@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x1800A0DAC
 * Callers:
 *     ??0?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@QEAA@XZ @ 0x1800A0B60 (--0-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@QEAA@XZ.c)
 *     ??0?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@QEAA@XZ @ 0x1800A0C60 (--0-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@QEAA@XZ.c)
 *     ??0?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@QEAA@PEAU_GUID@@@Z @ 0x1800BEFB8 (--0-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@QEAA@PEAU_GUID@@@Z.c)
 *     ??0?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@QEAA@XZ @ 0x1800BF0A8 (--0-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@QEAA@XZ.c)
 *     ??0?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@QEAA@XZ @ 0x1800D3808 (--0-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@QEAA@XZ.c)
 *     ??0?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@QEAA@XZ @ 0x1800D4A68 (--0-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@QEAA@XZ.c)
 *     ??0?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@QEAA@XZ @ 0x18013540C (--0-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@QEAA@XZ.c)
 * Callees:
 *     ??0test_state@tip@@QEAA@XZ @ 0x1800A1238 (--0test_state@tip@@QEAA@XZ.c)
 */

__int64 __fastcall tip::details::shared_data<1,0,0>::shared_data<1,0,0>(__int64 a1, __int64 a2)
{
  _OWORD *v3; // r8

  *(_QWORD *)a1 = a2;
  tip::test_state::test_state((tip::test_state *)(a1 + 8));
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_DWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 16) = *v3;
  *(_OWORD *)(a1 + 32) = v3[1];
  *(_OWORD *)(a1 + 48) = v3[2];
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  return a1;
}
