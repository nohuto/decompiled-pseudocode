/*
 * XREFs of DpiGetSysMmAdapterFromDevice @ 0x1C001275C
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x1C0012670 (DxgkFreePagesFromMdlCB.c)
 *     DxgkAllocatePagesForMdlCB @ 0x1C00126B0 (DxgkAllocatePagesForMdlCB.c)
 *     DxgkAllocateContiguousMemoryCB @ 0x1C0052ED0 (DxgkAllocateContiguousMemoryCB.c)
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x1C0052FA0 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     DxgkFreeContiguousMemoryCB @ 0x1C00531C0 (DxgkFreeContiguousMemoryCB.c)
 *     DxgkMapMdlToIoMmuCB @ 0x1C0053240 (DxgkMapMdlToIoMmuCB.c)
 *     DxgkOpenPhysicalMemoryObjectCB @ 0x1C0053310 (DxgkOpenPhysicalMemoryObjectCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x1C0053410 (DxgkUnmapMdlFromIoMmuCB.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FC874 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C0012788 (DpiGetFdoFromDevice.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
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
    WdLogSingleEntry1(1LL, 5192LL);
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
          5192LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *(_QWORD *)(FdoFromDevice + 5688);
}
