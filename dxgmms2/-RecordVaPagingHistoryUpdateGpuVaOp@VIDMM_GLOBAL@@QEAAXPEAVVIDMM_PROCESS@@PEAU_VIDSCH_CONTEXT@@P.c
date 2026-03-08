/*
 * XREFs of ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00F3300
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E8C04 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00EAEE8 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1C0001830 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0011B70 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0017980 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x1C00F1D64 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _VIDSCH_CONTEXT *a3,
        struct VIDMM_ALLOC *a4,
        struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *a5)
{
  __int64 VaPagingHistoryEntry; // rax
  __int128 v10; // xmm1
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11,
      (VIDMM_GLOBAL *)((char *)this + 41000));
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
      VaPagingHistoryEntry = (__int64)operator new(96, (VIDMM_GLOBAL *)((char *)this + 41024), 0x12u, 0);
    else
      VaPagingHistoryEntry = VIDMM_GLOBAL::AllocateVaPagingHistoryEntry((__int64)this, 18, 96LL);
    if ( VaPagingHistoryEntry )
    {
      *(_QWORD *)VaPagingHistoryEntry = *(_QWORD *)a2;
      *(_QWORD *)(VaPagingHistoryEntry + 8) = *((_QWORD *)a2 + 4);
      *(_QWORD *)(VaPagingHistoryEntry + 16) = a3;
      *(_OWORD *)(VaPagingHistoryEntry + 32) = *(_OWORD *)&a5->OperationType;
      *(_OWORD *)(VaPagingHistoryEntry + 48) = *(_OWORD *)&a5->Copy.SizeInBytes;
      *(_OWORD *)(VaPagingHistoryEntry + 64) = *(_OWORD *)(&a5->Copy + 1);
      v10 = *(_OWORD *)((char *)&a5->Copy + 40);
      *(_QWORD *)(VaPagingHistoryEntry + 24) = a4;
      *(_OWORD *)(VaPagingHistoryEntry + 80) = v10;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11);
  }
}
