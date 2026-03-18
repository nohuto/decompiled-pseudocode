/*
 * XREFs of HvlpFreeOverlayPages @ 0x1405498E0
 * Callers:
 *     HvlInitializeProcessor @ 0x14081FAAC (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x1409412AC (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x1403C2FA0 (MmFreeContiguousMemory.c)
 */

void __fastcall HvlpFreeOverlayPages(void *a1)
{
  MmFreeContiguousMemory(a1);
}
