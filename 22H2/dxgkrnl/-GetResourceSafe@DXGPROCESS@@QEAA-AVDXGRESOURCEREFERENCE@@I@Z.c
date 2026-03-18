/*
 * XREFs of ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00250B0
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C019E2B8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01A4774 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x1C01C8970 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C01CBA50 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C02D79A4 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C02D84A4 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C02D891C (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 *     DxgkGetResourcePresentPrivateDriverData @ 0x1C02DA190 (DxgkGetResourcePresentPrivateDriverData.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C02E9B38 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0307E5C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01A3F58 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

DXGRESOURCEREFERENCE *__fastcall DXGPROCESS::GetResourceSafe(__int64 a1, DXGRESOURCEREFERENCE *a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  struct DXGRESOURCE *v13; // rbx

  v3 = a1 + 248;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(a1 + 248));
  v7 = (a3 >> 6) & 0xFFFFFF;
  if ( v7 < *(_DWORD *)(a1 + 296)
    && (v8 = *(_QWORD *)(a1 + 280), ((a3 >> 25) & 0x60) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x60))
    && (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x2000) == 0
    && (v9 = *(_DWORD *)(v8 + 16LL * v7 + 8) & 0x1F) != 0 )
  {
    if ( v9 == 4 )
    {
      v13 = *(struct DXGRESOURCE **)(v8 + 16LL * v7);
    }
    else
    {
      WdLogSingleEntry1(2LL, 316LL);
      v13 = 0LL;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v11,
          v10,
          v12,
          0,
          0,
          -1,
          (__int64)L"Handle type mismatch",
          316LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  else
  {
    v13 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(a2, v13);
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 16));
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return a2;
}
