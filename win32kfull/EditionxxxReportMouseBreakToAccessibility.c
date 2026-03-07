// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall EditionxxxReportMouseBreakToAccessibility(__int16 a1, __int64 *a2, int a3)
{
  __int64 v4; // xmm0_8
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]

  v4 = *a2;
  v8 = *((_DWORD *)a2 + 2);
  v7 = v4;
  if ( (HIDWORD(gMouseKeys) & 1) != 0 )
    gwMKButtonState &= ~a1;
  if ( (gStickyKeys[1] & 1) == 0 )
    return 1LL;
  xxxUnlatchStickyKeys();
  if ( IsGpqForegroundAccessibleOnInputThread(a3 != 0, (const struct tagUIPI_INFO_INT *)&v7) )
    return 1LL;
  MSGLUA_GPQFOREGROUND(v5);
  return 0LL;
}
