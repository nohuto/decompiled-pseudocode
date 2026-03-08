/*
 * XREFs of DxgkEnsureVmBusInterface @ 0x1C031108C
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C02099A0 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C030DD7C (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
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
