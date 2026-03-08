/*
 * XREFs of ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00B06A8
 * Callers:
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1C00B0480 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z.c)
 *     ?FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z @ 0x1C00E3B3C (-FreePhysical@VIDMM_GLOBAL@@CAXPEAX@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F8800 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z @ 0x1C00F9B00 (-FreeScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAXPEAX@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FD558 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00FF3C0 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00FF510 (-ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C0101824 (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C010226C (-FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C0104134 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C01049A4 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00B08E4 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C00B0A20 (-FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::Free(VIDMM_LINEAR_POOL *this, struct _VIDMM_POOL_BLOCK *a2)
{
  struct _VIDMM_POOL_BLOCK *v2; // r14
  struct _VIDMM_POOL_BLOCK *v3; // rdi
  VIDMM_LINEAR_POOL *v6; // rax
  char *v7; // r15
  char *v8; // rbx
  __int64 v9; // rax
  char **v10; // rcx
  __int64 v11; // rdx
  struct _VIDMM_POOL_BLOCK **v12; // rdx
  struct _VIDMM_POOL_BLOCK **v13; // rcx
  __int64 v14; // rdx
  struct _VIDMM_POOL_BLOCK *v15; // rdx
  struct _VIDMM_POOL_BLOCK **v16; // rcx
  struct _VIDMM_POOL_BLOCK *v17; // rdx
  struct _VIDMM_POOL_BLOCK **v18; // rcx
  struct _VIDMM_POOL_BLOCK *v19; // rdx
  __int64 v20; // rdx
  struct _VIDMM_POOL_BLOCK *v21; // rdx
  struct _VIDMM_POOL_BLOCK **v22; // rcx
  __int64 v23; // rax
  char **v24; // rcx
  __int64 v25; // rcx
  char *v26; // r14
  __int64 v27; // rax
  char **v28; // rax
  char *v29; // rdi
  __int64 v30; // rax
  struct _VIDMM_POOL_BLOCK *v31; // [rsp+88h] [rbp+10h] BYREF
  struct _VIDMM_POOL_BLOCK *v32; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_BYTE *)a2 + 56) == 4 )
  {
    v6 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 4);
    v7 = (char *)this + 40;
    if ( v6 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      v2 = (VIDMM_LINEAR_POOL *)((char *)v6 - 24);
    v8 = (char *)a2 + 24;
    v9 = *((_QWORD *)a2 + 3);
    if ( (char *)v9 != v7 )
      v3 = (struct _VIDMM_POOL_BLOCK *)(v9 - 24);
    if ( *(char **)(v9 + 8) != v8 )
      goto LABEL_37;
    v10 = (char **)*((_QWORD *)a2 + 4);
    if ( *v10 != v8 )
      goto LABEL_37;
    *v10 = (char *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    if ( !*((_DWORD *)this + 4) )
    {
      WdLogSingleEntry1(1LL, 1756LL);
      DxgkLogInternalTriageEvent(v25, 0x40000LL);
    }
    --*((_DWORD *)this + 4);
  }
  else
  {
    v8 = (char *)a2 + 24;
    v23 = *((_QWORD *)a2 + 3);
    if ( *(struct _VIDMM_POOL_BLOCK **)(v23 + 8) != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 24) )
      goto LABEL_37;
    v24 = (char **)*((_QWORD *)a2 + 4);
    if ( *v24 != v8 )
      goto LABEL_37;
    *v24 = (char *)v23;
    *(_QWORD *)(v23 + 8) = v24;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(this, a2, &v31, &v32);
    v2 = v31;
    v7 = (char *)this + 40;
    v3 = v32;
  }
  if ( !v2 || (v11 = *((_QWORD *)v2 + 1), v11 + *(_QWORD *)v2 != *(_QWORD *)a2) || *((_BYTE *)v2 + 56) != 2 )
  {
    if ( v3 && (v20 = *((_QWORD *)a2 + 1), *(_QWORD *)v3 == v20 + *(_QWORD *)a2) && *((_BYTE *)v3 + 56) == 2 )
    {
      *((_QWORD *)v3 + 1) += v20;
      *(_QWORD *)v3 = *(_QWORD *)a2;
      v21 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)a2 + 5);
      if ( *((struct _VIDMM_POOL_BLOCK **)v21 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
      {
        v22 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
        if ( *v22 == (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
        {
          *v22 = v21;
          *((_QWORD *)v21 + 1) = v22;
          v19 = a2;
          goto LABEL_26;
        }
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
      *((_BYTE *)a2 + 56) = 2;
      if ( v2 )
      {
        v26 = (char *)v2 + 24;
        v27 = *(_QWORD *)v26;
        if ( *(char **)(*(_QWORD *)v26 + 8LL) == v26 )
        {
          *(_QWORD *)v8 = v27;
          *((_QWORD *)v8 + 1) = v26;
          *(_QWORD *)(v27 + 8) = v8;
          *(_QWORD *)v26 = v8;
          return;
        }
      }
      else if ( v3 )
      {
        v28 = (char **)*((_QWORD *)v3 + 4);
        v29 = (char *)v3 + 24;
        if ( *v28 == v29 )
        {
          *(_QWORD *)v8 = v29;
          *((_QWORD *)v8 + 1) = v28;
          *v28 = v8;
          *((_QWORD *)v29 + 1) = v8;
          return;
        }
      }
      else
      {
        v30 = *(_QWORD *)v7;
        if ( *(char **)(*(_QWORD *)v7 + 8LL) == v7 )
        {
          *(_QWORD *)v8 = v30;
          *((_QWORD *)v8 + 1) = v7;
          *(_QWORD *)(v30 + 8) = v8;
          *(_QWORD *)v7 = v8;
          return;
        }
      }
    }
LABEL_37:
    __fastfail(3u);
  }
  *((_QWORD *)v2 + 1) = v11 + *((_QWORD *)a2 + 1);
  v12 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 5);
  if ( v12[1] != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
    goto LABEL_37;
  v13 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
  if ( *v13 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
    goto LABEL_37;
  *v13 = (struct _VIDMM_POOL_BLOCK *)v12;
  v12[1] = (struct _VIDMM_POOL_BLOCK *)v13;
  VIDMM_LINEAR_POOL::FreeBlock(this, a2);
  if ( v3 )
  {
    v14 = *((_QWORD *)v2 + 1);
    if ( *(_QWORD *)v3 == v14 + *(_QWORD *)v2 && *((_BYTE *)v3 + 56) == 2 )
    {
      *((_QWORD *)v2 + 1) = v14 + *((_QWORD *)v3 + 1);
      v15 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v3 + 3);
      if ( *((struct _VIDMM_POOL_BLOCK **)v15 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 24) )
      {
        v16 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v3 + 4);
        if ( *v16 == (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 24) )
        {
          *v16 = v15;
          *((_QWORD *)v15 + 1) = v16;
          v17 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)v3 + 5);
          if ( *((struct _VIDMM_POOL_BLOCK **)v17 + 1) == (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 40) )
          {
            v18 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)v3 + 6);
            if ( *v18 == (struct _VIDMM_POOL_BLOCK *)((char *)v3 + 40) )
            {
              *v18 = v17;
              *((_QWORD *)v17 + 1) = v18;
              v19 = v3;
LABEL_26:
              VIDMM_LINEAR_POOL::FreeBlock(this, v19);
              return;
            }
          }
        }
      }
      goto LABEL_37;
    }
  }
}
