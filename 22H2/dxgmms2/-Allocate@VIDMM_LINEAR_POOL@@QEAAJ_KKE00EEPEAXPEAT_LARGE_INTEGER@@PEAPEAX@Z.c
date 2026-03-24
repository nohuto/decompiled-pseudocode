/*
 * XREFs of ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00652F0
 * Callers:
 *     ?AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C005F57C (-AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C0064B30 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 *     ?MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z @ 0x1C00C1FA0 (-MapPagesIntoAperture@VIDMM_APERTURE_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z.c)
 *     ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C2470 (-ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00C2D20 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z @ 0x1C00C32F0 (-AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00C4B40 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00C7904 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00CAFF0 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C00CCDB4 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z @ 0x1C0065508 (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z.c)
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C0065730 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00865AC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::Allocate(
        VIDMM_LINEAR_POOL *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        char a8,
        void *a9,
        union _LARGE_INTEGER *a10,
        void **a11)
{
  int BlockRun; // edi
  __int64 v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rdi
  _QWORD *v17; // r15
  bool v18; // zf
  _QWORD *v19; // rdi
  __int64 *v20; // rsi
  _QWORD *v21; // rsi
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _VIDMM_POOL_BLOCK *v25; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  unsigned __int8 v51; // [rsp+38h] [rbp-59h]
  struct _VIDMM_POOL_BLOCK *v52; // [rsp+88h] [rbp-9h] BYREF

  v52 = 0LL;
  BlockRun = -1073741811;
  if ( a8 )
    goto LABEL_58;
  v51 = 0;
  BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(this, a2);
  if ( BlockRun >= 0 )
    goto LABEL_3;
  if ( *((_DWORD *)this + 4) && !a7 )
  {
LABEL_58:
    if ( *((_QWORD *)this + 4) )
    {
      v51 = 1;
      BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(this, a2);
    }
    if ( BlockRun >= 0 )
      goto LABEL_3;
    v51 = 2;
    BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(this, a2);
  }
  if ( BlockRun < 0 )
    return (unsigned int)BlockRun;
LABEL_3:
  v14 = 24LL;
  v15 = MEMORY[0x18];
  while ( v14 != v15 )
  {
    v16 = v14 - 24;
    v17 = (_QWORD *)v14;
    v18 = *(_BYTE *)(v14 - 24 + 56) == 4;
    v14 = *(_QWORD *)v14;
    if ( v18 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v16;
      (*((void (__fastcall **)(_QWORD))this + 3))(*(_QWORD *)(v16 + 16));
      *(_QWORD *)(v16 + 16) = 0LL;
      *(_BYTE *)(v16 + 56) = 2;
      v31 = *((_DWORD *)this + 4);
      if ( !v31 )
      {
        v32 = WdLogNewEntry5_WdAssertion(this, v29, v30);
        *(_QWORD *)(v32 + 24) = 543LL;
        WdLogEvent5_WdAssertion(v32);
        v31 = *((_DWORD *)this + 4);
      }
      *((_DWORD *)this + 4) = v31 - 1;
    }
    if ( v16 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v33 = WdLogNewEntry5_WdTrace(this);
        *(_QWORD *)(v33 + 24) = v16;
        *(_QWORD *)(v33 + 32) = 0LL;
      }
      MEMORY[8] += *(_QWORD *)(v16 + 8);
      v34 = *v17;
      if ( *(_QWORD **)(*v17 + 8LL) != v17 )
        goto LABEL_53;
      v35 = (_QWORD *)v17[1];
      if ( (_QWORD *)*v35 != v17 )
        goto LABEL_53;
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
      v36 = (_QWORD *)(v16 + 40);
      *v17 = 0LL;
      *(_QWORD *)(v16 + 32) = 0LL;
      v37 = *(_QWORD *)(v16 + 40);
      if ( *(_QWORD *)(v37 + 8) != v16 + 40 )
        goto LABEL_53;
      v38 = *(_QWORD **)(v16 + 48);
      if ( (_QWORD *)*v38 != v36 )
        goto LABEL_53;
      *v38 = v37;
      *(_QWORD *)(v37 + 8) = v38;
      *v36 = 0LL;
      *(_QWORD *)(v16 + 48) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v16);
    }
  }
  v19 = (_QWORD *)MEMORY[0x20];
  if ( (VIDMM_LINEAR_POOL *)MEMORY[0x20] != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v20 = (__int64 *)(MEMORY[0x20] - 24LL);
    if ( *(_BYTE *)(MEMORY[0x20] + 32LL) == 2 )
    {
      v27 = *v20;
      v28 = *v20 + *(_QWORD *)(MEMORY[0x20] - 16LL);
      if ( v28 == MEMORY[0] )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v39 = WdLogNewEntry5_WdTrace(v28);
          *(_QWORD *)(v39 + 24) = 0LL;
          *(_QWORD *)(v39 + 32) = v20;
          v27 = *v20;
        }
        MEMORY[0] = v27;
        MEMORY[8] += *(v19 - 2);
        v40 = *v19;
        if ( *(_QWORD **)(*v19 + 8LL) != v19 )
          goto LABEL_53;
        v41 = (_QWORD *)v19[1];
        if ( (_QWORD *)*v41 != v19 )
          goto LABEL_53;
        *v41 = v40;
        *(_QWORD *)(v40 + 8) = v41;
        v42 = v19 + 2;
        *v19 = 0LL;
        v19[1] = 0LL;
        v43 = v19[2];
        if ( *(_QWORD **)(v43 + 8) != v19 + 2 )
          goto LABEL_53;
        v44 = (_QWORD *)v19[3];
        if ( (_QWORD *)*v44 != v42 )
          goto LABEL_53;
        *v44 = v43;
        *(_QWORD *)(v43 + 8) = v44;
        *v42 = 0LL;
        v19[3] = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v19 - 3));
      }
    }
  }
  v21 = (_QWORD *)MEMORY[0x18];
  if ( (VIDMM_LINEAR_POOL *)MEMORY[0x18] != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v22 = (_QWORD *)(MEMORY[0x18] - 24LL);
    if ( *(_BYTE *)(MEMORY[0x18] - 24LL + 56) == 2 )
    {
      v23 = MEMORY[8];
      if ( *v22 == MEMORY[8] + MEMORY[0] )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          v45 = WdLogNewEntry5_WdTrace(MEMORY[8] + MEMORY[0]);
          *(_QWORD *)(v45 + 24) = 0LL;
          *(_QWORD *)(v45 + 32) = v22;
          v23 = MEMORY[8];
        }
        MEMORY[8] = v23 + v22[1];
        v46 = *v21;
        if ( *(_QWORD **)(*v21 + 8LL) == v21 )
        {
          v47 = (_QWORD *)v21[1];
          if ( (_QWORD *)*v47 == v21 )
          {
            *v47 = v46;
            *(_QWORD *)(v46 + 8) = v47;
            v48 = v22 + 5;
            *v21 = 0LL;
            v22[4] = 0LL;
            v49 = v22[5];
            if ( *(_QWORD **)(v49 + 8) == v22 + 5 )
            {
              v50 = (_QWORD *)v22[6];
              if ( (_QWORD *)*v50 == v48 )
              {
                *v50 = v49;
                *(_QWORD *)(v49 + 8) = v50;
                *v48 = 0LL;
                v22[6] = 0LL;
                VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v21 - 3));
                goto LABEL_12;
              }
            }
          }
        }
LABEL_53:
        __fastfail(3u);
      }
    }
  }
LABEL_12:
  BlockRun = VIDMM_LINEAR_POOL::SplitBlock(this, 0LL, 0LL, 0LL, a9, &v52, v51);
  if ( BlockRun < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v24);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v24);
    v25 = v52;
    *a10 = *(union _LARGE_INTEGER *)v52;
    *a11 = v25;
  }
  return (unsigned int)BlockRun;
}
