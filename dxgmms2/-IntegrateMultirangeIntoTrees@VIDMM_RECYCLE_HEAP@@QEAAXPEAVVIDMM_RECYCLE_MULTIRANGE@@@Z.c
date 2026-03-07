void __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *v2; // rdi
  struct VIDMM_RECYCLE_RANGE *v3; // r15
  __int64 v6; // rcx
  __int64 Multirange; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  int v12; // edx
  struct VIDMM_RECYCLE_RANGE *v13; // rsi
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r12
  __int64 v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rax
  _QWORD *v23; // r8
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  _QWORD **v27; // rbx
  VIDMM_RECYCLE_MULTIRANGE *v28; // rdi
  _QWORD *v29; // r15
  _QWORD *v30; // rsi
  unsigned __int8 v31; // dl
  struct VIDMM_RECYCLE_MULTIRANGE *v32; // rdi
  VIDMM_RECYCLE_MULTIRANGE *v33; // rbx
  __int64 v34; // rdx
  bool v35; // al
  struct VIDMM_RECYCLE_RANGE *v36; // rdx
  _QWORD *v37; // rbx
  struct VIDMM_RECYCLE_MULTIRANGE *v38; // rdx
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // rdx
  _QWORD *v43; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v44; // [rsp+38h] [rbp-8h]
  __int64 v45; // [rsp+70h] [rbp+30h]

  v2 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  v3 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 9);
  v44 = &v43;
  v6 = *((_QWORD *)this + 1);
  v43 = &v43;
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                 v6,
                 0LL,
                 *((_QWORD *)v2 + 9),
                 *((_QWORD *)v2 + 4),
                 *((_QWORD *)v3 + 5));
  v45 = Multirange;
  v8 = Multirange;
  if ( !Multirange )
  {
LABEL_40:
    WdLogSingleEntry4(
      3LL,
      *((_QWORD *)a2 + 10),
      *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL),
      *(_QWORD *)(*((_QWORD *)a2 + 9) + 40LL),
      **(_QWORD **)(*((_QWORD *)this + 1) + 8LL));
    v37 = v43;
    while ( v37 != &v43 )
    {
      v38 = (struct VIDMM_RECYCLE_MULTIRANGE *)(v37 - 25);
      v37 = (_QWORD *)*v37;
      *((_DWORD *)v38 + 22) = 3;
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), v38);
    }
    for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
    {
      v40 = *((_DWORD *)i + 16);
      *((_QWORD *)i + 17) = 0LL;
      *((_QWORD *)i + 18) = 0LL;
      *((_QWORD *)i + 19) = 0LL;
      *((_QWORD *)i + 20) = 0LL;
      if ( v40 )
      {
        v41 = v40 - 4;
        if ( v41 )
        {
          if ( v41 != 1 )
            goto LABEL_51;
          v42 = 1LL;
        }
        else
        {
          v42 = 0LL;
        }
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v42, i);
      }
      else
      {
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, 2LL, i);
        VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)i + 9), i);
        VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)i + 9), i);
      }
LABEL_51:
      if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
        return;
    }
  }
  *(_QWORD *)(Multirange + 64) = v2;
  v9 = (_QWORD *)(Multirange + 200);
  *(_QWORD *)(Multirange + 72) = v3;
  *(_DWORD *)(Multirange + 88) = 2;
  v10 = v44;
  if ( *v44 != &v43 )
    goto LABEL_39;
  *(_QWORD *)(Multirange + 208) = v44;
  *v9 = &v43;
  *v10 = v9;
  v11 = *((_QWORD *)a2 + 10);
  v44 = (_QWORD **)v9;
  v12 = **(_DWORD **)(v11 + 32);
  if ( (unsigned int)(v12 - 3) > 3 && (unsigned int)(v12 - 9) > 1 )
  {
    v13 = v2;
    NextRange = 0LL;
    while ( 1 )
    {
      if ( *((_DWORD *)v13 + 16) )
      {
        if ( !NextRange )
          NextRange = v13;
      }
      else if ( NextRange )
      {
        PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v13);
        v16 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                *((_QWORD *)this + 1),
                1LL,
                *((_QWORD *)v2 + 9),
                *((_QWORD *)NextRange + 4),
                *((_QWORD *)PreviousRange + 5));
        v17 = v16;
        if ( !v16 )
          goto LABEL_40;
        *(_QWORD *)(v16 + 64) = NextRange;
        *(_QWORD *)(v16 + 72) = PreviousRange;
        *(_DWORD *)(v16 + 88) = 1;
        while ( 1 )
        {
          *((_QWORD *)NextRange + 18) = v17;
          if ( NextRange == PreviousRange )
            break;
          NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
        }
        v18 = v44;
        v19 = (_QWORD *)(v17 + 200);
        if ( *v44 != &v43 )
          goto LABEL_39;
        v19[1] = v44;
        *v19 = &v43;
        *v18 = v19;
        NextRange = 0LL;
        v44 = (_QWORD **)v19;
      }
      if ( v13 == v3 )
        break;
      v13 = VIDMM_RECYCLE_RANGE::GetNextRange(v13);
    }
    if ( !NextRange )
    {
LABEL_25:
      v8 = v45;
      goto LABEL_26;
    }
    v20 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
            *((_QWORD *)this + 1),
            1LL,
            *((_QWORD *)v2 + 9),
            *((_QWORD *)NextRange + 4),
            *((_QWORD *)v3 + 5));
    v21 = v20;
    if ( v20 )
    {
      *(_QWORD *)(v20 + 64) = NextRange;
      *(_QWORD *)(v20 + 72) = v3;
      *(_DWORD *)(v20 + 88) = 1;
      while ( 1 )
      {
        *((_QWORD *)NextRange + 18) = v21;
        if ( NextRange == v3 )
          break;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      v22 = v44;
      v23 = (_QWORD *)(v21 + 200);
      if ( *v44 == &v43 )
      {
        v23[1] = v44;
        *v23 = &v43;
        *v22 = v23;
        v44 = (_QWORD **)v23;
        goto LABEL_25;
      }
LABEL_39:
      __fastfail(3u);
    }
    goto LABEL_40;
  }
  while ( 1 )
  {
LABEL_26:
    if ( *((_DWORD *)v2 + 16) == 4 )
    {
      v24 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
              *((_QWORD *)this + 1),
              2LL,
              *((_QWORD *)v2 + 9),
              *((_QWORD *)v2 + 4),
              *((_QWORD *)v2 + 5));
      if ( !v24 )
        goto LABEL_40;
      *(_QWORD *)(v24 + 64) = v2;
      *(_QWORD *)(v24 + 72) = v2;
      *((_QWORD *)v2 + 19) = v24;
      *(_DWORD *)(v24 + 88) = 0;
      v25 = (_QWORD *)(v24 + 200);
      v26 = v44;
      if ( *v44 != &v43 )
        goto LABEL_39;
      v25[1] = v44;
      *v25 = &v43;
      *v26 = v25;
      v44 = (_QWORD **)v25;
    }
    *((_QWORD *)v2 + 17) = v8;
    *((_QWORD *)v2 + 20) = 0LL;
    if ( v2 == v3 )
      break;
    v2 = VIDMM_RECYCLE_RANGE::GetNextRange(v2);
  }
  v27 = (_QWORD **)v43;
  v28 = (VIDMM_RECYCLE_MULTIRANGE *)(v43 - 25);
  *((_DWORD *)v28 + 22) = 3;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2LL, v28);
  v29 = *v27;
  v30 = *v27;
  v32 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v28);
  if ( v29 != &v43 )
  {
    do
    {
      v33 = (VIDMM_RECYCLE_MULTIRANGE *)(v30 - 25);
      v34 = *((unsigned int *)v30 - 28);
      *((_DWORD *)v30 - 28) = 3;
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v34, v30 - 25);
      v30 = (_QWORD *)*v30;
      VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v33);
    }
    while ( v30 != &v43 );
  }
  v35 = VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v32, v31) != 0;
  if ( v29 == &v43 && !v35 )
  {
    v36 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v32 + 8);
    if ( v36 == *((struct VIDMM_RECYCLE_RANGE **)v32 + 9) )
    {
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)v32 + 10), v36);
      VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(
        *((VIDMM_RECYCLE_BLOCK **)v32 + 10),
        *((struct VIDMM_RECYCLE_RANGE **)v32 + 8));
    }
  }
}
