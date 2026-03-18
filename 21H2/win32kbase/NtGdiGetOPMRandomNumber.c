/*
 * XREFs of NtGdiGetOPMRandomNumber @ 0x1C00CE3B0
 * Callers:
 *     <none>
 * Callees:
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_ @ 0x1C00CE410 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_.c)
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00CE630 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

int __fastcall NtGdiGetOPMRandomNumber(COPM *a1, __int64 a2)
{
  int result; // eax
  _DXGKMDT_OPM_RANDOM_NUMBER v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  result = COPM::GetRandomNumber(a1, a1, &v4);
  if ( result >= 0 )
  {
    result = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_(a2, &v4);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
