/*
 * XREFs of KsepPoolAllocatePaged @ 0x140209ED0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1403AF0FC (KsepEvntLogShimsApplied.c)
 *     KseAddHardwareId @ 0x140693960 (KseAddHardwareId.c)
 *     KsepGetShimsForDriver @ 0x140694008 (KsepGetShimsForDriver.c)
 *     KsepStringDuplicate @ 0x1406942D4 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x140694384 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x1406945C4 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x140694900 (KsepStringDuplicateUnicode.c)
 *     KsepDbGetDriverShims @ 0x140694A54 (KsepDbGetDriverShims.c)
 *     KsepDbGetDriverShimsInternal @ 0x140694B7C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbCacheReadDevice @ 0x14080AA9C (KsepDbCacheReadDevice.c)
 *     KseRegisterShimEx @ 0x14080ACB0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14080AEDC (KsepGetLoadedModulesList.c)
 *     KsepCacheDeviceInsertData @ 0x14080B2A8 (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x1408462B4 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x14084646C (KsepRegistryQuerySZ.c)
 *     KsepDbGetShimInfo @ 0x140856450 (KsepDbGetShimInfo.c)
 *     KsepStringSplitMultiString @ 0x14085AEAC (KsepStringSplitMultiString.c)
 *     KsepSdbBootInitialize @ 0x140861F18 (KsepSdbBootInitialize.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140976DF8 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepRegistryEnumValue @ 0x140977ADC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140977BD8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x140977CCC (KsepRegistryQueryValue.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void *__fastcall KsepPoolAllocatePaged(size_t Size)
{
  void *Pool2; // rax
  void *v3; // rbx

  Pool2 = (void *)ExAllocatePool2(256LL, Size, 1631933259LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    _InterlockedIncrement(&dword_140C407C0);
    memset(Pool2, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C407D0);
  }
  return v3;
}
