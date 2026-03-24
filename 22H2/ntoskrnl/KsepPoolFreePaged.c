/*
 * XREFs of KsepPoolFreePaged @ 0x140371F04
 * Callers:
 *     KsepDbFreeDriverShims @ 0x140758720 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075AF3C (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x14075AFF0 (KsepStringFree.c)
 *     KseAddHardwareId @ 0x14075EE8C (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x140772BB4 (KseDriverUnloadImage.c)
 *     KsepSdbBootRelease @ 0x1407BD4C8 (KsepSdbBootRelease.c)
 *     KseRegisterShimEx @ 0x1407BDC00 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407BDF54 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1407BEF40 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407BF100 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1407CC610 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootInitialize @ 0x1407D1DF8 (KsepSdbBootInitialize.c)
 *     KsepDbGetShimInfo @ 0x1408BF86C (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BFB10 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x1408BFE70 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408C0684 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x1408C0E74 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x1408C1090 (KsepCacheDeviceFree.c)
 *     KsepCacheUninitialize @ 0x1408C1180 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1408C145C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C1558 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1408C161C (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2AA84);
  }
}
