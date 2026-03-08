/*
 * XREFs of PopCadTriggerDriverLoad @ 0x140999BF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwLoadDriver @ 0x140414490 (ZwLoadDriver.c)
 */

NTSTATUS PopCadTriggerDriverLoad()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\CAD");
  return ZwLoadDriver(&DestinationString);
}
