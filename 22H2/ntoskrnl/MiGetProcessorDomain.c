/*
 * XREFs of MiGetProcessorDomain @ 0x140221C24
 * Callers:
 *     MiInitializeZeroingDomains @ 0x1406B297C (MiInitializeZeroingDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetProcessorDomain(int a1)
{
  return *(unsigned int *)(KiProcessorBlock[a1] + 34872);
}
