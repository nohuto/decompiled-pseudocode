/*
 * XREFs of _safecrt_wctomb_s @ 0x1403DAE28
 * Callers:
 *     _output_s @ 0x1403DA5B8 (_output_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlUnicodeToMultiByteN @ 0x1407A3650 (RtlUnicodeToMultiByteN.c)
 */

__int64 __fastcall safecrt_wctomb_s(_DWORD *a1, CHAR *a2, size_t a3, WCHAR a4)
{
  ULONG BytesInMultiByteString; // [rsp+48h] [rbp+10h] BYREF
  WCHAR UnicodeString; // [rsp+58h] [rbp+20h] BYREF

  UnicodeString = a4;
  if ( !a2 && a3 )
  {
    if ( a1 )
      *a1 = 0;
    return 0LL;
  }
  if ( a1 )
    *a1 = -1;
  if ( a3 > 0x7FFFFFFF )
  {
    xHalTimerWatchdogStop();
    return 22LL;
  }
  if ( !a2 )
  {
    if ( a1 )
      *a1 = _mb_cur_max;
    return 0LL;
  }
  BytesInMultiByteString = 0;
  if ( RtlUnicodeToMultiByteN(a2, a3, &BytesInMultiByteString, &UnicodeString, 2u) >= 0 )
  {
    if ( a1 )
      *a1 = BytesInMultiByteString;
    return 0LL;
  }
  if ( a3 )
    memset(a2, 0, a3);
  return 42LL;
}
