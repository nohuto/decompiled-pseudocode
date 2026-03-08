/*
 * XREFs of HvlpInitializeHvCrashdumpPhase2 @ 0x140545DF8
 * Callers:
 *     HvlPhase2Initialize @ 0x1403AF870 (HvlPhase2Initialize.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 */

char HvlpInitializeHvCrashdumpPhase2()
{
  IoAddTriageDumpDataBlock((ULONG)&HvlpFlags, (PVOID)4);
  IoAddTriageDumpDataBlock((ULONG)&HvlpRootFlags, (PVOID)4);
  IoAddTriageDumpDataBlock((ULONG)&HvlpEnlightenments, (PVOID)4);
  return IoAddTriageDumpDataBlock((ULONG)&HvlpCrashdumpData, (PVOID)0xF0);
}
