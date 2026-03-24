/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005F0EC
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007B500 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007D810 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0074B40 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0074C60 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0079784 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00797F8 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C007990C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0079C88 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0079E00 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C007C9B0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C007D644 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BF4CC (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *v2; // rdi
  struct VIDMM_RECYCLE_RANGE *v3; // r15
  __int64 v6; // rcx
  __int64 Multirange; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  int v14; // edx
  struct VIDMM_RECYCLE_RANGE *v15; // rsi
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r13
  __int64 v18; // rax
  __int64 v19; // r8
  char v20; // r9
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  char v25; // r9
  _QWORD *v26; // rax
  _QWORD *v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  _QWORD **v31; // rbx
  _QWORD *v32; // rdi
  _QWORD *v33; // r15
  _QWORD *v34; // rsi
  unsigned __int8 v35; // dl
  struct VIDMM_RECYCLE_MULTIRANGE *v36; // rdi
  struct _SLIST_ENTRY *v37; // rbx
  __int64 v38; // rdx
  bool v39; // al
  struct VIDMM_RECYCLE_RANGE *v40; // rdx
  _QWORD *v41; // rax
  _QWORD *v42; // rbx
  struct VIDMM_RECYCLE_MULTIRANGE *v43; // rdx
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  int v45; // ecx
  int v46; // ecx
  __int64 v47; // rdx
  _QWORD *v48; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v49; // [rsp+38h] [rbp-8h]
  __int64 v50; // [rsp+70h] [rbp+30h]

  v2 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  v3 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 9);
  v49 = &v48;
  v6 = *((_QWORD *)this + 1);
  v48 = &v48;
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                 v6,
                 0LL,
                 *((_QWORD *)v2 + 9),
                 *((_QWORD *)v2 + 4),
                 *((_QWORD *)v3 + 5));
  v50 = Multirange;
  v10 = Multirange;
  if ( !Multirange )
  {
LABEL_44:
    v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8);
    v41[3] = *((_QWORD *)a2 + 10);
    v41[4] = *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL);
    v41[5] = *(_QWORD *)(*((_QWORD *)a2 + 9) + 40LL);
    v41[6] = **(_QWORD **)(*((_QWORD *)this + 1) + 8LL);
    WdLogEvent5_WdWarning(v41);
    v42 = v48;
    while ( v42 != &v48 )
    {
      v43 = (struct VIDMM_RECYCLE_MULTIRANGE *)(v42 - 25);
      v42 = (_QWORD *)*v42;
      *((_DWORD *)v43 + 22) = 3;
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), v43);
    }
    for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
    {
      v45 = *((_DWORD *)i + 16);
      *((_QWORD *)i + 17) = 0LL;
      *((_QWORD *)i + 18) = 0LL;
      *((_QWORD *)i + 19) = 0LL;
      *((_QWORD *)i + 20) = 0LL;
      if ( v45 )
      {
        v46 = v45 - 4;
        if ( v46 )
        {
          if ( v46 != 1 )
            goto LABEL_55;
          v47 = 1LL;
        }
        else
        {
          v47 = 0LL;
        }
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v47, i);
      }
      else
      {
        VIDMM_RECYCLE_HEAP::AddRangeToTree(this, 2LL, i);
        VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)i + 9), i);
        VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)i + 9), i);
      }
LABEL_55:
      if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
        return;
    }
  }
  *(_QWORD *)(Multirange + 64) = v2;
  v11 = (_QWORD *)(Multirange + 200);
  *(_QWORD *)(Multirange + 72) = v3;
  *(_DWORD *)(Multirange + 88) = 2;
  v12 = v49;
  if ( *v49 != &v48 )
    goto LABEL_43;
  *(_QWORD *)(Multirange + 208) = v49;
  *v11 = &v48;
  *v12 = v11;
  v13 = *((_QWORD *)a2 + 10);
  v49 = (_QWORD **)v11;
  v14 = **(_DWORD **)(v13 + 32);
  if ( (unsigned int)(v14 - 3) > 3 && (unsigned int)(v14 - 9) > 1 )
  {
    v15 = v2;
    NextRange = 0LL;
    while ( 1 )
    {
      if ( *((_DWORD *)v15 + 16) )
      {
        if ( !NextRange )
          NextRange = v15;
      }
      else if ( NextRange )
      {
        PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v15);
        v18 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                *((_QWORD *)this + 1),
                1LL,
                *((_QWORD *)v2 + 9),
                *((_QWORD *)NextRange + 4),
                *((_QWORD *)PreviousRange + 5));
        v19 = v18;
        if ( !v18 )
          goto LABEL_44;
        *(_QWORD *)(v18 + 64) = NextRange;
        *(_QWORD *)(v18 + 72) = PreviousRange;
        *(_DWORD *)(v18 + 88) = 1;
        do
        {
          *((_QWORD *)NextRange + 18) = v19;
          if ( NextRange == PreviousRange )
            v20 = 1;
          else
            NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
        }
        while ( !v20 );
        v21 = v49;
        v22 = (_QWORD *)(v19 + 200);
        if ( *v49 != &v48 )
          goto LABEL_43;
        *(_QWORD *)(v19 + 208) = v49;
        *v22 = &v48;
        *v21 = v22;
        NextRange = 0LL;
        v49 = (_QWORD **)(v19 + 200);
      }
      if ( v15 == v3 )
        break;
      v15 = VIDMM_RECYCLE_RANGE::GetNextRange(v15);
    }
    if ( !NextRange )
    {
LABEL_29:
      v10 = v50;
      goto LABEL_30;
    }
    v23 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
            *((_QWORD *)this + 1),
            1LL,
            *((_QWORD *)v2 + 9),
            *((_QWORD *)NextRange + 4),
            *((_QWORD *)v3 + 5));
    v24 = v23;
    if ( v23 )
    {
      *(_QWORD *)(v23 + 64) = NextRange;
      *(_QWORD *)(v23 + 72) = v3;
      *(_DWORD *)(v23 + 88) = 1;
      do
      {
        *((_QWORD *)NextRange + 18) = v24;
        if ( NextRange == v3 )
          v25 = 1;
        else
          NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      while ( !v25 );
      v26 = v49;
      v27 = (_QWORD *)(v24 + 200);
      if ( *v49 == &v48 )
      {
        v27[1] = v49;
        *v27 = &v48;
        *v26 = v27;
        v49 = (_QWORD **)v27;
        goto LABEL_29;
      }
LABEL_43:
      __fastfail(3u);
    }
    goto LABEL_44;
  }
  while ( 1 )
  {
LABEL_30:
    if ( *((_DWORD *)v2 + 16) == 4 )
    {
      v28 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
              *((_QWORD *)this + 1),
              2LL,
              *((_QWORD *)v2 + 9),
              *((_QWORD *)v2 + 4),
              *((_QWORD *)v2 + 5));
      if ( !v28 )
        goto LABEL_44;
      *(_QWORD *)(v28 + 64) = v2;
      *(_QWORD *)(v28 + 72) = v2;
      *((_QWORD *)v2 + 19) = v28;
      *(_DWORD *)(v28 + 88) = 0;
      v29 = (_QWORD *)(v28 + 200);
      v30 = v49;
      if ( *v49 != &v48 )
        goto LABEL_43;
      v29[1] = v49;
      *v29 = &v48;
      *v30 = v29;
      v49 = (_QWORD **)v29;
    }
    *((_QWORD *)v2 + 17) = v10;
    *((_QWORD *)v2 + 20) = 0LL;
    if ( v2 == v3 )
      break;
    v2 = VIDMM_RECYCLE_RANGE::GetNextRange(v2);
  }
  v31 = (_QWORD **)v48;
  v32 = v48 - 25;
  *((_DWORD *)v32 + 22) = 3;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2LL, v32);
  v33 = *v31;
  v34 = *v31;
  v36 = VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible((PSLIST_ENTRY)v32);
  if ( v33 != &v48 )
  {
    do
    {
      v37 = (struct _SLIST_ENTRY *)(v34 - 25);
      v38 = *((unsigned int *)v34 - 28);
      *((_DWORD *)v34 - 28) = 3;
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v38, v34 - 25);
      v34 = (_QWORD *)*v34;
      VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v37);
    }
    while ( v34 != &v48 );
  }
  v39 = VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v36, v35) != 0;
  if ( v33 == &v48 && !v39 )
  {
    v40 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v36 + 8);
    if ( v40 == *((struct VIDMM_RECYCLE_RANGE **)v36 + 9) )
    {
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)v36 + 10), v40);
      VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(
        *((VIDMM_RECYCLE_BLOCK **)v36 + 10),
        *((struct VIDMM_RECYCLE_RANGE **)v36 + 8));
    }
  }
}
