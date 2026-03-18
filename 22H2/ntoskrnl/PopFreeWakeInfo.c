/*
 * XREFs of PopFreeWakeInfo @ 0x140987360
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x140987AFC (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}
