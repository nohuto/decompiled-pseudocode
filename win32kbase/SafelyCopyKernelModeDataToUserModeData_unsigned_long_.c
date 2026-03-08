/*
 * XREFs of SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1C0187AC8
 * Callers:
 *     NtGdiGetCertificateSize @ 0x1C0189670 (NtGdiGetCertificateSize.c)
 *     NtGdiGetCertificateSizeByHandle @ 0x1C01896F0 (NtGdiGetCertificateSizeByHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafelyCopyKernelModeDataToUserModeData_unsigned_long_(_DWORD *a1, _DWORD *a2)
{
  ProbeForWrite(a1, 4uLL, 1u);
  *a1 = *a2;
  return 0LL;
}
