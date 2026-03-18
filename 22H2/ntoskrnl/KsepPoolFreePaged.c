/*
 * XREFs of KsepPoolFreePaged @ 0x140209EA8
 * Callers:
 *     KseAddHardwareId @ 0x140693960 (KseAddHardwareId.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1406945C4 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x1406948CC (KsepStringFree.c)
 *     KsepDbFreeDriverShims @ 0x140694D3C (KsepDbFreeDriverShims.c)
 *     KseDriverUnloadImage @ 0x140697128 (KseDriverUnloadImage.c)
 *     KseRegisterShimEx @ 0x14080ACB0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14080AEDC (KsepGetLoadedModulesList.c)
 *     KsepCacheDeviceInsertData @ 0x14080B2A8 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootRelease @ 0x140845904 (KsepSdbBootRelease.c)
 *     KsepCacheInitialize @ 0x1408462B4 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x14084646C (KsepRegistryQuerySZ.c)
 *     KsepDbGetShimInfo @ 0x140856450 (KsepDbGetShimInfo.c)
 *     KsepStringSplitMultiString @ 0x14085AEAC (KsepStringSplitMultiString.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14085BCB0 (KsepResolveApplicableShimsForDriver.c)
 *     KsepSdbBootInitialize @ 0x140861F18 (KsepSdbBootInitialize.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140976DF8 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x140977150 (KseUnregisterShim.c)
 *     KsepCacheDeviceFree @ 0x140977750 (KsepCacheDeviceFree.c)
 *     KsepCacheUninitialize @ 0x140977840 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x140977ADC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140977BD8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x140977CCC (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C407C4);
  }
}
