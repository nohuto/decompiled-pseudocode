/*
 * XREFs of KsepDebugPrint @ 0x140526E28
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1403F2E90 (KseKPSOHookDriverTargeted.c)
 *     KsepSdbMapToMemory @ 0x140755244 (KsepSdbMapToMemory.c)
 *     KseShimDriverIoCallbacks @ 0x140757D14 (KseShimDriverIoCallbacks.c)
 *     KsepGetShimCallbacksForDriver @ 0x140757E40 (KsepGetShimCallbacksForDriver.c)
 *     KsepGetShimsForDriver @ 0x140758368 (KsepGetShimsForDriver.c)
 *     KseDriverLoadImage @ 0x14075AD50 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075AF3C (KsepEngineGetShimsFromRegistry.c)
 *     KsepShimDatabaseTime @ 0x14075EAB8 (KsepShimDatabaseTime.c)
 *     KseQueryDeviceData @ 0x14075EC10 (KseQueryDeviceData.c)
 *     KseAddHardwareId @ 0x14075EE8C (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x140772BB4 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x1407BDC00 (KseRegisterShimEx.c)
 *     KsepSdbBootInitialize @ 0x1407D1DF8 (KsepSdbBootInitialize.c)
 *     KseUnregisterShim @ 0x1408BFE70 (KseUnregisterShim.c)
 *     KsepApplyShimsToDriver @ 0x1408C0200 (KsepApplyShimsToDriver.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C0684 (KsepResolveApplicableShimsForDriver.c)
 *     KsepDeletePatchSdb @ 0x1408C0CC4 (KsepDeletePatchSdb.c)
 *     KseKernelPadSectionsOverrideInitialize @ 0x140A38BB0 (KseKernelPadSectionsOverrideInitialize.c)
 *     KseUserCetInitialize @ 0x140A38C28 (KseUserCetInitialize.c)
 *     KseInitialize @ 0x140A3BCCC (KseInitialize.c)
 *     KseZeroPoolInitialize @ 0x140A686BC (KseZeroPoolInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A686E8 (KseDriverScopeInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140A68758 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A68784 (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A687B0 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A687DC (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A68808 (KseVersionLieInitialize.c)
 *     KsepMatchInitMachineInfo @ 0x140A6A0D0 (KsepMatchInitMachineInfo.c)
 *     KsepMatchInitBiosInfo @ 0x140A6A22C (KsepMatchInitBiosInfo.c)
 *     KsepEngineReadFlags @ 0x140A6A47C (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x140A72134 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403643E0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 KsepDebugPrint(__int64 a1, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a2, va, 1);
}
