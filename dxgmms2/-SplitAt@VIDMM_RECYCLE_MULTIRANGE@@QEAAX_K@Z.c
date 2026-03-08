/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C0096738
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0096EB4 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z @ 0x1C000206C (-AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C008675C (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0097470 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00975D0 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0099E70 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C009AF28 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C009C2F0 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00B0440 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::SplitAt(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  char v2; // di
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  unsigned __int64 i; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r15
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r12
  VIDMM_RECYCLE_MULTIRANGE *v12; // rax
  VIDMM_RECYCLE_MULTIRANGE *v13; // rbp
  int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // r8
  struct _RTL_BALANCED_NODE *v17; // rbx
  __int64 v18; // rax
  struct _RTL_BALANCED_NODE *v19; // rax
  int v20; // ecx
  __int64 v21; // rdx
  _QWORD v22[2]; // [rsp+30h] [rbp-48h] BYREF
  char v23; // [rsp+40h] [rbp-38h]
  unsigned int v24; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  for ( i = a2 + *((_QWORD *)this + 4); NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
  {
    if ( *((_QWORD *)NextRange + 4) <= i && *((_QWORD *)NextRange + 5) > i )
      break;
  }
  v6 = *((_QWORD *)NextRange + 4);
  if ( v6 == i )
  {
    PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(NextRange);
  }
  else
  {
    LOBYTE(v24) = 1;
    VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v6, (bool *)&v24);
    if ( !(_BYTE)v24 )
    {
      WdLogSingleEntry2(3LL, this, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL));
      return;
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && *((_QWORD *)NextRange + 5) != *((_QWORD *)this + 5) )
      *((_QWORD *)this + 9) = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    v7 = *((_QWORD *)NextRange + 15);
    PreviousRange = NextRange;
    v9 = *((_QWORD *)NextRange + 9);
    NextRange = 0LL;
    if ( v7 != v9 + 72 )
      NextRange = (struct VIDMM_RECYCLE_RANGE *)(v7 - 120);
  }
  v10 = *((_QWORD *)this + 10);
  v11 = *((_QWORD *)this + 5);
  v24 = *((_DWORD *)this + 54);
  v12 = (VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::AllocateWithStore(
                                      *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(v10 + 32) + 8LL),
                                      *(struct _LOOKASIDE_LIST_EX **)(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 8LL) + 1320LL),
                                      (void **)(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 8LL) + 1656LL),
                                      (unsigned int *)(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 8LL) + 1620LL));
  v13 = v12;
  if ( v12 )
  {
    VIDMM_RECYCLE_MULTIRANGE::Init(v12, v24, v10, i, v11);
    *((_QWORD *)v13 + 8) = NextRange;
    *((_QWORD *)v13 + 9) = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = PreviousRange;
    *((_QWORD *)this + 5) = i;
    VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(v13);
    v14 = *((_DWORD *)this + 54);
    if ( v14 )
    {
      v20 = v14 - 1;
      if ( v20 )
      {
        if ( v20 != 1 )
          return;
        v21 = 0LL;
      }
      else
      {
        v21 = 1LL;
      }
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL), v21, v13);
      return;
    }
    v15 = *(_QWORD *)(*((_QWORD *)this + 10) + 32LL);
    WdLogSingleEntry2(4LL, v13, 2LL);
    v17 = *(struct _RTL_BALANCED_NODE **)(v15 + 64);
    v18 = *((_QWORD *)v13 + 7);
    v22[0] = *((_QWORD *)v13 + 5) - *((_QWORD *)v13 + 4);
    v22[1] = v18;
    v23 = 0;
    if ( !v17 )
      goto LABEL_18;
    while ( 1 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(v22, v17) < 0 )
      {
        v19 = v17->Children[0];
        if ( !v17->Children[0] )
          goto LABEL_18;
      }
      else
      {
        v19 = v17->Children[1];
        if ( !v19 )
        {
          v2 = 1;
LABEL_18:
          LOBYTE(v16) = v2;
          RtlAvlInsertNodeEx(v15 + 64, v17, v16, v13);
          *((_DWORD *)v13 + 22) = 2;
          return;
        }
      }
      v17 = v19;
    }
  }
}
