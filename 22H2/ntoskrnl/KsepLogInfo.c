/*
 * XREFs of KsepLogInfo @ 0x140371F88
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140757D14 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140757E40 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x140758368 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14075AD50 (KseDriverLoadImage.c)
 *     KseQueryDeviceData @ 0x14075EC10 (KseQueryDeviceData.c)
 *     KseDriverUnloadImage @ 0x140772BB4 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x1407BDC00 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x1408BFE70 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408C0200 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C0684 (KsepResolveApplicableShimsForDriver.c)
 *     KseInitialize @ 0x140A3BCCC (KseInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A686E8 (KseDriverScopeInitialize.c)
 *     KsepMatchInitBiosInfo @ 0x140A6A22C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6A47C (KsepEngineReadFlags.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140371FB8 (KsepLogEtwMessage.c)
 */

__int64 KsepLogInfo(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  return KsepLogEtwMessage(a1, 2LL, a2, (__int64 *)va);
}
