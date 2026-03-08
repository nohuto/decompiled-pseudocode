/*
 * XREFs of NtGdiGetCertificateSizeByHandle @ 0x1C01896F0
 * Callers:
 *     <none>
 * Callees:
 *     SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1C0187AC8 (SafelyCopyKernelModeDataToUserModeData_unsigned_long_.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C01887D8 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 */

__int64 __fastcall NtGdiGetCertificateSizeByHandle(void *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, _DWORD *a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0;
  v6 = SGDGetSessionState(a1);
  result = COPM::GetCertificateSize(*(void ***)(*(_QWORD *)(v6 + 24) + 3824LL), a1, a2, &v8);
  if ( (int)result >= 0 )
  {
    result = SafelyCopyKernelModeDataToUserModeData_unsigned_long_(a3, &v8);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
