/*
 * XREFs of HalpApic1EndOfInterrupt @ 0x140411F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void HalpApic1EndOfInterrupt()
{
  *(_DWORD *)(HalpLocalApic + 176) = 0;
}
