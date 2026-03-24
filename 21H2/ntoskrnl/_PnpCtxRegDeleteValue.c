/*
 * XREFs of _PnpCtxRegDeleteValue @ 0x140974908
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C7360 (PipUpdateDeviceProducts.c)
 *     PiCMCreateDevice @ 0x1408AF440 (PiCMCreateDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140265AF0 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x1403FBE80 (ZwDeleteValueKey.c)
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
