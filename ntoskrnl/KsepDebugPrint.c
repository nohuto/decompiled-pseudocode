/*
 * XREFs of KsepDebugPrint @ 0x14057E834
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x140580050 (KseKPSOHookDriverTargeted.c)
 *     KseAddHardwareId @ 0x14079CB80 (KseAddHardwareId.c)
 *     KsepSdbMapToMemory @ 0x14079D24C (KsepSdbMapToMemory.c)
 *     KsepGetShimCallbacksForDriver @ 0x14079D47C (KsepGetShimCallbacksForDriver.c)
 *     KseShimDriverIoCallbacks @ 0x14079D690 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimsForDriver @ 0x14079E39C (KsepGetShimsForDriver.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14079E958 (KsepEngineGetShimsFromRegistry.c)
 *     KseDriverLoadImage @ 0x14079EAC4 (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x1407F7364 (KseDriverUnloadImage.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140800708 (KsepResolveApplicableShimsForDriver.c)
 *     KsepApplyShimsToDriver @ 0x140800924 (KsepApplyShimsToDriver.c)
 *     KseRegisterShimEx @ 0x140800EE0 (KseRegisterShimEx.c)
 *     KseQueryDeviceData @ 0x1408016F0 (KseQueryDeviceData.c)
 *     KsepShimDatabaseTime @ 0x1408019BC (KsepShimDatabaseTime.c)
 *     KsepSdbBootInitialize @ 0x14085E0A8 (KsepSdbBootInitialize.c)
 *     KseUnregisterShim @ 0x1409740B0 (KseUnregisterShim.c)
 *     KsepDeletePatchSdb @ 0x140974504 (KsepDeletePatchSdb.c)
 *     KsepEngineReadFlags @ 0x140B34F48 (KsepEngineReadFlags.c)
 *     KsepMatchInitMachineInfo @ 0x140B35058 (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140B35308 (KsepMatchInitBiosInfo.c)
 *     KseDriverScopeInitialize @ 0x140B35418 (KseDriverScopeInitialize.c)
 *     KseVersionLieInitialize @ 0x140B35488 (KseVersionLieInitialize.c)
 *     KseInitialize @ 0x140B3E688 (KseInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x140B6FF30 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402BDDE0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a2, va, 1);
}
