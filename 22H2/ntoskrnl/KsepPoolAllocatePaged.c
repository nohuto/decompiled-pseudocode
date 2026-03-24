/*
 * XREFs of KsepPoolAllocatePaged @ 0x140371F2C
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x140526E6C (KsepEvntLogShimsApplied.c)
 *     KsepDbCacheReadDevice @ 0x14075566C (KsepDbCacheReadDevice.c)
 *     KsepGetShimsForDriver @ 0x140758368 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x140758450 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075867C (KsepDbGetDriverShimsInternal.c)
 *     KsepStringDuplicate @ 0x14075AA64 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x14075AB14 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075AF3C (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x14075B024 (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x14075EE8C (KseAddHardwareId.c)
 *     KseRegisterShimEx @ 0x1407BDC00 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407BDF54 (KsepGetLoadedModulesList.c)
 *     KsepCacheInitialize @ 0x1407BEF40 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407BF100 (KsepRegistryQuerySZ.c)
 *     KsepCacheDeviceInsertData @ 0x1407CC610 (KsepCacheDeviceInsertData.c)
 *     KsepSdbBootInitialize @ 0x1407D1DF8 (KsepSdbBootInitialize.c)
 *     KsepDbGetShimInfo @ 0x1408BF86C (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BFB10 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1408C0E74 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x1408C145C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408C1558 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x1408C161C (KsepRegistryQueryValue.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2AA80);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2AA90);
  }
  return v3;
}
