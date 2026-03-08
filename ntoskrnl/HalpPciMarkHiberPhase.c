/*
 * XREFs of HalpPciMarkHiberPhase @ 0x1405131D0
 * Callers:
 *     HaliLocateHiberRanges @ 0x140A92C20 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x14058C400 (PoSetHiberRange.c)
 */

void __fastcall HalpPciMarkHiberPhase(void *a1)
{
  PoSetHiberRange(a1, 2u, &HalpPCIConfigLock, 8uLL, 0x69635048u);
}
