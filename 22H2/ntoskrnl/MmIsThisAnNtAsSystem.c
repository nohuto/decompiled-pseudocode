/*
 * XREFs of MmIsThisAnNtAsSystem @ 0x1402907D0
 * Callers:
 *     IopMountVolume @ 0x140701598 (IopMountVolume.c)
 *     PsChangeQuantumTable @ 0x1407C09D4 (PsChangeQuantumTable.c)
 *     CcInitializeProcessor @ 0x1408215BC (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140821FA4 (ObInitializeProcessor.c)
 *     IopQueryProcessorInitValues @ 0x140864404 (IopQueryProcessorInitValues.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsThisAnNtAsSystem(void)
{
  return dword_140D1D1EC;
}
