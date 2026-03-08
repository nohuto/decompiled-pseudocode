/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x140201FB8
 * Callers:
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 * Callees:
 *     VfMajorTestStartedPdoStack @ 0x140AD0164 (VfMajorTestStartedPdoStack.c)
 */

__int64 PpvUtilTestStartedPdoStack()
{
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
    return VfMajorTestStartedPdoStack();
  return result;
}
