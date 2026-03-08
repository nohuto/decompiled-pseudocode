/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00B1F9C
 * Callers:
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C00A66D8 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00AB020 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00B1224 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C008EBA0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A2C90 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRange(
        VIDMM_GLOBAL *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct VIDMM_MAPPED_VA_RANGE *a4,
        char a5,
        const struct _DXGK_ADL *a6,
        unsigned __int64 *a7,
        struct VIDMM_VAD_PENDING_OPERATION *a8)
{
  char v12; // cl
  __int128 v13; // xmm1
  char v14; // al
  _QWORD v16[2]; // [rsp+38h] [rbp-89h] BYREF
  __int128 v17; // [rsp+48h] [rbp-79h]
  __int128 v18; // [rsp+58h] [rbp-69h]
  __int128 v19; // [rsp+68h] [rbp-59h]
  __int128 v20; // [rsp+78h] [rbp-49h]
  __int64 v21; // [rsp+88h] [rbp-39h]
  _QWORD v22[12]; // [rsp+98h] [rbp-29h] BYREF

  memset(v22, 0, 0x58uLL);
  v12 = 0;
  v22[0] = -4294967183LL;
  v22[6] = a4;
  v13 = *(_OWORD *)a6;
  v22[5] = a2;
  *(_OWORD *)&v22[7] = v13;
  v22[9] = a8;
  if ( a5 )
  {
    a6 = 0LL;
    return VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
             0LL,
             (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)&v22[5],
             (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)&a6);
  }
  else
  {
    v16[0] = 113LL;
    v21 = 0LL;
    v16[1] = *((_QWORD *)a3 + 17);
    v14 = *((_DWORD *)a4 + 16) & 0xF;
    v17 = 0LL;
    if ( v14 == 1 )
      *(_QWORD *)&v17 = *((_QWORD *)a4 + 7);
    v19 = v13;
    v18 = *(_OWORD *)&v22[5];
    v20 = *(_OWORD *)&v22[9];
    BYTE8(v20) = 1;
    if ( !a7 || !dword_1C007646C )
      v12 = 1;
    return VIDMM_GLOBAL::QueueDeferredCommand(this, a3, (struct _VIDMM_DEFERRED_COMMAND *)v16, v12, a7);
  }
}
