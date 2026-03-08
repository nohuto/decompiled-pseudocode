/*
 * XREFs of PopFreeWakeInfo @ 0x1409842B0
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x140984A4C (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}
