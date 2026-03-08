/*
 * XREFs of ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0090130
 * Callers:
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0089B40 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C008AEC0 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C008D8B0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A2C90 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00E3514 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E8C04 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B44 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     ?SysMmUnmapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K2@Z @ 0x1C002CA8C (-SysMmUnmapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K2@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C002FF08 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0090480 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C00AE148 (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C00AE384 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 */

__int64 __fastcall CVirtualAddressAllocator::UncommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        struct VIDMM_ALLOC **a3,
        char a4)
{
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rdi
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  int v11; // eax
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 result; // rax
  int v15; // r12d
  struct VIDMM_ALLOC **v16; // r15
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  VIDMM_PAGE_DIRECTORY *v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rcx
  VIDMM_GLOBAL *v23; // r15
  unsigned __int64 v24; // rbp
  UINT *v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v29; // [rsp+54h] [rbp-C4h]
  struct _D3DGPU_PHYSICAL_ADDRESS v30; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+70h] [rbp-A8h] BYREF
  _OWORD v32[3]; // [rsp+80h] [rbp-98h] BYREF
  __int128 v33; // [rsp+B0h] [rbp-68h]
  __int128 v34; // [rsp+C0h] [rbp-58h]

  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
  {
    v7 = *((_DWORD *)a2 + 16);
    v8 = *((_QWORD *)this + 11);
    v9 = *(_QWORD *)(v8 + 40224) + 1616LL * ((v7 >> 4) & 0x3F);
    if ( (*(_BYTE *)(v9 + 444) & 4) != 0 )
    {
      if ( (v7 & 0x800) == 0 )
        return 0LL;
      RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(
                            *(DXGPROCESS **)(*((_QWORD *)this + 12) + 32LL),
                            *(_DWORD *)(*(_QWORD *)(v8 + 24) + 240LL));
      v11 = SysMmUnmapLogicalAddressRange(
              *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)RenderAdapterInfo + 10) + 16LL) + 224LL),
              *((struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 **)RenderAdapterInfo + 5));
      v12 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(1LL, v11);
        DxgkLogInternalTriageEvent(v13, 0x40000LL);
        return v12;
      }
      *((_DWORD *)a2 + 16) &= ~0x800u;
    }
    if ( (*(_BYTE *)(v9 + 444) & 1) == 0 )
      return 0LL;
  }
  v15 = 0;
  v31 = 0LL;
  v16 = (struct VIDMM_ALLOC **)&v31;
  if ( a3 )
    v16 = a3;
  *v16 = 0LL;
  v17 = *((_QWORD *)a2 + 12);
  v18 = (*((_QWORD *)a2 + 13) - v17) >> 12;
  v29 = (*((_DWORD *)a2 + 16) >> 4) & 0x3F;
  v19 = *((_QWORD *)this + 15);
  *(_QWORD *)&v30.SegmentId = 32LL * v29;
  v20 = *(VIDMM_PAGE_DIRECTORY **)(*(_QWORD *)&v30.SegmentId + v19);
  if ( v20 )
  {
    v21 = *(_QWORD *)(*((_QWORD *)this + 11) + 40224LL) + 1616LL * v29;
    v33 = 0LL;
    HIDWORD(v33) = -1;
    memset(v32, 0, sizeof(v32));
    v34 = 0LL;
    if ( (**(_DWORD **)(v21 + 448) & 0x80u) != 0 )
      *(_WORD *)((char *)&v34 + 1) = 257;
    v15 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
            v20,
            this,
            (const struct COMMIT_VA_STATE *)v32,
            0LL,
            v17,
            v18,
            0LL,
            0,
            v16);
    if ( v15 < 0 && *v16 && !a3 )
    {
      WdLogSingleEntry1(1LL, 3366LL);
      DxgkLogInternalTriageEvent(v22, 0x40000LL);
    }
    if ( a4 )
    {
      v23 = (VIDMM_GLOBAL *)*((_QWORD *)this + 11);
      v24 = v17 + (v18 << 12);
      if ( (*((_BYTE *)v23 + 40936) & 0x40) == 0 && v17 <= v24 )
      {
        v25 = (UINT *)(*((_QWORD *)this + 15) + *(_QWORD *)&v30.SegmentId);
        v26 = *(_QWORD *)(*(_QWORD *)v25 + 16LL);
        if ( v26 )
        {
          if ( *(_QWORD *)(v26 + 120) )
          {
            v30.SegmentId = v25[6];
            v30.SegmentOffset = *(_QWORD *)(v26 + 128);
            *(&v30.SegmentId + 1) = 0;
            if ( !*((_QWORD *)this + 14) )
            {
              v27 = VIDMM_GLOBAL::AdapterId(v23);
              *((_QWORD *)this + 14) = VIDMM_PROCESS::GetKmdProcessHandle(*((VIDMM_PROCESS **)this + 12), v27);
            }
            VIDMM_GLOBAL::FlushGpuVaTlb(
              v23,
              v29,
              &v30,
              *((struct VIDMM_PROCESS **)this + 12),
              *((void **)this + 14),
              v17,
              v24);
          }
        }
      }
    }
  }
  *((_DWORD *)a2 + 16) &= ~0x400u;
  result = (unsigned int)v15;
  *((_DWORD *)a2 + 16) &= ~0x1000u;
  return result;
}
