/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x1409E3F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x1407A4F00 (IoCreateDriver.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(PVOID P)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_1409C2CE0);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_1409C2CE0);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (_DMA_OPERATIONS *)ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(P, 0);
}
