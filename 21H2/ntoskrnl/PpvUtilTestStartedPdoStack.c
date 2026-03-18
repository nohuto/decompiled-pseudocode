/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x1402DDEA0
 * Callers:
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 * Callees:
 *     VfMajorTestStartedPdoStack @ 0x140A92774 (VfMajorTestStartedPdoStack.c)
 */

__int64 PpvUtilTestStartedPdoStack()
{
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
    return VfMajorTestStartedPdoStack();
  return result;
}
