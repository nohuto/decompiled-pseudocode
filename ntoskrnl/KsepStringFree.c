/*
 * XREFs of KsepStringFree @ 0x14079EC60
 * Callers:
 *     KsepLoadShimProvider @ 0x14057E7A8 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x14057E880 (KsepCacheHwIdFree.c)
 *     KseAddHardwareId @ 0x14079CB80 (KseAddHardwareId.c)
 *     KseShimDriverIoCallbacks @ 0x14079D690 (KseShimDriverIoCallbacks.c)
 *     KsepDbFreeDriverShims @ 0x14079E360 (KsepDbFreeDriverShims.c)
 *     KsepRegistryOpenKey @ 0x14079E858 (KsepRegistryOpenKey.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14079E958 (KsepEngineGetShimsFromRegistry.c)
 *     KseDriverLoadImage @ 0x14079EAC4 (KseDriverLoadImage.c)
 *     KsepCacheDeviceInsertData @ 0x140800C10 (KsepCacheDeviceInsertData.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14080187C (KsepDbQueryRegistryDeviceData.c)
 *     KsepStringSplitMultiString @ 0x1408571CC (KsepStringSplitMultiString.c)
 *     KseSetDeviceFlags @ 0x140973B40 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140973D58 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepCacheDeviceFree @ 0x1409746B0 (KsepCacheDeviceFree.c)
 *     KsepRegistryCreateKey @ 0x1409747F8 (KsepRegistryCreateKey.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140303C7C (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1405A7CA0 (RtlAssert.c)
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
