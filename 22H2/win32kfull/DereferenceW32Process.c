/*
 * XREFs of DereferenceW32Process @ 0x1C00E5380
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00A1548 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     DereferenceW32ProcessEx @ 0x1C00E3FFC (DereferenceW32ProcessEx.c)
 */

LONG_PTR __fastcall DereferenceW32Process(volatile signed __int32 *a1)
{
  return DereferenceW32ProcessEx(a1, 1);
}
