/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1402B23D0
 * Callers:
 *     IopMountVolume @ 0x14072B180 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x14076EDA4 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x14080C96C (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14080D354 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x14085FEC4 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140D1D1EC;
}
