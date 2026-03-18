/*
 * XREFs of PopSetupAudioEventNotification @ 0x140864F3C
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupAudioEventNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange((int)&v1, (int)&WNF_SEB_AUDIO_ACTIVITY, 1, 0, (__int64)PopWnfAudioCallback, 0LL);
}
