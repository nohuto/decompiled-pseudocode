/*
 * XREFs of EditionxxxReportMouseBreakToAccessibility @ 0x1C0116E10
 * Callers:
 *     <none>
 * Callees:
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C007FBC0 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C016A81A (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall EditionxxxReportMouseBreakToAccessibility(__int16 a1, __int64 *a2, int a3)
{
  __int64 v4; // xmm0_8
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]

  v4 = *a2;
  v7 = *((_DWORD *)a2 + 2);
  v6 = v4;
  if ( (HIDWORD(gMouseKeys) & 1) != 0 )
    gwMKButtonState &= ~a1;
  if ( (gStickyKeys[1] & 1) == 0 )
    return 1LL;
  xxxUnlatchStickyKeys();
  if ( IsGpqForegroundAccessibleOnInputThread(a3 != 0, (const struct tagUIPI_INFO_INT *)&v6) )
    return 1LL;
  MSGLUA_GPQFOREGROUND();
  return 0LL;
}
