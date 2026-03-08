/*
 * XREFs of ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00255B4
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0196360 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEAU_D3DKMT_GETALLOCATIONPRIORITY@@@Z @ 0x1C0384758 (-VmBusSendGetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C0387F18 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 *     ?VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@PEBI@Z @ 0x1C0388A50 (-VmBusSendReclaimAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEB.c)
 *     ?VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_SETALLOCATIONPRIORITY@@@Z @ 0x1C0389190 (-VmBusSendSetAllocationPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0185514 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

DXGRESOURCEREFERENCE *__fastcall DXGPROCESS::GetResourceUnsafe(__int64 a1, DXGRESOURCEREFERENCE *a2, unsigned int a3)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  struct DXGRESOURCE *v10; // rbx

  v4 = (a3 >> 6) & 0xFFFFFF;
  if ( v4 < *(_DWORD *)(a1 + 296)
    && (v5 = *(_QWORD *)(a1 + 280), ((a3 >> 25) & 0x60) == (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0x60))
    && (*(_DWORD *)(v5 + 16LL * v4 + 8) & 0x2000) == 0
    && (v6 = *(_DWORD *)(v5 + 16LL * v4 + 8) & 0x1F) != 0 )
  {
    if ( v6 == 4 )
    {
      v10 = *(struct DXGRESOURCE **)(v5 + 16LL * v4);
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      v10 = 0LL;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0,
          0,
          -1,
          (__int64)L"Handle type mismatch",
          267LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  else
  {
    v10 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE(a2, v10);
  return a2;
}
