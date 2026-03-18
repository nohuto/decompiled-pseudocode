/*
 * XREFs of DxgkEnsureVmBusInterface @ 0x1C0315EBC
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0218580 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0312BAC (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 */

__int64 DxgkEnsureVmBusInterface()
{
  DXGGLOBAL *Global; // rax
  int v1; // eax
  __int64 v2; // rdi

  Global = DXGGLOBAL::GetGlobal();
  v1 = DXGGLOBAL::EnsureVmBusInterface(Global);
  v2 = v1;
  if ( v1 < 0 )
  {
    WdLogSingleEntry1(2LL, v1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create global VM bus channel, returning 0x%I64x",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v2;
}
