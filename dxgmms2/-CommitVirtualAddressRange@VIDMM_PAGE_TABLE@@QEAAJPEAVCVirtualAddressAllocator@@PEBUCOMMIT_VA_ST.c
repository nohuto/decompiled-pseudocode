/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0092740
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00F21E4 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00F2438 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00338C4 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00339A8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0091950 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00920C0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0092EEC (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0093288 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z @ 0x1C00933C0 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00EF95C (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00F3B98 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        UINT64 a4,
        unsigned __int64 BaseAddress,
        struct VIDMM_GLOBAL *P,
        unsigned __int64 a7,
        unsigned __int8 a8,
        struct VIDMM_ALLOC **a9)
{
  struct VIDMM_ALLOC **v9; // r10
  unsigned __int64 v12; // rcx
  char *v14; // r8
  struct VIDMM_GLOBAL *v15; // r11
  unsigned int v16; // edx
  unsigned __int64 v17; // rdi
  __int64 v18; // rbp
  unsigned __int64 v19; // r12
  __int64 v20; // r9
  int v21; // ebx
  unsigned int v22; // r15d
  __int64 v23; // rax
  LONG v24; // ebx
  unsigned __int8 v25; // r13
  unsigned int v26; // eax
  unsigned int v27; // r15d
  struct VIDMM_GLOBAL *v28; // rbp
  int v29; // ecx
  int v30; // r9d
  __int64 v31; // r10
  __int64 v32; // r8
  __int64 v33; // rbp
  UINT v34; // r12d
  LONG v35; // r13d
  __int64 v36; // rcx
  __int64 v37; // r11
  __int64 v38; // rdx
  unsigned __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // r15d
  struct _VIDMM_GLOBAL_ALLOC ***v43; // rdi
  VIDMM_GLOBAL *v44; // rbp
  struct VIDMM_ALLOC *v45; // r10
  struct _VIDMM_GLOBAL_ALLOC *v46; // rcx
  enum _DXGK_PAGETABLEUPDATEMODE v47; // eax
  PVOID v48; // r15
  __int64 v49; // rdi
  unsigned __int64 v50; // rcx
  int v51; // eax
  SIZE_T *v52; // rdx
  SIZE_T v53; // rbx
  int v54; // eax
  int v56; // ebx
  unsigned __int8 *v57; // rcx
  unsigned int v58; // r13d
  unsigned int v59; // r13d
  int v60; // r12d
  int updated; // r13d
  int v62; // ebx
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // r10
  unsigned int v66; // r8d
  unsigned int v67; // r11d
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdx
  unsigned int i; // edx
  __int64 v101; // rcx
  int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // rcx
  int v110; // eax
  __int64 v111; // rax
  __int64 *v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 **v115; // rax
  VIDMM_CPU_HOST_APERTURE *v116; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v118; // [rsp+90h] [rbp-48h]
  __int64 v119; // [rsp+90h] [rbp-48h]
  unsigned __int64 v120; // [rsp+98h] [rbp-40h]

  v9 = a9;
  v12 = BaseAddress >> 12;
  v14 = (char *)P + (BaseAddress >> 12);
  *a9 = 0LL;
  if ( (unsigned __int64)v14 <= v12 )
  {
    WdLogSingleEntry1(1LL, 4547LL);
    DxgkLogInternalTriageEvent(v63, 0x40000LL);
    return 3221225485LL;
  }
  v15 = (struct VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v16 = *(_DWORD *)this;
  v17 = a7 >> 12;
  P = v15;
  v18 = *((_QWORD *)v15 + 5028) + 1616LL * ((v16 >> 7) & 0x1F);
  v19 = v12 & ~*(_QWORD *)(v18 + 48LL * (v16 & 7) + 128) & ~*(_QWORD *)(v18 + 48LL * (v16 & 7) + 112);
  v120 = v12 & ~*(_QWORD *)(v18 + 48LL * (v16 & 7) + 128);
  v20 = *(_QWORD *)(v18 + 48LL * (v16 & 7) + 136);
  v21 = *(_DWORD *)(v18 + 80);
  v22 = v21 & ((_DWORD)v14 - 1);
  v118 = v20;
  v23 = *((_QWORD *)this + 2);
  LODWORD(a9) = v12 & v21;
  if ( !v23 || !*(_QWORD *)(v23 + 120) )
  {
    v56 = VIDMM_PAGE_TABLE::CommitPageTable(this, a2, v9);
    if ( v56 < 0 )
    {
      WdLogSingleEntry0(3LL);
      return (unsigned int)v56;
    }
    *(_DWORD *)this &= ~0x10000u;
    v16 = *(_DWORD *)this;
    v15 = P;
    v20 = v118;
  }
  v24 = 0;
  v25 = 1;
  if ( (v16 & 0x10000) != 0 )
    v25 = a8;
  else
    v24 = 2;
  if ( !*((_BYTE *)a3 + 65) )
  {
    if ( *((_BYTE *)a3 + 64) )
    {
      if ( !*((_DWORD *)this + 1) )
      {
        v16 |= 0x40u;
        *(_DWORD *)this = v16;
      }
    }
    else
    {
      if ( (v16 & 0x40) != 0 && *((_DWORD *)this + 1) )
      {
        if ( !*((_BYTE *)a3 + 68) )
        {
          VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
            *((VIDMM_PROCESS **)a2 + 12),
            *(_DWORD *)(*((_QWORD *)v15 + 3) + 240LL),
            1);
          *((_BYTE *)a3 + 68) = 1;
        }
        v64 = *(_DWORD *)(v18 + 88) - 1;
        v65 = v64;
        v66 = 16 * v64;
        if ( v64 >= 0 )
        {
          v67 = v66 + 2;
          v68 = 16LL * v64;
          do
          {
            v69 = *((_QWORD *)this + 4);
            if ( (*(_BYTE *)(v68 + v69) & 1) != 0 )
            {
              v70 = 2LL * (v67 - 1);
              *(_OWORD *)(v69 + 16LL * v66) = *(_OWORD *)(v68 + v69);
              v71 = *((_QWORD *)this + 4);
              *(_OWORD *)(v71 + 8 * v70) = *(_OWORD *)(v68 + v71);
              ++*(_QWORD *)(v71 + 8 * v70 + 8);
              v72 = *((_QWORD *)this + 4);
              v73 = 2LL * (v67 + 1);
              v74 = 2LL * v67;
              *(_OWORD *)(v72 + 8 * v74) = *(_OWORD *)(v68 + v72);
              *(_QWORD *)(v72 + 8 * v74 + 8) += 2LL;
              v75 = *((_QWORD *)this + 4);
              *(_OWORD *)(v75 + 8 * v73) = *(_OWORD *)(v68 + v75);
              *(_QWORD *)(v75 + 8 * v73 + 8) += 3LL;
              v76 = *((_QWORD *)this + 4);
              v77 = 2LL * (v67 + 2);
              *(_OWORD *)(v76 + 8 * v77) = *(_OWORD *)(v68 + v76);
              *(_QWORD *)(v76 + 8 * v77 + 8) += 4LL;
              v78 = *((_QWORD *)this + 4);
              v79 = 2LL * (v67 + 3);
              *(_OWORD *)(v78 + 8 * v79) = *(_OWORD *)(v68 + v78);
              *(_QWORD *)(v78 + 8 * v79 + 8) += 5LL;
              v80 = *((_QWORD *)this + 4);
              v81 = 2LL * (v67 + 4);
              *(_OWORD *)(v80 + 8 * v81) = *(_OWORD *)(v68 + v80);
              *(_QWORD *)(v80 + 8 * v81 + 8) += 6LL;
              v82 = *((_QWORD *)this + 4);
              v83 = 2LL * (v67 + 5);
              *(_OWORD *)(v82 + 8 * v83) = *(_OWORD *)(v68 + v82);
              *(_QWORD *)(v82 + 8 * v83 + 8) += 7LL;
              v84 = *((_QWORD *)this + 4);
              v85 = 2LL * (v67 + 6);
              *(_OWORD *)(v84 + 8 * v85) = *(_OWORD *)(v68 + v84);
              *(_QWORD *)(v84 + 8 * v85 + 8) += 8LL;
              v86 = *((_QWORD *)this + 4);
              v87 = 2LL * (v67 + 7);
              *(_OWORD *)(v86 + 8 * v87) = *(_OWORD *)(v68 + v86);
              *(_QWORD *)(v86 + 8 * v87 + 8) += 9LL;
              v88 = *((_QWORD *)this + 4);
              v89 = 2LL * (v67 + 8);
              *(_OWORD *)(v88 + 8 * v89) = *(_OWORD *)(v68 + v88);
              *(_QWORD *)(v88 + 8 * v89 + 8) += 10LL;
              v90 = *((_QWORD *)this + 4);
              v91 = 2LL * (v67 + 9);
              *(_OWORD *)(v90 + 8 * v91) = *(_OWORD *)(v68 + v90);
              *(_QWORD *)(v90 + 8 * v91 + 8) += 11LL;
              v92 = *((_QWORD *)this + 4);
              v93 = 2LL * (v67 + 10);
              *(_OWORD *)(v92 + 8 * v93) = *(_OWORD *)(v68 + v92);
              *(_QWORD *)(v92 + 8 * v93 + 8) += 12LL;
              v94 = *((_QWORD *)this + 4);
              v95 = 2LL * (v67 + 11);
              *(_OWORD *)(v94 + 8 * v95) = *(_OWORD *)(v68 + v94);
              *(_QWORD *)(v94 + 8 * v95 + 8) += 13LL;
              v96 = *((_QWORD *)this + 4);
              v97 = 2LL * (v67 + 12);
              *(_OWORD *)(v96 + 8 * v97) = *(_OWORD *)(v68 + v96);
              *(_QWORD *)(v96 + 8 * v97 + 8) += 14LL;
              v98 = *((_QWORD *)this + 4);
              v99 = 2LL * (v67 + 13);
              *(_OWORD *)(v98 + 8 * v99) = *(_OWORD *)(v68 + v98);
              *(_QWORD *)(v98 + 8 * v99 + 8) += 15LL;
              *((_DWORD *)this + 1) += 15;
            }
            else
            {
              for ( i = 0; i < 0x10; ++i )
              {
                v101 = 16LL * (i + v66);
                *(_OWORD *)(*((_QWORD *)this + 4) + v101) = 0LL;
              }
            }
            v66 -= 16;
            v67 -= 16;
            v68 -= 16LL;
            --v65;
          }
          while ( v65 >= 0 );
        }
        v102 = 0;
        if ( (**(_DWORD **)(v18 + 448) & 8) != 0 )
        {
          LODWORD(BaseAddress) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                                   this,
                                   a2,
                                   0,
                                   *(_DWORD *)(v18 + 88),
                                   v19,
                                   (struct _DXGK_UPDATEPAGETABLEFLAGS)8);
          if ( (BaseAddress & 0x80000000) != 0LL )
          {
            WdLogSingleEntry1(1LL, 4666LL);
            DxgkLogInternalTriageEvent(v103, 0x40000LL);
            return (unsigned int)BaseAddress;
          }
          v102 = 2;
        }
        LODWORD(BaseAddress) = VIDMM_PAGE_TABLE::UpdatePageTable(
                                 this,
                                 a2,
                                 a3,
                                 0LL,
                                 0LL,
                                 0,
                                 0,
                                 *(_DWORD *)(v18 + 84),
                                 v19,
                                 v102);
        if ( (BaseAddress & 0x80000000) != 0LL )
        {
          WdLogSingleEntry1(1LL, 4684LL);
          DxgkLogInternalTriageEvent(v104, 0x40000LL);
          return (unsigned int)BaseAddress;
        }
        v15 = P;
        v20 = v118;
      }
      *(_DWORD *)this &= ~0x40u;
      v16 = *(_DWORD *)this;
    }
  }
  v26 = (unsigned int)a9;
  if ( (v16 & 0x40) != 0 )
  {
    v120 &= 0xFFFFFFFFFFFFFFF0uLL;
    v24 |= 8u;
    v26 = (unsigned int)a9 >> 4;
    v22 >>= 4;
    v118 = 16 * v20;
    LODWORD(a9) = (unsigned int)a9 >> 4;
  }
  v27 = v22 + 1;
  LODWORD(BaseAddress) = v27 - v26;
  if ( v25 )
  {
    v57 = (unsigned __int8 *)a3 + 69;
    if ( v26 )
    {
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v15, 0, v26, (unsigned __int8 *)a3 + 69);
      updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                  this,
                  a2,
                  0,
                  (unsigned int)a9,
                  v19,
                  (struct _DXGK_UPDATEPAGETABLEFLAGS)v24);
      if ( updated < 0 )
      {
        WdLogSingleEntry1(1LL, 4726LL);
        DxgkLogInternalTriageEvent(v105, 0x40000LL);
        return (unsigned int)updated;
      }
      v57 = (unsigned __int8 *)a3 + 69;
    }
    if ( (*(_DWORD *)this & 0x40) != 0 )
      v58 = *(_DWORD *)(v18 + 88);
    else
      v58 = *(_DWORD *)(v18 + 84);
    v28 = P;
    if ( v27 < v58 )
    {
      v59 = v58 - v27;
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, P, v27, v59, v57);
      v60 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              a2,
              v27,
              v59,
              v19 + v118 * v27,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)v24);
      if ( v60 < 0 )
      {
        WdLogSingleEntry1(1LL, 4743LL);
        DxgkLogInternalTriageEvent(v106, 0x40000LL);
        return (unsigned int)v60;
      }
    }
  }
  else
  {
    v28 = P;
  }
  v29 = *((_DWORD *)a3 + 15);
  if ( ((v29 + 3) & 0xFFFFFFFD) == 0 )
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v28, (unsigned int)a9, BaseAddress, (unsigned __int8 *)a3 + 69);
    v62 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
            this,
            a2,
            (unsigned int)a9,
            BaseAddress,
            v120,
            (struct _DXGK_UPDATEPAGETABLEFLAGS)v24);
    if ( v62 >= 0 )
    {
LABEL_41:
      *(_DWORD *)this |= 0x10000u;
      return 0LL;
    }
    goto LABEL_92;
  }
  LODWORD(P) = 0;
  v30 = 0;
  if ( v29 == -2 )
  {
    v34 = (unsigned int)a9;
    if ( (unsigned int)a9 < v27 )
    {
      v35 = BaseAddress;
      v107 = 16LL * (unsigned int)a9;
      v108 = (unsigned int)BaseAddress;
      do
      {
        v109 = *((_QWORD *)this + 4);
        v110 = v30 + 1;
        v107 += 16LL;
        if ( (*(_BYTE *)(v109 + v107 - 16) & 1) == 0 )
          v110 = v30;
        v30 = v110;
        *(_QWORD *)(v109 + v107 - 16) = *(_QWORD *)a3;
        --v108;
      }
      while ( v108 );
      goto LABEL_29;
    }
  }
  else
  {
    v31 = 0LL;
    v119 = 0LL;
    v32 = 0LL;
    if ( (*((_DWORD *)a3 + 9) & 1) != 0 )
    {
      v32 = *((_QWORD *)a3 + 5);
      v119 = v32;
    }
    else
    {
      v31 = *((_QWORD *)a3 + 5);
    }
    v33 = 1LL;
    if ( (*(_DWORD *)this & 0x40) != 0 )
      v33 = 16LL;
    v34 = (unsigned int)a9;
    if ( (unsigned int)a9 < v27 )
    {
      v35 = BaseAddress;
      v36 = 16LL * (unsigned int)a9;
      v37 = (unsigned int)BaseAddress;
      while ( 1 )
      {
        v38 = *((_QWORD *)this + 4);
        if ( (*(_BYTE *)(v38 + v36) & 1) != 0 )
          LODWORD(P) = v30 + 1;
        *(_QWORD *)(v38 + v36) = *(_QWORD *)a3;
        v39 = *((_QWORD *)a3 + 9);
        if ( v39 )
        {
          v32 = v119;
          v40 = (unsigned int)*((_QWORD *)a3 + 3) + (unsigned int)((v17 - *((_QWORD *)a3 + 3)) % v39);
          if ( !v31 )
          {
LABEL_89:
            v41 = v40 + v32;
            goto LABEL_28;
          }
          v41 = *(_QWORD *)(v31 + 8LL * (unsigned int)v40);
        }
        else
        {
          v40 = (unsigned int)v17;
          if ( !v31 )
            goto LABEL_89;
          v41 = *(_QWORD *)(v31 + 8LL * (unsigned int)v17);
        }
LABEL_28:
        v17 += v33;
        v30 = (int)P;
        *(_QWORD *)(*((_QWORD *)this + 4) + v36 + 8) = v41;
        v36 += 16LL;
        if ( !--v37 )
          goto LABEL_29;
      }
    }
  }
  v35 = BaseAddress;
LABEL_29:
  *((_DWORD *)this + 1) += v35 - v30;
  if ( v30 )
    *((_BYTE *)a3 + 69) = 1;
  v42 = *((_DWORD *)a3 + 14);
  v43 = (struct _VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)a3 + 6);
  LODWORD(a9) = 0;
  v44 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  BaseAddress = 0LL;
  P = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, a2, (unsigned int *)&a9, &BaseAddress, (void **)&P) >= 0 )
  {
    v45 = 0LL;
    v46 = 0LL;
    if ( v42 == 1 )
    {
      v45 = (struct VIDMM_ALLOC *)v43;
      v46 = **v43;
    }
    else if ( v42 == 3 )
    {
      v46 = (struct _VIDMM_GLOBAL_ALLOC *)v43;
    }
    if ( (*((_BYTE *)v44 + 40936) & 0x40) != 0 )
      v47 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v47 = (int)(*(_DWORD *)this << 16) >> 29;
    v48 = (PVOID)BaseAddress;
    VIDMM_GLOBAL::UpdatePageTable(
      v44,
      *(_DWORD *)this & 7,
      *((struct VIDMM_PROCESS **)a2 + 12),
      *((_QWORD *)a3 + 2),
      v45,
      v46,
      a4,
      v34,
      v35,
      (struct _DXGK_PTE *)(*((_QWORD *)this + 4) + 16LL * v34),
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      (UINT)a9,
      BaseAddress,
      v47,
      v120,
      v24,
      *((_QWORD *)a3 + 9));
    v49 = *((_QWORD *)a2 + 11);
    if ( (*(_BYTE *)(v49 + 40936) & 0x40) == 0 && (v50 = *(unsigned int *)this, (v51 = (__int16)v50 >> 13) != 0) )
    {
      if ( v51 == 1 && *(struct CVirtualAddressAllocator **)(v49 + 8 * ((v50 >> 7) & 0x1F) + 40416) != a2 )
      {
        v111 = *((_QWORD *)this + 3) + 128LL;
        v112 = *(__int64 **)v111;
        if ( *(_QWORD *)(*(_QWORD *)v111 + 8LL) != v111
          || (v113 = *v112, *(__int64 **)(*v112 + 8) != v112)
          || (*(_QWORD *)v111 = v113,
              *(_QWORD *)(v113 + 8) = v111,
              v112[2] = *(_QWORD *)(v49 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4968),
              v114 = 1616LL * ((*(_DWORD *)this >> 7) & 0x1F) + *(_QWORD *)(v49 + 40224) + 472LL,
              v115 = *(__int64 ***)(v114 + 8),
              *v115 != (__int64 *)v114) )
        {
          __fastfail(3u);
        }
        *v112 = v114;
        v112[1] = (__int64)v115;
        *v115 = v112;
        *(_QWORD *)(v114 + 8) = v112;
      }
    }
    else
    {
      if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 48LL, this, 0LL, 0LL);
      }
      v52 = (SIZE_T *)*((_QWORD *)this + 2);
      v53 = v52[15];
      v54 = *(_DWORD *)(v53 + 80);
      if ( (v54 & 0x1001) == 0 )
      {
        if ( (v54 & 4) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v49 + 24) + 436LL) & 8) == 0 )
            MmUnmapIoSpace(v48, v52[2]);
        }
        else
        {
          v116 = *(VIDMM_CPU_HOST_APERTURE **)(v53 + 504);
          VIDMM_CPU_HOST_APERTURE::UnmapRange(v116, (struct _VIDMM_GLOBAL_ALLOC *)v52);
          VIDMM_CPU_HOST_APERTURE::ReleaseRange(v116, *((struct _VIDMM_GLOBAL_ALLOC **)this + 2));
          VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
          (*((void (__fastcall **)(PVOID, struct VIDMM_GLOBAL *))VirtualMemoryInterface + 6))(v48, P);
          ExFreePoolWithTag(P, 0);
        }
      }
    }
    goto LABEL_41;
  }
  WdLogSingleEntry1(2LL, 4018LL);
  v62 = -1073741823;
LABEL_92:
  WdLogSingleEntry1(2LL, 4784LL);
  return (unsigned int)v62;
}
