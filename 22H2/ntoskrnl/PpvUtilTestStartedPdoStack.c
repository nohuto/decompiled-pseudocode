/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x14036F540
 * Callers:
 *     PipProcessStartPhase3 @ 0x140747010 (PipProcessStartPhase3.c)
 * Callees:
 *     VfMajorTestStartedPdoStack @ 0x1409D7C04 (VfMajorTestStartedPdoStack.c)
 */

__int64 PpvUtilTestStartedPdoStack()
{
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
    return VfMajorTestStartedPdoStack();
  return result;
}
