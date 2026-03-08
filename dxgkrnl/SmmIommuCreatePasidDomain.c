/*
 * XREFs of SmmIommuCreatePasidDomain @ 0x1C03D10D4
 * Callers:
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x1C03D11C0 (SmmIommuSwitchToGpuVaIoMmu.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1C00205BC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 SmmIommuCreatePasidDomain()
{
  __int64 v0; // rcx

  if ( SmmUseIommuV3Interface() )
    return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, __int64))qword_1C013BC00)(3LL, 0LL, 0LL, 0LL, v0);
  WdLogSingleEntry1(2LL, 1842LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Iommu interface does not support Pasid",
    1842LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225659LL;
}
