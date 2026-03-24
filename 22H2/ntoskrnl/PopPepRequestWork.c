/*
 * XREFs of PopPepRequestWork @ 0x1402614FC
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x140260C70 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1402612E4 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x14038B498 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x14039FE6C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1405740D4 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1405741DC (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1405742C8 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405743C0 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x140574930 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopFxRequestWorker @ 0x140262450 (PopFxRequestWorker.c)
 */

__int64 __fastcall PopPepRequestWork(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a2 > a1 )
  {
    v2 = a2 - a1;
    if ( v2 )
    {
      v3 = v2;
      do
      {
        result = PopFxRequestWorker(0LL);
        --v3;
      }
      while ( v3 );
    }
  }
  return result;
}
