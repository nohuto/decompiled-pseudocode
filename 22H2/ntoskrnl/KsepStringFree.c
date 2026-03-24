/*
 * XREFs of KsepStringFree @ 0x14075AFF0
 * Callers:
 *     KsepLoadShimProvider @ 0x140526C40 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x140527120 (KsepCacheHwIdFree.c)
 *     KseShimDriverIoCallbacks @ 0x140757D14 (KseShimDriverIoCallbacks.c)
 *     KsepDbFreeDriverShims @ 0x140758720 (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x14075AC54 (KsepRegistryOpenKey.c)
 *     KseDriverLoadImage @ 0x14075AD50 (KseDriverLoadImage.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14075AF3C (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14075EE8C (KseAddHardwareId.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14075F08C (KsepDbQueryRegistryDeviceData.c)
 *     KsepCacheDeviceInsertData @ 0x1407CC610 (KsepCacheDeviceInsertData.c)
 *     KseSetDeviceFlags @ 0x1408BF630 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1408BFB10 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x1408C0E74 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceFree @ 0x1408C1090 (KsepCacheDeviceFree.c)
 *     KsepRegistryCreateKey @ 0x1408C1218 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140371F04 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x140588750 (RtlAssert.c)
 */

void __fastcall KsepStringFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rax

  if ( a1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      KsepPoolFreePaged(v2);
      *(_OWORD *)a1 = 0LL;
    }
  }
  else
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v3 + 1] = -1073740768;
    KsepHistoryErrors[2 * v3] = 197451;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("String != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x34Bu, 0LL);
  }
}
