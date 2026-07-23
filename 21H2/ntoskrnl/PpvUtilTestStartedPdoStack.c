/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x140370230
 * Callers:
 *     PipProcessStartPhase3 @ 0x14074AD30 (PipProcessStartPhase3.c)
 * Callees:
 *     VfMajorTestStartedPdoStack @ 0x1409D8BF4 (VfMajorTestStartedPdoStack.c)
 */

__int64 PpvUtilTestStartedPdoStack()
{
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
    return VfMajorTestStartedPdoStack();
  return result;
}
