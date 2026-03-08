/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x140998F8C
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x140852480 (PopWnfAudioCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1409816B0 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14036D07C (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059BCE8 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rdx

  v3 = 0LL;
  if ( !byte_140C3D4CD && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v3 = a1;
  if ( qword_140C3C9A8 != v3 )
  {
    qword_140C3C9A8 = v3;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140C3C9D1 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
