/*
 * XREFs of PopSetupSprActiveSessionChangeNotification @ 0x140864E88
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupSprActiveSessionChangeNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (int)&v1,
           (int)&WNF_SRUM_SCREENONSTUDY_SESSION,
           1,
           0,
           (__int64)PopWnfSprActiveSessionChangeCallback,
           0LL);
}
