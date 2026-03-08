/*
 * XREFs of KiInitializeSchedulerSubNode @ 0x1403A3758
 * Callers:
 *     KiConfigureInitialNodes @ 0x1403A3608 (KiConfigureInitialNodes.c)
 *     KiAllocateSchedulerSubNode @ 0x14056E238 (KiAllocateSchedulerSubNode.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall KiInitializeSchedulerSubNode(_WORD *a1, _WORD *a2)
{
  memset(a1, 0, 0x180uLL);
  a1[69] = a2[1];
  a1[70] = *a2;
  a1[68] = a2[3];
  return memset(a1 + 160, 255, 0x40uLL);
}
