/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x140AD9F90
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x14081AF70 (IoCreateDriver.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(PVOID P)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_140ABAB60);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_140ABAB60);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(void **, _QWORD))ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(P, 0);
}
