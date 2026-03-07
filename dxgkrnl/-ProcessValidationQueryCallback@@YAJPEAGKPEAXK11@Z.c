__int64 __fastcall ProcessValidationQueryCallback(
        unsigned __int16 *a1,
        int a2,
        const WCHAR *a3,
        unsigned int a4,
        const UNICODE_STRING *String2,
        _BYTE *a6)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 != 1 && a2 != 7 )
    return 0LL;
  if ( a4 <= 2 )
    return 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  if ( !RtlEqualUnicodeString(&DestinationString, String2, 1u) )
    return 0LL;
  a6[589] = 1;
  return 2147483674LL;
}
