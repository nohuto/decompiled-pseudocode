/*
 * XREFs of WdipSemDeleteValueFromRegistry @ 0x140840D98
 * Callers:
 *     WdipSemLoadConfigInfo @ 0x14083F75C (WdipSemLoadConfigInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall WdipSemDeleteValueFromRegistry(HANDLE KeyHandle)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( !KeyHandle )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, L"SEMUpdate");
  return ZwDeleteValueKey(KeyHandle, &DestinationString);
}
