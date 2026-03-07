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
  int BlockRun; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // r12
  __int64 i; // rsi
  __int64 v17; // rdi
  _QWORD *v18; // r15
  bool v19; // zf
  _QWORD *v20; // rsi
  _QWORD *v21; // rsi
  __int64 v22; // rcx
  struct _VIDMM_POOL_BLOCK *v23; // rdx
  _QWORD *v25; // rdi
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  _QWORD *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  unsigned __int8 v48; // [rsp+38h] [rbp-59h]
  struct _VIDMM_POOL_BLOCK *v49; // [rsp+88h] [rbp-9h] BYREF

  v49 = 0LL;
  if ( !a8 )
  {
    v48 = 0;
    BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(this);
    v13 = 0LL;
    v14 = BlockRun;
    if ( BlockRun >= 0 )
      goto LABEL_3;
    if ( !*((_DWORD *)this + 4) || a7 )
      return v14;
  }
  if ( !*((_QWORD *)this + 4) || (v48 = 1, v26 = VIDMM_LINEAR_POOL::FindBlockRun(this), v13 = 0LL, v26 < 0) )
  {
    v48 = 2;
    v27 = VIDMM_LINEAR_POOL::FindBlockRun(this);
    v13 = 0LL;
    v14 = v27;
    if ( v27 < 0 )
      return v14;
  }
LABEL_3:
  v15 = MEMORY[0x18];
  for ( i = 24LL; i != v15; v13 = 0LL )
  {
    v17 = i - 24;
    v18 = (_QWORD *)i;
    v19 = *(_BYTE *)(i - 24 + 56) == 4;
    i = *(_QWORD *)i;
    if ( v19 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL) + 24) = v17;
      (*((void (__fastcall **)(_QWORD))this + 3))(*(_QWORD *)(v17 + 16));
      *(_QWORD *)(v17 + 16) = 0LL;
      *(_BYTE *)(v17 + 56) = 2;
      if ( !*((_DWORD *)this + 4) )
      {
        WdLogSingleEntry1(1LL, 543LL);
        v48 = 0;
        DxgkLogInternalTriageEvent(v28, 0x40000LL);
      }
      --*((_DWORD *)this + 4);
    }
    if ( v17 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v29 = WdLogNewEntry5_WdTrace(v13);
        *(_QWORD *)(v29 + 24) = v17;
        *(_QWORD *)(v29 + 32) = 0LL;
      }
      MEMORY[8] += *(_QWORD *)(v17 + 8);
      v30 = *v18;
      if ( *(_QWORD **)(*v18 + 8LL) != v18 )
        goto LABEL_53;
      v31 = (_QWORD *)v18[1];
      if ( (_QWORD *)*v31 != v18 )
        goto LABEL_53;
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
      v32 = (_QWORD *)(v17 + 40);
      *v18 = 0LL;
      *(_QWORD *)(v17 + 32) = 0LL;
      v33 = *(_QWORD *)(v17 + 40);
      if ( *(_QWORD *)(v33 + 8) != v17 + 40 )
        goto LABEL_53;
      v34 = *(_QWORD **)(v17 + 48);
      if ( (_QWORD *)*v34 != v32 )
        goto LABEL_53;
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      *v32 = 0LL;
      *(_QWORD *)(v17 + 48) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v17);
    }
  }
  v20 = (_QWORD *)MEMORY[0x20];
  if ( (VIDMM_LINEAR_POOL *)MEMORY[0x20] != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v25 = (_QWORD *)(MEMORY[0x20] - 24LL);
    if ( *(_BYTE *)(MEMORY[0x20] - 24LL + 56) == 2 && v25[1] + *v25 == MEMORY[0] )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v35 = WdLogNewEntry5_WdTrace(0LL);
        *(_QWORD *)(v35 + 24) = 0LL;
        *(_QWORD *)(v35 + 32) = v25;
      }
      MEMORY[0] = *v25;
      MEMORY[8] += v25[1];
      v36 = *v20;
      if ( *(_QWORD **)(*v20 + 8LL) != v20 )
        goto LABEL_53;
      v37 = (_QWORD *)v20[1];
      if ( (_QWORD *)*v37 != v20 )
        goto LABEL_53;
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
      v38 = v25 + 5;
      *v20 = 0LL;
      v25[4] = 0LL;
      v39 = v25[5];
      if ( *(_QWORD **)(v39 + 8) != v25 + 5 )
        goto LABEL_53;
      v40 = (_QWORD *)v25[6];
      if ( (_QWORD *)*v40 != v38 )
        goto LABEL_53;
      *v40 = v39;
      *(_QWORD *)(v39 + 8) = v40;
      *v38 = 0LL;
      v25[6] = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v20 - 3));
    }
  }
  v21 = (_QWORD *)MEMORY[0x18];
  if ( (VIDMM_LINEAR_POOL *)MEMORY[0x18] != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    v41 = (_QWORD *)(MEMORY[0x18] - 24LL);
    if ( *(_BYTE *)(MEMORY[0x18] - 24LL + 56) == 2 && *v41 == MEMORY[0] + MEMORY[8] )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v42 = WdLogNewEntry5_WdTrace(v13);
        *(_QWORD *)(v42 + 24) = 0LL;
        *(_QWORD *)(v42 + 32) = v41;
      }
      MEMORY[8] += v41[1];
      v43 = *v21;
      if ( *(_QWORD **)(*v21 + 8LL) == v21 )
      {
        v44 = (_QWORD *)v21[1];
        if ( (_QWORD *)*v44 == v21 )
        {
          *v44 = v43;
          *(_QWORD *)(v43 + 8) = v44;
          v45 = v41 + 5;
          *v21 = 0LL;
          v41[4] = 0LL;
          v46 = v41[5];
          if ( *(_QWORD **)(v46 + 8) == v41 + 5 )
          {
            v47 = (_QWORD *)v41[6];
            if ( (_QWORD *)*v47 == v45 )
            {
              *v47 = v46;
              *(_QWORD *)(v46 + 8) = v47;
              *v45 = 0LL;
              v41[6] = 0LL;
              VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v21 - 3));
              goto LABEL_9;
            }
          }
        }
      }
LABEL_53:
      __fastfail(3u);
    }
  }
LABEL_9:
  v14 = VIDMM_LINEAR_POOL::SplitBlock(this, 0LL, 0LL, 0LL, a9, &v49, v48);
  if ( (v14 & 0x80000000) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v22);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v22);
    v23 = v49;
    *a10 = *(union _LARGE_INTEGER *)v49;
    *a11 = v23;
  }
  return v14;
}
