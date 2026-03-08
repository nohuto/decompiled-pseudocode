/*
 * XREFs of PopSetupMixedRealitytNotification @ 0x140860254
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     ExSubscribeWnfStateChange @ 0x14078C4C0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupMixedRealitytNotification()
{
  unsigned __int64 v1; // [rsp+50h] [rbp+8h] BYREF
  char v2; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0xFFFFFFFF00000001uLL;
  ZwUpdateWnfStateData((__int64)&WNF_SEB_MIXED_REALITY, (__int64)&v1);
  return ExSubscribeWnfStateChange(
           (__int64)&v2,
           (__int64)&WNF_SEB_MIXED_REALITY,
           1,
           0,
           (__int64)PopWnfMixedRealityCallback,
           0LL);
}
