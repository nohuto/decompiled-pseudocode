/*
 * XREFs of KsepPoolFreePaged @ 0x140303C7C
 * Callers:
 *     KseAddHardwareId @ 0x14079CB80 (KseAddHardwareId.c)
 *     KsepDbFreeDriverShims @ 0x14079E360 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14079E958 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x14079EC60 (KsepStringFree.c)
 *     KseDriverUnloadImage @ 0x1407F7364 (KseDriverUnloadImage.c)
 *     KsepCacheInitialize @ 0x1407FFE64 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x14080001C (KsepRegistryQuerySZ.c)
 *     KsepDbGetShimInfo @ 0x140800448 (KsepDbGetShimInfo.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140800708 (KsepResolveApplicableShimsForDriver.c)
 *     KsepCacheDeviceInsertData @ 0x140800C10 (KsepCacheDeviceInsertData.c)
 *     KseRegisterShimEx @ 0x140800EE0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14080110C (KsepGetLoadedModulesList.c)
 *     KsepSdbBootRelease @ 0x140842AC4 (KsepSdbBootRelease.c)
 *     KsepStringSplitMultiString @ 0x1408571CC (KsepStringSplitMultiString.c)
 *     KsepSdbBootInitialize @ 0x14085E0A8 (KsepSdbBootInitialize.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140973D58 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x1409740B0 (KseUnregisterShim.c)
 *     KsepCacheDeviceFree @ 0x1409746B0 (KsepCacheDeviceFree.c)
 *     KsepCacheUninitialize @ 0x1409747A0 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x140974A3C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140974B38 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x140974C2C (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C40384);
  }
}
