/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x1408F586C
 * Callers:
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x140772540 (PopWnfAudioCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1408E4350 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140381894 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14057C458 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( !byte_140C2336D && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v2 = a1;
  if ( qword_140C23988 != v2 )
  {
    qword_140C23988 = v2;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140C239B1 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
