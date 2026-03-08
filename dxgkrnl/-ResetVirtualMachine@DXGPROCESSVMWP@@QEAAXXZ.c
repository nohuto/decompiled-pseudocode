/*
 * XREFs of ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C0341048
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C01A8184 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C03410E0 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 */

void __fastcall DXGPROCESSVMWP::ResetVirtualMachine(DXGPROCESSVMWP *this)
{
  DXGVIRTUALMACHINE *v2; // rcx
  int v3; // eax
  __int64 v4; // rbx

  v2 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 76);
  if ( v2 )
    DXGVIRTUALMACHINE::ResetVirtualMachine(v2, 0);
  v3 = DXGPROCESS::DeferredInitialize(this, 1u);
  if ( v3 < 0 )
  {
    v4 = v3;
    WdLogSingleEntry1(2LL, v3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create VidMm and VidSch processes: 0x%I64x",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
    *((_BYTE *)this + 632) = 0;
  }
}
