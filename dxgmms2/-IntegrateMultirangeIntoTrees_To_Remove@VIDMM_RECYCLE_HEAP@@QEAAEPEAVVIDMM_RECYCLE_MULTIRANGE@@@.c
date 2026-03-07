bool __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees_To_Remove(
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
  struct VIDMM_RECYCLE_RANGE *v14; // rbx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r13
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
  bool result; // al
  struct VIDMM_RECYCLE_RANGE *v36; // rdx
  _QWORD *v37; // rbx
  struct VIDMM_RECYCLE_MULTIRANGE *v38; // rdx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  bool v40; // di
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rdx
  _QWORD *v44; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v45; // [rsp+38h] [rbp-8h]
  __int64 v46; // [rsp+70h] [rbp+30h]

  v2 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  v3 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 9);
  v45 = &v44;
  v6 = *((_QWORD *)this + 1);
  v44 = &v44;
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                 v6,
                 0LL,
                 *((_QWORD *)v2 + 9),
                 *((_QWORD *)v2 + 4),
                 *((_QWORD *)v3 + 5));
  v46 = Multirange;
  v8 = Multirange;
  if ( !Multirange )
  {
LABEL_39:
    WdLogSingleEntry4(
      3LL,
      *((_QWORD *)a2 + 10),
      *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL),
      *(_QWORD *)(*((_QWORD *)a2 + 9) + 40LL),
      **(_QWORD **)(*((_QWORD *)this + 1) + 8LL));
    v37 = v44;
    while ( v37 != &v44 )
    {
      v38 = (struct VIDMM_RECYCLE_MULTIRANGE *)(v37 - 25);
      v37 = (_QWORD *)*v37;
      *((_DWORD *)v38 + 22) = 3;
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), v38);
    }
    NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
    v40 = 0;
    while ( 1 )
    {
      v41 = *((_DWORD *)NextRange + 16);
      *((_QWORD *)NextRange + 17) = 0LL;
      *((_QWORD *)NextRange + 18) = 0LL;
      *((_QWORD *)NextRange + 19) = 0LL;
      *((_QWORD *)NextRange + 20) = 0LL;
      if ( v41 )
      {
        v42 = v41 - 4;
        if ( v42 )
        {
          if ( v42 != 1 )
            goto LABEL_50;
          v43 = 1LL;
        }
        else
        {
          v43 = 0LL;
        }
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v43, NextRange);
      }
      else
      {
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, 2LL, NextRange);
        VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)NextRange + 9), NextRange);
        v40 = VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)NextRange + 9), NextRange);
      }
LABEL_50:
      if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
        return v40;
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    }
  }
  *(_QWORD *)(Multirange + 64) = v2;
  v9 = (_QWORD *)(Multirange + 200);
  *(_QWORD *)(Multirange + 72) = v3;
  *(_DWORD *)(Multirange + 88) = 2;
  v10 = v45;
  if ( *v45 != &v44 )
    goto LABEL_38;
  *(_QWORD *)(Multirange + 208) = v45;
  *v9 = &v44;
  *v10 = v9;
  v11 = *((_QWORD *)a2 + 10);
  v45 = (_QWORD **)v9;
  v12 = **(_DWORD **)(v11 + 32);
  if ( (unsigned int)(v12 - 3) > 3 && (unsigned int)(v12 - 9) > 1 )
  {
    v13 = v2;
    v14 = 0LL;
    while ( 1 )
    {
      if ( *((_DWORD *)v13 + 16) )
      {
        if ( !v14 )
          v14 = v13;
      }
      else if ( v14 )
      {
        PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v13);
        v16 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                *((_QWORD *)this + 1),
                1LL,
                *((_QWORD *)v2 + 9),
                *((_QWORD *)v14 + 4),
                *((_QWORD *)PreviousRange + 5));
        v17 = v16;
        if ( !v16 )
          goto LABEL_39;
        *(_QWORD *)(v16 + 64) = v14;
        *(_QWORD *)(v16 + 72) = PreviousRange;
        *(_DWORD *)(v16 + 88) = 1;
        while ( 1 )
        {
          *((_QWORD *)v14 + 18) = v17;
          if ( v14 == PreviousRange )
            break;
          v14 = VIDMM_RECYCLE_RANGE::GetNextRange(v14);
        }
        v18 = v45;
        v19 = (_QWORD *)(v17 + 200);
        if ( *v45 != &v44 )
          goto LABEL_38;
        v19[1] = v45;
        *v19 = &v44;
        *v18 = v19;
        v14 = 0LL;
        v45 = (_QWORD **)v19;
      }
      if ( v13 == v3 )
        break;
      v13 = VIDMM_RECYCLE_RANGE::GetNextRange(v13);
    }
    if ( !v14 )
    {
LABEL_25:
      v8 = v46;
      goto LABEL_26;
    }
    v20 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
            *((_QWORD *)this + 1),
            1LL,
            *((_QWORD *)v2 + 9),
            *((_QWORD *)v14 + 4),
            *((_QWORD *)v3 + 5));
    v21 = v20;
    if ( v20 )
    {
      *(_QWORD *)(v20 + 64) = v14;
      *(_QWORD *)(v20 + 72) = v3;
      *(_DWORD *)(v20 + 88) = 1;
      while ( 1 )
      {
        *((_QWORD *)v14 + 18) = v21;
        if ( v14 == v3 )
          break;
        v14 = VIDMM_RECYCLE_RANGE::GetNextRange(v14);
      }
      v22 = v45;
      v23 = (_QWORD *)(v21 + 200);
      if ( *v45 == &v44 )
      {
        v23[1] = v45;
        *v23 = &v44;
        *v22 = v23;
        v45 = (_QWORD **)v23;
        goto LABEL_25;
      }
LABEL_38:
      __fastfail(3u);
    }
    goto LABEL_39;
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
        goto LABEL_39;
      *(_QWORD *)(v24 + 64) = v2;
      *(_QWORD *)(v24 + 72) = v2;
      *((_QWORD *)v2 + 19) = v24;
      *(_DWORD *)(v24 + 88) = 0;
      v25 = (_QWORD *)(v24 + 200);
      v26 = v45;
      if ( *v45 != &v44 )
        goto LABEL_38;
      v25[1] = v45;
      *v25 = &v44;
      *v26 = v25;
      v45 = (_QWORD **)v25;
    }
    *((_QWORD *)v2 + 17) = v8;
    *((_QWORD *)v2 + 20) = 0LL;
    if ( v2 == v3 )
      break;
    v2 = VIDMM_RECYCLE_RANGE::GetNextRange(v2);
  }
  v27 = (_QWORD **)v44;
  v28 = (VIDMM_RECYCLE_MULTIRANGE *)(v44 - 25);
  *((_DWORD *)v28 + 22) = 3;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2LL, v28);
  v29 = *v27;
  v30 = *v27;
  v32 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v28);
  if ( v29 != &v44 )
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
    while ( v30 != &v44 );
  }
  result = VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v32, v31) != 0;
  if ( v29 == &v44 && !result )
  {
    v36 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v32 + 8);
    if ( v36 == *((struct VIDMM_RECYCLE_RANGE **)v32 + 9) )
    {
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)v32 + 10), v36);
      return VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(
               *((VIDMM_RECYCLE_BLOCK **)v32 + 10),
               *((struct VIDMM_RECYCLE_RANGE **)v32 + 8));
    }
  }
  return result;
}
