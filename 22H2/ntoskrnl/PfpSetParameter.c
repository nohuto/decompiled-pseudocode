/*
 * XREFs of PfpSetParameter @ 0x1407BF878
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140709624 (PfSetSuperfetchInformation.c)
 *     PfpSetBaseTime @ 0x1407BF7E4 (PfpSetBaseTime.c)
 *     PfpParametersInitialize @ 0x140A6A864 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1403FA620 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PfpSetParameter(HANDLE KeyHandle, const WCHAR *a2, __int64 a3, void *a4, ULONG DataSize)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( KeyHandle )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a4, DataSize);
  else
    return -1073741811;
}
