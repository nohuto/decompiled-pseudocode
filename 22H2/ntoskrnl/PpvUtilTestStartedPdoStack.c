/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x140322EAC
 * Callers:
 *     PipProcessStartPhase3 @ 0x14079BED4 (PipProcessStartPhase3.c)
 * Callees:
 *     VfMajorTestStartedPdoStack @ 0x140AD4164 (VfMajorTestStartedPdoStack.c)
 */

__int64 PpvUtilTestStartedPdoStack()
{
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
    return VfMajorTestStartedPdoStack();
  return result;
}
