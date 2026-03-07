__int64 __fastcall VIDMM_LINEAR_POOL::SplitBlock(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        struct _VIDMM_POOL_BLOCK **a6)
{
  VIDMM_LINEAR_POOL *v9; // r15
  struct _VIDMM_POOL_BLOCK *v10; // rdi
  struct _VIDMM_POOL_BLOCK *v11; // rsi
  __int64 v12; // r14
  struct _VIDMM_POOL_BLOCK *Block; // rax
  __int64 v14; // rbp
  struct _VIDMM_POOL_BLOCK *v15; // rax
  char *v16; // rcx
  char **v17; // rax
  char *v18; // rdx
  struct _VIDMM_POOL_BLOCK *v19; // rdi
  char *v20; // rax
  struct _VIDMM_POOL_BLOCK **v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rax
  char **v27; // rdx
  char **v28; // rax
  __int64 v29; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax

  v9 = this;
  v10 = 0LL;
  v11 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v31[3] = a2;
    v31[4] = *(_QWORD *)a2;
    v31[5] = *(_QWORD *)a2 + *((_QWORD *)a2 + 1);
    v31[6] = a3;
    v31[7] = a4;
  }
  v12 = a3 - *(_QWORD *)a2;
  if ( a3 != *(_QWORD *)a2 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(this);
    Block = VIDMM_LINEAR_POOL::AllocateBlock(v9);
    v10 = Block;
    if ( !Block )
    {
      _InterlockedIncrement(&dword_1C0076850);
      WdLogSingleEntry1(6LL, 1590LL);
      goto LABEL_31;
    }
    memset(Block, 0, 0x40uLL);
    *((_BYTE *)v10 + 56) = 2;
    *(_QWORD *)v10 = *(_QWORD *)a2;
    this = *(VIDMM_LINEAR_POOL **)&g_IsInternalReleaseOrDbg;
    *((_QWORD *)v10 + 1) = v12;
    if ( g_IsInternalReleaseOrDbg )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v32[3] = v10;
      v32[4] = *(_QWORD *)v10;
      this = (VIDMM_LINEAR_POOL *)(*(_QWORD *)v10 + *((_QWORD *)v10 + 1));
      v32[5] = this;
    }
  }
  v14 = *((_QWORD *)a2 + 1) + *(_QWORD *)a2 - a4;
  if ( !v14 )
    goto LABEL_15;
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  v15 = VIDMM_LINEAR_POOL::AllocateBlock(v9);
  v11 = v15;
  if ( v15 )
  {
    memset(v15, 0, 0x40uLL);
    *((_BYTE *)v11 + 56) = 2;
    *(_QWORD *)v11 = a4;
    *((_QWORD *)v11 + 1) = v14;
    if ( g_IsInternalReleaseOrDbg )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v34[3] = v11;
      v34[4] = *(_QWORD *)v11;
      v34[5] = *(_QWORD *)v11 + *((_QWORD *)v11 + 1);
    }
LABEL_15:
    v16 = (char *)a2 + 24;
    if ( v10 )
    {
      v17 = (char **)*((_QWORD *)a2 + 4);
      v18 = (char *)v10 + 24;
      if ( *v17 != v16 )
        goto LABEL_28;
      *((_QWORD *)v10 + 4) = v17;
      v19 = (struct _VIDMM_POOL_BLOCK *)((char *)v10 + 40);
      *(_QWORD *)v18 = v16;
      *v17 = v18;
      v20 = (char *)a2 + 40;
      *((_QWORD *)a2 + 4) = v18;
      v21 = (struct _VIDMM_POOL_BLOCK **)*((_QWORD *)a2 + 6);
      if ( *v21 != (struct _VIDMM_POOL_BLOCK *)((char *)a2 + 40) )
        goto LABEL_28;
      *(_QWORD *)v19 = v20;
      *((_QWORD *)v19 + 1) = v21;
      *v21 = v19;
      *((_QWORD *)a2 + 6) = v19;
      *((_QWORD *)a2 + 1) -= v12;
      *(_QWORD *)a2 = a3;
    }
    else
    {
      v20 = (char *)a2 + 40;
    }
    if ( v11 )
    {
      v22 = *(_QWORD *)v16;
      v23 = (_QWORD *)((char *)v11 + 24);
      if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 )
        goto LABEL_28;
      *v23 = v22;
      v24 = (_QWORD *)((char *)v11 + 40);
      v23[1] = v16;
      *(_QWORD *)(v22 + 8) = v23;
      *(_QWORD *)v16 = v23;
      v25 = *(_QWORD *)v20;
      if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 )
        goto LABEL_28;
      *v24 = v25;
      v24[1] = v20;
      *(_QWORD *)(v25 + 8) = v24;
      *(_QWORD *)v20 = v24;
      *((_QWORD *)a2 + 1) -= v14;
    }
    *((_QWORD *)a2 + 2) = a5;
    *((_BYTE *)a2 + 56) = 3;
    v26 = *(_QWORD *)v16;
    if ( *(char **)(*(_QWORD *)v16 + 8LL) == v16 )
    {
      v27 = (char **)*((_QWORD *)a2 + 4);
      if ( *v27 == v16 )
      {
        *v27 = (char *)v26;
        *(_QWORD *)(v26 + 8) = v27;
        v28 = (char **)((char *)v9 + 56);
        v29 = *((_QWORD *)v9 + 7);
        if ( *(VIDMM_LINEAR_POOL **)(v29 + 8) == (VIDMM_LINEAR_POOL *)((char *)v9 + 56) )
        {
          *((_QWORD *)a2 + 4) = v28;
          *(_QWORD *)v16 = v29;
          *(_QWORD *)(v29 + 8) = v16;
          *v28 = v16;
          *a6 = a2;
          return 0LL;
        }
      }
    }
LABEL_28:
    __fastfail(3u);
  }
  if ( v10 )
    VIDMM_LINEAR_POOL::FreeBlock(v9, v10);
  _InterlockedIncrement(&dword_1C0076850);
  WdLogSingleEntry1(6LL, 1630LL);
LABEL_31:
  DxgkLogInternalTriageEvent(v33, 262145LL);
  return 3221225495LL;
}
