/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x14099D0FC
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x1407EE7A0 (PopWnfAudioCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x14098CBC0 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140369100 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405DC298 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( !byte_140C2330D && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v2 = a1;
  if ( qword_140C22708 != v2 )
  {
    qword_140C22708 = v2;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140C22731 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
