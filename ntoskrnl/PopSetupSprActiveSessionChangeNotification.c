/*
 * XREFs of PopSetupSprActiveSessionChangeNotification @ 0x1408615E4
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x14078C4C0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupSprActiveSessionChangeNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (__int64)&v1,
           (__int64)&WNF_SRUM_SCREENONSTUDY_SESSION,
           1,
           0,
           (__int64)PopWnfSprActiveSessionChangeCallback,
           0LL);
}
