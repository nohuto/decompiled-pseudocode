/*
 * XREFs of ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C01024D4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00FB3F8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C00AFF88 (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C00B08E4 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_LINEAR_POOL *v4; // rax
  char *v5; // r13
  char *v7; // r15
  char *v8; // r10
  char *v10; // rsi
  char *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rax
  struct _VIDMM_POOL_BLOCK *Block; // rax
  struct _VIDMM_POOL_BLOCK *v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  char *v33; // r8
  char v34; // r9
  char *v35; // rcx
  _QWORD *v36; // rax
  char *v37; // rcx
  __int64 v38; // rdx
  _QWORD *v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int64 *v41; // rcx
  _QWORD *v42; // rcx
  __int64 v43; // rdx

  v4 = (VIDMM_LINEAR_POOL *)a2[6];
  v5 = (char *)this + 72;
  v7 = (char *)(a2 + 5);
  v8 = (char *)a2[5];
  v10 = (char *)v4 - 40;
  if ( v4 == (VIDMM_LINEAR_POOL *)((char *)this + 72) )
    v10 = 0LL;
  v13 = v8 - 40;
  if ( v8 == v5 )
    v13 = 0LL;
  if ( *a2 > a3 )
  {
    if ( !v10 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
    if ( *(_QWORD *)v10 > a3 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
    if ( v10[56] != 2 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
    if ( a3 == *(_QWORD *)v10 )
    {
      v14 = v10 + 40;
      v15 = *((_QWORD *)v10 + 5);
      if ( *(char **)(v15 + 8) != v10 + 40 )
        goto LABEL_59;
      v16 = (_QWORD *)*((_QWORD *)v10 + 6);
      if ( (_QWORD *)*v16 != v14 )
        goto LABEL_59;
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
      v17 = v10 + 24;
      *((_QWORD *)v10 + 6) = 0LL;
      v18 = *((_QWORD *)v10 + 3);
      if ( *(char **)(v18 + 8) != v10 + 24 )
        goto LABEL_59;
      v19 = (_QWORD *)*((_QWORD *)v10 + 4);
      if ( (_QWORD *)*v19 != v17 )
        goto LABEL_59;
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      *v17 = 0LL;
      *((_QWORD *)v10 + 4) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v10);
    }
    else
    {
      *((_QWORD *)v10 + 1) = a3 - *(_QWORD *)v10;
    }
  }
  v20 = *a2 + a2[1];
  if ( v20 >= a4 )
  {
    if ( v20 <= a4 )
      goto LABEL_55;
    if ( v13 && v13[56] == 2 )
    {
      v28 = *(_QWORD *)v13 - a4;
      *(_QWORD *)v13 = a4;
      *((_QWORD *)v13 + 1) += v28;
      goto LABEL_55;
    }
    Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
    v30 = Block;
    if ( !Block )
      goto LABEL_55;
    *((_BYTE *)Block + 56) = 2;
    *((_QWORD *)Block + 2) = 0LL;
    *(_QWORD *)Block = a4;
    *((_QWORD *)Block + 1) = a2[1] + *a2 - a4;
    v31 = (_QWORD *)((char *)Block + 40);
    v32 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) == v7 )
    {
      *v31 = v32;
      v33 = 0LL;
      v31[1] = v7;
      v34 = 0;
      *(_QWORD *)(v32 + 8) = v31;
      *(_QWORD *)v7 = v31;
      v35 = (char *)a2[6];
      while ( v35 != v5 && !v34 )
      {
        v33 = v35 - 40;
        if ( ((v35[16] - 2) & 0xFD) != 0 )
          v35 = (char *)*((_QWORD *)v33 + 6);
        else
          v34 = 1;
      }
      v36 = (_QWORD *)((char *)v30 + 24);
      v37 = v33 + 24;
      if ( !v34 )
        v37 = (char *)this + 40;
      v38 = *(_QWORD *)v37;
      if ( *(char **)(*(_QWORD *)v37 + 8LL) == v37 )
      {
        *v36 = v38;
        v36[1] = v37;
        *(_QWORD *)(v38 + 8) = v36;
        *(_QWORD *)v37 = v36;
        goto LABEL_55;
      }
    }
    goto LABEL_59;
  }
  if ( !v13 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)v13 + 1) + *(_QWORD *)v13 < a4 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
  if ( v13[56] != 2 && g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  }
  v21 = *(_QWORD *)v13 + *((_QWORD *)v13 + 1) - a4;
  if ( !v21 )
  {
    v22 = v13 + 40;
    v23 = *((_QWORD *)v13 + 5);
    if ( *(char **)(v23 + 8) == v13 + 40 )
    {
      v24 = (_QWORD *)*((_QWORD *)v13 + 6);
      if ( (_QWORD *)*v24 == v22 )
      {
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        *v22 = 0LL;
        v25 = v13 + 24;
        *((_QWORD *)v13 + 6) = 0LL;
        v26 = *((_QWORD *)v13 + 3);
        if ( *(char **)(v26 + 8) == v13 + 24 )
        {
          v27 = (_QWORD *)*((_QWORD *)v13 + 4);
          if ( (_QWORD *)*v27 == v25 )
          {
            *v27 = v26;
            *(_QWORD *)(v26 + 8) = v27;
            *v25 = 0LL;
            *((_QWORD *)v13 + 4) = 0LL;
            VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v13);
            goto LABEL_55;
          }
        }
      }
    }
LABEL_59:
    __fastfail(3u);
  }
  *(_QWORD *)v13 = a4;
  *((_QWORD *)v13 + 1) = v21;
LABEL_55:
  a2[2] |= 1uLL;
  v39 = a2 + 3;
  *a2 = a3;
  a2[1] = a4 - a3;
  *((_BYTE *)a2 + 56) = 5;
  v40 = a2[3];
  if ( *(unsigned __int64 **)(v40 + 8) != a2 + 3 )
    goto LABEL_59;
  v41 = (unsigned __int64 *)a2[4];
  if ( (_QWORD *)*v41 != v39 )
    goto LABEL_59;
  *v41 = v40;
  *(_QWORD *)(v40 + 8) = v41;
  v42 = (_QWORD *)((char *)this + 56);
  v43 = *((_QWORD *)this + 7);
  if ( *(VIDMM_LINEAR_POOL **)(v43 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 56) )
    goto LABEL_59;
  *v39 = v43;
  a2[4] = (unsigned __int64)v42;
  *(_QWORD *)(v43 + 8) = v39;
  *v42 = v39;
}
