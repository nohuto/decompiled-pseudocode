/*
 * XREFs of DxgkReleaseAdapterFdoReference @ 0x1C02C3248
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0200110 (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C039D034 (DpiFdoResetFdo.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00049F4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?ClearDeviceObject@DXGADAPTER@@QEAAXXZ @ 0x1C0042FA4 (-ClearDeviceObject@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterFdoReference(DXGADAPTER *this)
{
  if ( this )
  {
    DXGADAPTER::ClearDeviceObject(this);
    DXGADAPTER::ReleaseReferenceNoTracking(this);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
