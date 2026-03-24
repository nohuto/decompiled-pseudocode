/*
 * XREFs of PiSwFreeMem @ 0x1408AEAA4
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14074CF08 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwFreeMem(void *a1)
{
  ExFreePoolWithTag(a1, 0x57706E50u);
}
