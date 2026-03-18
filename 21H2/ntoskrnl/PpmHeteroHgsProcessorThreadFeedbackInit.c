/*
 * XREFs of PpmHeteroHgsProcessorThreadFeedbackInit @ 0x14025E708
 * Callers:
 *     PpmHeteroHgsProcessorInit @ 0x1403C1E60 (PpmHeteroHgsProcessorInit.c)
 *     PpmResetPerfEngineForProcessorEx @ 0x140419B58 (PpmResetPerfEngineForProcessorEx.c)
 * Callees:
 *     <none>
 */

__int64 PpmHeteroHgsProcessorThreadFeedbackInit()
{
  __int64 result; // rax

  if ( PpmHeteroHgsThreadEnabled )
  {
    result = 1LL;
    __writemsr(0x17D4u, 1uLL);
  }
  return result;
}
