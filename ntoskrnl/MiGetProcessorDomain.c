/*
 * XREFs of MiGetProcessorDomain @ 0x1402A9374
 * Callers:
 *     MiInitializeZeroingDomains @ 0x140729BBC (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessorDomain(int a1)
{
  return *(unsigned int *)(KiProcessorBlock[a1] + 34872);
}
