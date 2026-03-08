/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008E1D0
 * Callers:
 *     ?RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z @ 0x1C004D524 (-RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A2C90 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00AB020 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B50C8 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BA280 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00C26EC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E8C04 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E9808 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00EAC60 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x1C00F103C (-RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDM.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1C00F2DFC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0015230 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0019B44 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C001BC86 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C002C870 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     ?SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_N@Z @ 0x1C002CA44 (-SysMmMapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K22PEBU_DXGK_ADL@@_N.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C002FF08 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C0030060 (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0087B88 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C00A62A4 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C00B29A4 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B50C8 (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00EF95C (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall CVirtualAddressAllocator::CommitVirtualAddressRange(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned __int64 a5,
        struct _DXGK_ADL *a6,
        int a7,
        DXGK_MULTIPLANE_OVERLAY_PLANE3 **a8,
        DXGK_HDR_METADATA *a9)
{
  DXGK_MULTIPLANE_OVERLAY_PLANE3 **ppPlanes; // rbx
  DXGK_HDR_METADATA *pHDRMetaData; // r12
  __int64 v14; // rdx
  __int64 v15; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  int v17; // eax
  unsigned int v18; // r12d
  __int64 v19; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r12
  UINT v23; // r11d
  int v24; // ebx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // r9
  VIDMM_PAGE_DIRECTORY *v33; // rdx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v35; // ebx
  unsigned int v36; // ecx
  unsigned int v37; // edx
  __int64 v38; // rax
  unsigned int RootPageTableSize; // eax
  __int64 v40; // rcx
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v42; // rcx
  int v43; // ebx
  VIDMM_PAGE_DIRECTORY *v44; // rcx
  DXGK_MULTIPLANE_OVERLAY_PLANE3 **v45; // r8
  int v46; // ebx
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // r11d
  char v50; // al
  __int64 VidMmGlobalAllocFromOwner; // rax
  _DWORD *v52; // r10
  int v53; // eax
  struct _DXGK_ADL *v54; // r15
  __int128 v55; // xmm0
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // r15d
  __int64 v59; // rbx
  __int64 v60; // rcx
  _DWORD *v61; // rax
  __int64 *v62; // r8
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  char v66; // al
  int v67; // eax
  unsigned __int64 v68; // rdx
  unsigned int v69; // ebx
  int v70; // eax
  int v71; // eax
  unsigned __int64 v72; // [rsp+20h] [rbp-E0h]
  char v73; // [rsp+50h] [rbp-B0h]
  unsigned int v74; // [rsp+54h] [rbp-ACh]
  int v75; // [rsp+60h] [rbp-A0h]
  _DWORD *v76; // [rsp+68h] [rbp-98h]
  unsigned int v77; // [rsp+70h] [rbp-90h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v78; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v79; // [rsp+78h] [rbp-88h]
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 v81; // [rsp+88h] [rbp-78h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-48h]
  __int64 v83; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v84; // [rsp+C8h] [rbp-38h]
  __int64 v85; // [rsp+D0h] [rbp-30h]
  _QWORD v86[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v87; // [rsp+F8h] [rbp-8h]
  __int128 v88; // [rsp+100h] [rbp+0h]
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // [rsp+110h] [rbp+10h]
  int v90; // [rsp+118h] [rbp+18h]
  int v91; // [rsp+11Ch] [rbp+1Ch]
  __int64 v92; // [rsp+120h] [rbp+20h]
  __int64 v93; // [rsp+128h] [rbp+28h]

  ppPlanes = a8;
  pHDRMetaData = a9;
  v81.ppPlanes = a8;
  v81.pHDRMetaData = a9;
  if ( (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() )
  {
    v14 = *(_QWORD *)(a1 + 88);
    v15 = *(_QWORD *)(v14 + 40224) + 1616LL * ((*(_DWORD *)(a2 + 64) >> 4) & 0x3F);
    if ( (*(_DWORD *)(a2 + 64) & 0x800) == 0 && (*(_BYTE *)(v15 + 444) & 4) != 0 )
    {
      RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(
                            *(DXGPROCESS **)(*(_QWORD *)(a1 + 96) + 32LL),
                            *(_DWORD *)(*(_QWORD *)(v14 + 24) + 240LL));
      HIDWORD(v72) = HIDWORD(a5);
      v17 = SysMmMapLogicalAddressRange(
              *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)RenderAdapterInfo + 10) + 16LL) + 224LL),
              *((struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 **)RenderAdapterInfo + 5));
      v18 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry1(1LL, v17);
        DxgkLogInternalTriageEvent(v19, 0x40000LL);
        return v18;
      }
      *(_DWORD *)(a2 + 64) |= 0x800u;
      pHDRMetaData = v81.pHDRMetaData;
    }
    if ( (*(_BYTE *)(v15 + 444) & 1) == 0 )
      return 0LL;
    ppPlanes = v81.ppPlanes;
  }
  if ( a7 == 2 )
    LOBYTE(pHDRMetaData->Type) = 0;
  *ppPlanes = 0LL;
  v21 = *(_QWORD *)(a2 + 96);
  v22 = (*(_QWORD *)(a2 + 104) - v21) >> 12;
  v23 = (*(_DWORD *)(a2 + 64) >> 4) & 0x3F;
  v24 = (int)(*(_DWORD *)(a2 + 64) << 28) >> 28;
  v79 = v21;
  v21 >>= 12;
  v81.pPostComposition = *(DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION **)(a2 + 56);
  v25 = *(_QWORD *)(a2 + 72);
  v74 = v23;
  v26 = v21 + v22;
  v75 = v24;
  v84 = v25;
  if ( v21 + v22 <= v21 )
  {
    WdLogSingleEntry1(1LL, 2706LL);
    DxgkLogInternalTriageEvent(v27, 0x40000LL);
    return 3221225485LL;
  }
  if ( v26 > *(_QWORD *)(a1 + 16) >> 12 )
  {
    WdLogSingleEntry1(1LL, 2711LL);
    DxgkLogInternalTriageEvent(v28, 0x40000LL);
    return 3221225485LL;
  }
  v29 = -2;
  if ( (*(_BYTE *)(a2 + 88) & 4) == 0 )
    v29 = a4;
  LODWORD(v83) = v29;
  v30 = *(_QWORD *)(a1 + 120) + 32LL * v23;
  v85 = v23;
  v31 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)&v81.Duration = 1616LL * v23;
  v32 = *(_QWORD *)&v81.Duration + *(_QWORD *)(v31 + 40224);
  v33 = *(VIDMM_PAGE_DIRECTORY **)v30;
  v82 = v32;
  *(_QWORD *)&v81.OutputFlags.0 = v33;
  v76 = *(_DWORD **)(v32 + 448);
  if ( !v33 || (*(_DWORD *)v33 & 8) != 0 )
  {
    v25 = *(_QWORD *)(v32 + 48 * (*(unsigned int *)(v32 + 436) + 2LL) + 24);
    VidPnSourceId = *(_DWORD *)(v30 + 16);
    v35 = (((v26 - 1) & *(_QWORD *)(v32 + 48 * (*(unsigned int *)(v32 + 436) + 2LL) + 16)) >> v25) + 1;
    v78 = VidPnSourceId;
    if ( v35 > VidPnSourceId || !v33 )
    {
      v36 = *(_DWORD *)(v30 + 20);
      v37 = v36;
      v77 = v36;
      if ( *(_DWORD *)(*(_QWORD *)(v32 + 448) + 16LL) == 2 )
      {
        *(_DWORD *)(v30 + 16) = v35;
        v38 = *(_QWORD *)(a1 + 88);
        v81.VidPnSourceId = v35;
        v81.InputFlags.Value = v23;
        RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v38 + 16), &v81);
        v36 = v77;
        v37 = RootPageTableSize;
        *(_DWORD *)(v30 + 20) = RootPageTableSize;
        VidPnSourceId = v81.VidPnSourceId;
        *(_DWORD *)(v30 + 16) = v81.VidPnSourceId;
      }
      if ( VidPnSourceId < v35 || v37 < v36 )
      {
        WdLogSingleEntry1(1LL, VidPnSourceId);
        DxgkLogInternalTriageEvent(v40, 0x40000LL);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 48LL, a1, 0LL, 0LL);
      }
      PageDirectory = CreatePageDirectory((struct CVirtualAddressAllocator *)a1, v74, *(_DWORD *)(v82 + 436));
      *(_QWORD *)v30 = PageDirectory;
      if ( !PageDirectory )
      {
        WdLogSingleEntry1(1LL, 2755LL);
        DxgkLogInternalTriageEvent(v42, 0x40000LL);
        *(_QWORD *)v30 = *(_QWORD *)&v81.OutputFlags.0;
        *(_DWORD *)(v30 + 16) = v78;
        *(_DWORD *)(v30 + 20) = v77;
        return 3221225495LL;
      }
      if ( *(_QWORD *)&v81.OutputFlags.0 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *(VIDMM_PROCESS **)(a1 + 96),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
          1);
        v43 = *(_DWORD *)(v30 + 16);
        v44 = *(VIDMM_PAGE_DIRECTORY **)&v81.OutputFlags.0;
        *(_DWORD *)(v30 + 16) = v78;
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v44, (struct CVirtualAddressAllocator *)a1, 0LL);
        v45 = v81.ppPlanes;
        *(_DWORD *)(v30 + 16) = v43;
        v46 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(
                (CVirtualAddressAllocator *)a1,
                1LL << v74,
                (struct VIDMM_ALLOC **)v45);
        CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v74, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 88), v74);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *(VIDMM_PROCESS **)(a1 + 96),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
          0);
        if ( v46 < 0 )
        {
          WdLogSingleEntry1(1LL, 2801LL);
          DxgkLogInternalTriageEvent(v47, 0x40000LL);
          return (unsigned int)v46;
        }
      }
    }
    v24 = v75;
  }
  v73 = 0;
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 56));
    v73 = 1;
  }
  if ( bTracingEnabled && (byte_1C00769C2 & 0x20) != 0 )
  {
    LODWORD(v72) = v24;
    McTemplateK0pqxx_EtwWriteTransfer(v25, &CommitVirtualAddressStart, v26, v81.pPostComposition, v72, v79, v22);
  }
  v48 = *(_QWORD *)(a2 + 120);
  v86[1] = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  if ( v48 )
  {
    v87 = *(_QWORD *)(a2 + 112) >> 12;
    v93 = v48;
  }
  v49 = v83;
  v86[2] = *(_QWORD *)(a2 + 80);
  v86[0] = 1LL;
  if ( (_DWORD)v83 == -2 )
  {
    v86[0] = 3LL;
    if ( !(_WORD)v79 && (v22 & 0xF) == 0 )
    {
      v50 = v92;
      if ( v76[3] )
        v50 = 1;
      LOBYTE(v92) = v50;
    }
    VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(
                                  (int)(*(_DWORD *)(a2 + 64) << 28) >> 28,
                                  *(_QWORD *)(a2 + 56));
    if ( VidMmGlobalAllocFromOwner )
    {
      v53 = *(_DWORD *)(VidMmGlobalAllocFromOwner + 32);
      if ( !v53 || (_WORD)v53 )
        LOBYTE(v92) = 0;
    }
    goto LABEL_53;
  }
  if ( (_DWORD)v83 != -3 )
  {
    if ( (_DWORD)v83 == -1 )
      goto LABEL_52;
    v62 = *(__int64 **)(a2 + 56);
    v63 = (int)(*(_DWORD *)(a2 + 64) << 28) >> 28;
    if ( v63 == 3 )
    {
LABEL_73:
      v52 = v76;
      if ( !(_WORD)v79 && v76[3] && (v48 & 0xF) == 0 && !*(_WORD *)(a2 + 112) )
      {
        if ( (_DWORD)v83 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 3712LL)
                                     + 8LL
                                     * (unsigned int)(v83
                                                    + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 40224LL)
                                                                + *(_QWORD *)&v81.Duration
                                                                + 28LL)
                                                    - 1))
                         + 376LL) == 0x10000
            && !(_WORD)a5 )
          {
            v66 = v92;
            if ( (v22 & 0xF) == 0 )
              v66 = 1;
            LOBYTE(v92) = v66;
          }
          if ( v62 )
          {
            v67 = *((_DWORD *)v62 + 8);
            if ( !v67 || (_WORD)v67 )
              LOBYTE(v92) = 0;
          }
        }
        else if ( !(_WORD)a5 && (*(_DWORD *)(a1 + 144) & 4) == 0 && v62 && (v62[9] & 0x100) != 0 )
        {
          LOBYTE(v92) = 1;
        }
      }
      v68 = (32 * (v83 & 0x1F | ((unsigned __int64)(a3 & 0x3F) << 6))) | 1;
      v86[0] = v68;
      if ( (*v76 & 0x40) == 0 || v62 && (*(_DWORD *)v62[67] & 0x80u) != 0 )
      {
        v54 = a6;
      }
      else
      {
        v54 = a6;
        if ( (*(_DWORD *)(a1 + 144) & 4) == 0
          && (*((_DWORD *)a6 + 1) & 1) != 0
          && ((_DWORD)v83 || (*v76 & 0x800) != 0 && *(_BYTE *)(*(_QWORD *)(a1 + 88) + 40180LL)) )
        {
          BYTE3(v92) = 1;
        }
      }
      if ( (*v76 & 0x10) != 0 && (v24 == 2 || v24 == 7 || v62 && (*(_DWORD *)v62[67] & 4) != 0) )
      {
        v68 = (32 * (v83 & 0x1F | ((unsigned __int64)(a3 & 0x3F) << 6))) | 5;
        v86[0] = v68;
      }
      if ( (*v76 & 1) != 0 && (*(_BYTE *)(a2 + 88) & 1) == 0 )
      {
        v68 |= 8uLL;
        v86[0] = v68;
      }
      if ( (*v76 & 2) != 0 && (*(_BYTE *)(a2 + 88) & 2) == 0 )
        v86[0] = v68 | 0x10;
      goto LABEL_54;
    }
    v64 = v63 - 1;
    if ( v64 )
    {
      v65 = v64 - 3;
      if ( v65 )
      {
        if ( v65 != 1 )
        {
LABEL_72:
          v62 = 0LL;
          goto LABEL_73;
        }
        v62 = (__int64 *)v62[3];
      }
      else
      {
        v62 = (__int64 *)v62[8];
      }
    }
    if ( v62 )
    {
      v62 = *(__int64 **)*v62;
      goto LABEL_73;
    }
    goto LABEL_72;
  }
  LOBYTE(v92) = 1;
LABEL_52:
  v52 = v76;
LABEL_53:
  v54 = a6;
LABEL_54:
  v55 = *(_OWORD *)v54;
  v91 = v49;
  pPostComposition = v81.pPostComposition;
  v88 = v55;
  v90 = v24;
  if ( (*v52 & 0x80u) != 0 )
    *(_WORD *)((char *)&v92 + 1) = 257;
  v58 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
          *(VIDMM_PAGE_DIRECTORY **)v30,
          (struct CVirtualAddressAllocator *)a1,
          (const struct COMMIT_VA_STATE *)v86,
          v84,
          v79,
          v22,
          a5,
          0,
          (struct VIDMM_ALLOC **)v81.ppPlanes);
  if ( bTracingEnabled && (byte_1C00769C2 & 0x20) != 0 )
    McTemplateK0p_EtwWriteTransfer(v56, &CommitVirtualAddressEnd, v57, v81.pPostComposition);
  v59 = *(_QWORD *)(a1 + 88);
  if ( ((unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage()
     && (*(_BYTE *)(*(_QWORD *)(v59 + 40224) + *(_QWORD *)&v81.Duration + 444LL) & 1) == 0
     || ((v60 = *(_QWORD *)(*(_QWORD *)(v59 + 16) + 1264LL)) != 0 ? (v61 = (_DWORD *)(v60 + 144 * v85)) : (v61 = 0LL),
         (*v61 & 0x400) != 0))
    && !BYTE5(v92) )
  {
    v69 = v74;
  }
  else
  {
    v69 = v74;
    if ( a7 == 1 )
    {
      CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)a1, v74, v79, (v22 << 12) + v79);
    }
    else if ( a7 == 2 )
    {
      LOBYTE(v81.pHDRMetaData->Type) = 1;
    }
  }
  if ( BYTE4(v92) )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 88), v69);
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
      *(VIDMM_PROCESS **)(a1 + 96),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 24LL) + 240LL),
      0);
  }
  v70 = *(_DWORD *)(a2 + 64);
  if ( v58 < 0 )
    v71 = v70 | 0x1000;
  else
    v71 = v70 | 0x400;
  *(_DWORD *)(a2 + 64) = v71;
  if ( v73 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v58;
}
