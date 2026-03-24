/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1402E6A80
 * Callers:
 *     IopMountVolume @ 0x14065E0D0 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x14078C6B8 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x140790FB0 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14079106C (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x1407D39CC (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140CFB19C;
}
