/*
 * XREFs of _PnpCtxRegDeleteValue @ 0x140A5DEB8
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 */

int __fastcall PnpCtxRegDeleteValue(__int64 a1, void *a2, const WCHAR *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( result >= 0 )
    return ZwDeleteValueKey(a2, &DestinationString);
  return result;
}
