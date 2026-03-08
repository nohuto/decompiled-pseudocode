/*
 * XREFs of DpiGetSysMmAdapterFromDevice @ 0x1C0012F3C
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x1C0012E50 (DxgkFreePagesFromMdlCB.c)
 *     DxgkAllocatePagesForMdlCB @ 0x1C0012E90 (DxgkAllocatePagesForMdlCB.c)
 *     DxgkAllocateContiguousMemoryCB @ 0x1C0052030 (DxgkAllocateContiguousMemoryCB.c)
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x1C0052100 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     DxgkFreeContiguousMemoryCB @ 0x1C0052320 (DxgkFreeContiguousMemoryCB.c)
 *     DxgkMapMdlToIoMmuCB @ 0x1C00523A0 (DxgkMapMdlToIoMmuCB.c)
 *     DxgkOpenPhysicalMemoryObjectCB @ 0x1C0052470 (DxgkOpenPhysicalMemoryObjectCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x1C0052570 (DxgkUnmapMdlFromIoMmuCB.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C0012F68 (DpiGetFdoFromDevice.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 DpiGetSysMmAdapterFromDevice()
{
  __int64 FdoFromDevice; // rbx
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  FdoFromDevice = DpiGetFdoFromDevice();
  if ( !FdoFromDevice )
  {
    WdLogSingleEntry1(1LL, 5210LL);
    if ( bTracingEnabled )
    {
      LOBYTE(v3) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v3,
          v2,
          v4,
          0,
          2,
          -1,
          (__int64)L"FdoContext != nullptr",
          5210LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *(_QWORD *)(FdoFromDevice + 5688);
}
