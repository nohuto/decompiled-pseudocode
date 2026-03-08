/*
 * XREFs of PopFxEnablePlatformStates @ 0x140587D90
 * Callers:
 *     PpmEnableCoordinatedIdleStates @ 0x14097EB2C (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     PpmGetDeepSleepPlatformStateIndex @ 0x140581D3C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopPepPlatformStateRegistered @ 0x14059D504 (PopPepPlatformStateRegistered.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140981C30 (PopFxInitializeSocSubsystemStaticInfo.c)
 */

void __fastcall PopFxEnablePlatformStates(int a1)
{
  unsigned __int32 DeepSleepPlatformStateIndex; // eax

  if ( a1 )
  {
    PopPepPlatformStateRegistered();
    DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
    if ( DeepSleepPlatformStateIndex != -1 )
    {
      _InterlockedExchange(&dword_140CF7A00, DeepSleepPlatformStateIndex);
      PopFxInitializeSocSubsystemStaticInfo(DeepSleepPlatformStateIndex);
    }
  }
}
