/*
 * XREFs of PopPepRequestWork @ 0x1403075C4
 * Callers:
 *     PopPepUpdateConstraints @ 0x1402B9328 (PopPepUpdateConstraints.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402E9500 (PopPepIdleTimeoutRoutine.c)
 *     PopPepComponentSetLatency @ 0x1402EE890 (PopPepComponentSetLatency.c)
 *     PopPepTryPowerDownDevice @ 0x1403050D0 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x140307424 (PopPepProcessEvent.c)
 *     PopPepComponentSetResidency @ 0x1403AE9C4 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x14059C714 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x14059C820 (PopPepComponentSetWakeHint.c)
 *     PopPepSurprisePowerOn @ 0x14059D930 (PopPepSurprisePowerOn.c)
 * Callees:
 *     PopFxRequestWorkerInternal @ 0x1403089B4 (PopFxRequestWorkerInternal.c)
 */

__int64 __fastcall PopPepRequestWork(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r8d
  __int64 v5; // rbx
  __int64 result; // rax

  if ( a3 > a2 )
  {
    v3 = (*(_DWORD *)(a1 + 24) >> 5) & 1;
    v4 = a3 - a2;
    if ( v4 )
    {
      v5 = v4;
      do
      {
        result = PopFxRequestWorkerInternal(0LL, v3);
        --v5;
      }
      while ( v5 );
    }
  }
  return result;
}
