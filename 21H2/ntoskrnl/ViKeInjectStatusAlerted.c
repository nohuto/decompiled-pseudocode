/*
 * XREFs of ViKeInjectStatusAlerted @ 0x140A7F778
 * Callers:
 *     VerifierKeWaitForSingleObject @ 0x140A7F670 (VerifierKeWaitForSingleObject.c)
 *     VerifierKeDelayExecutionThread @ 0x140A95DA0 (VerifierKeDelayExecutionThread.c)
 *     VerifierKeWaitForMultipleObjects @ 0x140A96450 (VerifierKeWaitForMultipleObjects.c)
 * Callees:
 *     VfUtilIsLocalSystem @ 0x140A81DB4 (VfUtilIsLocalSystem.c)
 *     VfFaultsInjectResourceFailure @ 0x140A96B0C (VfFaultsInjectResourceFailure.c)
 */

_BOOL8 __fastcall ViKeInjectStatusAlerted(char a1)
{
  struct _KPROCESS *Process; // rbx
  _BOOL8 result; // rax

  result = 0;
  if ( a1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PsInitialSystemProcess )
    {
      if ( Process != PsInitialSystemProcess
        && Process != PsIdleProcess
        && (unsigned int)VfFaultsInjectResourceFailure(0LL)
        && !(unsigned int)VfUtilIsLocalSystem(Process) )
      {
        return 1;
      }
    }
  }
  return result;
}
