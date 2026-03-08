/*
 * XREFs of PopSetupAudioEventNotification @ 0x1408616D4
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x14078C4C0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupAudioEventNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (__int64)&v1,
           (__int64)&WNF_SEB_AUDIO_ACTIVITY,
           1,
           0,
           (__int64)PopWnfAudioCallback,
           0LL);
}
