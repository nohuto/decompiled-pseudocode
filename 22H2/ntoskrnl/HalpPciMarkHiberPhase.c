/*
 * XREFs of HalpPciMarkHiberPhase @ 0x14038783C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140996610 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x140387960 (PoSetHiberRange.c)
 */

void __fastcall HalpPciMarkHiberPhase(void *a1)
{
  PoSetHiberRange(a1, 2u, &HalpPCIConfigLock, 8uLL, 0x69635048u);
}
