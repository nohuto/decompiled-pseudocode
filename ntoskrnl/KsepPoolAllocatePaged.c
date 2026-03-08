/*
 * XREFs of KsepPoolAllocatePaged @ 0x140303CA4
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1403AA3AC (KsepEvntLogShimsApplied.c)
 *     KseAddHardwareId @ 0x14079CB80 (KseAddHardwareId.c)
 *     KsepGetShimsForDriver @ 0x14079E39C (KsepGetShimsForDriver.c)
 *     KsepStringDuplicate @ 0x14079E668 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x14079E718 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14079E958 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x14079EC94 (KsepStringDuplicateUnicode.c)
 *     KsepDbGetDriverShims @ 0x14079EDE8 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x14079EF10 (KsepDbGetDriverShimsInternal.c)
 *     KsepCacheInitialize @ 0x1407FFE64 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x14080001C (KsepRegistryQuerySZ.c)
 *     KsepDbGetShimInfo @ 0x140800448 (KsepDbGetShimInfo.c)
 *     KsepCacheDeviceInsertData @ 0x140800C10 (KsepCacheDeviceInsertData.c)
 *     KseRegisterShimEx @ 0x140800EE0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14080110C (KsepGetLoadedModulesList.c)
 *     KsepDbCacheReadDevice @ 0x1408013F0 (KsepDbCacheReadDevice.c)
 *     KsepStringSplitMultiString @ 0x1408571CC (KsepStringSplitMultiString.c)
 *     KsepSdbBootInitialize @ 0x14085E0A8 (KsepSdbBootInitialize.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140973D58 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepRegistryEnumValue @ 0x140974A3C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140974B38 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x140974C2C (KsepRegistryQueryValue.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void *__fastcall KsepPoolAllocatePaged(size_t Size)
{
  void *Pool2; // rax
  void *v3; // rbx

  Pool2 = (void *)ExAllocatePool2(256LL, Size, 1631933259LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    _InterlockedIncrement(&dword_140C40380);
    memset(Pool2, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C40390);
  }
  return v3;
}
