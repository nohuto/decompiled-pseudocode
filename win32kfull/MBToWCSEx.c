/*
 * XREFs of MBToWCSEx @ 0x1C024E9B4
 * Callers:
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0109318 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     SfnIMECONTROL @ 0x1C0209610 (SfnIMECONTROL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MBToWCSEx(__int64 a1, const CHAR *a2, signed int BytesInMultiByteString, PWCH *a4, int a5)
{
  __int64 v5; // rax
  ULONG BytesInUnicodeString; // [rsp+40h] [rbp+8h] BYREF

  BytesInUnicodeString = 0;
  if ( !BytesInMultiByteString )
    return 0LL;
  if ( !a5 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( BytesInMultiByteString < 0 )
  {
    if ( BytesInMultiByteString < -2 )
      return 0LL;
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    BytesInMultiByteString += v5 + 2;
    if ( !BytesInMultiByteString )
      return 0LL;
  }
  if ( a5 >= 0 && RtlMultiByteToUnicodeN(*a4, 2 * a5, &BytesInUnicodeString, a2, BytesInMultiByteString) >= 0 )
    return BytesInUnicodeString >> 1;
  else
    return 0LL;
}
