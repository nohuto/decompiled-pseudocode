/*
 * XREFs of KsepLogInfo @ 0x14036F8F4
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x14079D47C (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x14079D690 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimsForDriver @ 0x14079E39C (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14079EAC4 (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x1407F7364 (KseDriverUnloadImage.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140800708 (KsepResolveApplicableShimsForDriver.c)
 *     KsepApplyShimsToDriver @ 0x140800924 (KsepApplyShimsToDriver.c)
 *     KseRegisterShimEx @ 0x140800EE0 (KseRegisterShimEx.c)
 *     KseQueryDeviceData @ 0x1408016F0 (KseQueryDeviceData.c)
 *     KseUnregisterShim @ 0x1409740B0 (KseUnregisterShim.c)
 *     KsepEngineReadFlags @ 0x140B34F48 (KsepEngineReadFlags.c)
 *     KsepMatchInitBiosInfo @ 0x140B35308 (KsepMatchInitBiosInfo.c)
 *     KseDriverScopeInitialize @ 0x140B35418 (KseDriverScopeInitialize.c)
 *     KseInitialize @ 0x140B3E688 (KseInitialize.c)
 * Callees:
 *     KsepLogEtwMessage @ 0x140303480 (KsepLogEtwMessage.c)
 */

void KsepLogInfo(int a1, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  KsepLogEtwMessage(a1, 2, a2, va);
}
