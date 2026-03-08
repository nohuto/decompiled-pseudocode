/*
 * XREFs of NtGdiGetOPMRandomNumber @ 0x1C0189880
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_ @ 0x1C0187B0C (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_.c)
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C0188B5C (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 */

__int64 __fastcall NtGdiGetOPMRandomNumber(unsigned __int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  _DXGKMDT_OPM_RANDOM_NUMBER v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  v4 = SGDGetSessionState(a1);
  result = COPM::GetRandomNumber(*(void ***)(*(_QWORD *)(v4 + 24) + 3824LL), a1, &v6);
  if ( (int)result >= 0 )
  {
    result = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_(a2, &v6);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
