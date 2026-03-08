/*
 * XREFs of HvlpFreeOverlayPages @ 0x140547440
 * Callers:
 *     HvlInitializeProcessor @ 0x14080AFA0 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14093E28C (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 */

void __fastcall HvlpFreeOverlayPages(void *a1)
{
  MmFreeContiguousMemory(a1);
}
