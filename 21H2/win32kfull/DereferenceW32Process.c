/*
 * XREFs of DereferenceW32Process @ 0x1C00E56D0
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00A15D8 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     DereferenceW32ProcessEx @ 0x1C00E434C (DereferenceW32ProcessEx.c)
 */

LONG_PTR __fastcall DereferenceW32Process(volatile signed __int32 *a1)
{
  return DereferenceW32ProcessEx(a1, 1);
}
