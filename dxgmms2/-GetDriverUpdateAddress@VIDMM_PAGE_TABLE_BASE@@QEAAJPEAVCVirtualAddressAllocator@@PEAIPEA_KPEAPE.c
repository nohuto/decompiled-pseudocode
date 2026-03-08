/*
 * XREFs of ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00920C0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0092740 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0093288 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0095AF0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00F3B98 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0015230 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C0019220 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00338C4 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00339A8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0087B88 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C008A6D4 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z @ 0x1C00B467C (-VidMmiInitializeAdlForMdl@@YAXPEAU_DXGK_ADL@@PEAU_MDL@@_K@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00E0BDC (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00E3514 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1C00E6268 (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1C00F2DFC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        void **a5)
{
  __int64 v5; // rbp
  _QWORD *v6; // r10
  PVOID v11; // rdi
  __int64 v12; // rcx
  unsigned int v13; // edx
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v18; // rax
  __int64 GpuVirtualAddress; // rax
  __int64 *v20; // r9
  __int64 v21; // rax
  unsigned int v22; // r12d
  int v23; // r13d
  struct _MDL *SegmentAddressMdl; // rax
  __int64 v25; // rdx
  struct _MDL *v26; // r15
  unsigned __int64 LogicalAddress; // rax
  unsigned int v28; // r8d
  __int64 v29; // rax
  struct _VIDMM_GLOBAL_ALLOC *v30; // r9
  unsigned __int64 v31; // r8
  unsigned int v32; // edx
  struct VIDMM_MAPPED_VA_RANGE *v33; // r15
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 **v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // r9
  struct VIDMM_CPU_HOST_APERTURE *v40; // rbp
  struct VIDMM_ALLOC *v41; // rdx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  _OWORD v43[4]; // [rsp+50h] [rbp-48h] BYREF
  PVOID P; // [rsp+A0h] [rbp+8h] BYREF
  CVirtualAddressAllocator *v45; // [rsp+A8h] [rbp+10h]

  v5 = *((_QWORD *)a2 + 11);
  v6 = (_QWORD *)*((_QWORD *)this + 2);
  v11 = 0LL;
  v12 = v6[15];
  if ( (*(_BYTE *)(v5 + 40936) & 0x40) == 0 )
  {
    v13 = *(_DWORD *)this;
    v14 = (int)(*(_DWORD *)this << 16) >> 29;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        *a3 = 0;
        *a4 = 0LL;
        v18 = (v13 >> 7) & 0x1F;
        v45 = *(CVirtualAddressAllocator **)(v5 + 8 * v18 + 40416);
        if ( v45 == a2 )
        {
          GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress(*((VIDMM_ALLOC **)this + 3), (v13 >> 7) & 0x1F);
          *v20 = GpuVirtualAddress;
          goto LABEL_7;
        }
        v21 = *((_QWORD *)a2 + 15) + 32 * v18;
        if ( (v13 & 7) != 0 )
          v22 = *(_DWORD *)(v21 + 24);
        else
          v22 = *(_DWORD *)(v21 + 28);
        v23 = 0;
        while ( 1 )
        {
          SegmentAddressMdl = VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(this);
          v25 = *((_QWORD *)this + 2);
          v26 = SegmentAddressMdl;
          v43[0] = 0LL;
          if ( SegmentAddressMdl )
          {
            LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(v25 + 528));
            VidMmiInitializeAdlForMdl((struct _DXGK_ADL *)v43, v26, LogicalAddress);
          }
          else
          {
            v28 = *(_DWORD *)(v25 + 16);
            v29 = (*(_DWORD *)(*(_QWORD *)(v25 + 120) + 80LL) & 0x1000) != 0 ? 0LL : *(__int64 *)(v25 + 128) >> 12;
            DWORD1(v43[0]) = 1;
            *((_QWORD *)&v43[0] + 1) = v29 & 0xFFFFFFFFFFFFFLL;
            LODWORD(v43[0]) = v28 >> 12;
          }
          v30 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 2);
          v31 = *((_QWORD *)v30 + 2);
          v32 = (*(_DWORD *)this >> 7) & 0x1F;
          LOBYTE(P) = 0;
          v33 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                  (VIDMM_PAGING_PROCESS *)(v5 + 40384),
                  v32,
                  v31,
                  v30,
                  0LL,
                  v22,
                  0LL,
                  (const struct _DXGK_ADL *)v43,
                  (unsigned __int8 *)&P,
                  0LL);
          if ( v33 )
            break;
          if ( v23 )
          {
            if ( (unsigned int)++v23 >= 2 )
            {
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 270LL, 48LL, this, 1LL, 0LL);
              break;
            }
          }
          else
          {
            VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
            VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F);
            v23 = 1;
          }
        }
        if ( VIDMM_GLOBAL::MustFlushTlbOnValidTransition((VIDMM_GLOBAL *)v5, (*(_DWORD *)this >> 7) & 0x1F) )
          CVirtualAddressAllocator::FlushGpuVaTlb(
            v45,
            (*(_DWORD *)this >> 7) & 0x1F,
            *((_QWORD *)v33 + 12),
            *((_QWORD *)v33 + 13));
        v34 = (__int64 *)((char *)v33 + 24);
        v35 = *((_QWORD *)this + 3) + 128LL;
        v36 = *(__int64 ***)(*((_QWORD *)this + 3) + 136LL);
        if ( *v36 != (__int64 *)v35 )
          __fastfail(3u);
        *v34 = v35;
        *((_QWORD *)v33 + 4) = v36;
        *v36 = v34;
        *(_QWORD *)(v35 + 8) = v34;
        v37 = *((_QWORD *)v33 + 12);
        *a3 = v22;
      }
      else
      {
        if ( (*(_DWORD *)(v12 + 80) & 0x1000) == 0 )
        {
          *a3 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)v12);
          *v39 = *(_QWORD *)(***((_QWORD ***)this + 3) + 128LL);
          goto LABEL_7;
        }
        v38 = v6[11];
        *a3 = 0;
        v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct CVirtualAddressAllocator *))(**(_QWORD **)(*(_QWORD *)(v38 + 8) + 24LL)
                                                                                           + 104LL))(
                *(_QWORD *)(*(_QWORD *)(v38 + 8) + 24LL),
                *(_QWORD *)(v38 + 24),
                a2);
      }
      goto LABEL_31;
    }
  }
  if ( !v12 )
  {
    *a4 = 0LL;
    *a3 = 0;
    goto LABEL_46;
  }
  v15 = *(_DWORD *)(v12 + 80);
  if ( (v15 & 0x1001) == 0 )
  {
    if ( (v15 & 0x2000) == 0 )
    {
      if ( (v15 & 4) == 0 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 48LL, this, 0LL, 0LL);
        *a4 = 0LL;
        *a3 = 0;
        goto LABEL_46;
      }
      v16 = v6[16] + *(_QWORD *)(v12 + 32);
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 24) + 436LL) & 8) == 0 )
        v16 = MmMapIoSpaceEx(v16, v6[2], 1028LL);
      goto LABEL_6;
    }
    v40 = *(struct VIDMM_CPU_HOST_APERTURE **)(v12 + 504);
    v41 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 3);
    P = 0LL;
    if ( VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture((VIDMM_GLOBAL *)v12, v41, v40, (struct _MDL **)&P) < 0 )
    {
      WdLogSingleEntry0(3LL);
      *a4 = 0LL;
      *a3 = 0;
      goto LABEL_46;
    }
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v11 = P;
    v37 = (*((__int64 (__fastcall **)(PVOID, _QWORD, __int64))VirtualMemoryInterface + 5))(P, 0LL, 2LL);
    if ( !v37 )
    {
      VIDMM_CPU_HOST_APERTURE::UnmapRange(v40, *((struct _VIDMM_GLOBAL_ALLOC **)this + 2));
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v40, *((struct _VIDMM_GLOBAL_ALLOC **)this + 2));
      ExFreePoolWithTag(v11, 0);
      WdLogSingleEntry0(3LL);
      *a4 = 0LL;
      *a3 = 0;
      goto LABEL_46;
    }
    *a3 = 0;
LABEL_31:
    *a4 = v37;
    goto LABEL_7;
  }
  v16 = *(_QWORD *)(**((_QWORD **)this + 3) + 16LL);
LABEL_6:
  *a4 = v16;
  *a3 = 0;
  if ( v16 )
  {
LABEL_7:
    *a5 = v11;
    return 0LL;
  }
LABEL_46:
  WdLogSingleEntry1(2LL, this);
  return 3221225495LL;
}
