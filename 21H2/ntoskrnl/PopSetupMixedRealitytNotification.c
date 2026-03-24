/*
 * XREFs of PopSetupMixedRealitytNotification @ 0x1407D41AC
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
 *     ExSubscribeWnfStateChange @ 0x1406B17B0 (ExSubscribeWnfStateChange.c)
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
