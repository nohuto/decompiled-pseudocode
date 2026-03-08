/*
 * XREFs of ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C00135E4
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x1C0012E50 (DxgkFreePagesFromMdlCB.c)
 *     DxgkFreeContiguousMemoryCB @ 0x1C0052320 (DxgkFreeContiguousMemoryCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x1C0052570 (DxgkUnmapMdlFromIoMmuCB.c)
 * Callees:
 *     SmmClosePhysicalObject @ 0x1C0013468 (SmmClosePhysicalObject.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall SysMmClosePhysicalObjectByAdapter(struct SYSMM_ADAPTER **a1, struct SYSMM_ADAPTER *a2, int a3)
{
  __int64 *v3; // rbx

  v3 = (__int64 *)(a1 + 8);
  if ( a1[10] != a2 )
  {
    WdLogSingleEntry1(1LL, 1249LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          (_DWORD)a2,
          a3,
          0,
          2,
          -1,
          (__int64)L"pAdapterObject->Adapter == pAdapter",
          1249LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  SmmClosePhysicalObject(v3, (__int64)a2, a3);
}
