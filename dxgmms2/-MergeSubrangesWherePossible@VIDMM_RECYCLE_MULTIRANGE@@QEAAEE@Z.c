/*
 * XREFs of ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C009ADF0
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00853FC (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?IntegrateMultirangeIntoTrees_To_Remove@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0085854 (-IntegrateMultirangeIntoTrees_To_Remove@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0095F98 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z @ 0x1C009728C (-Commit@VIDMM_RECYCLE_MULTIRANGE@@QEAAJEPEAE@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0097830 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0099800 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C009AB60 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 * Callees:
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0096940 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0099D0C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C009AA38 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C009AF50 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B3404 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  struct VIDMM_RECYCLE_RANGE *v4; // r9
  struct VIDMM_RECYCLE_RANGE *v5; // rax
  int v6; // r8d
  int v7; // r10d
  __int64 v8; // rcx
  struct VIDMM_RECYCLE_RANGE *v9; // rdx
  _QWORD *v10; // rbx
  struct VIDMM_RECYCLE_RANGE *v12; // rdi

  v1 = *((_QWORD *)this + 8);
  v3 = *((_QWORD *)this + 9);
  v4 = (struct VIDMM_RECYCLE_RANGE *)v1;
  v5 = (struct VIDMM_RECYCLE_RANGE *)v1;
  v6 = *(_DWORD *)(v1 + 64);
  v7 = *(_DWORD *)(v1 + 92);
  while ( 1 )
  {
    if ( *(_DWORD *)(v1 + 64) != v6 || *(_DWORD *)(v1 + 92) != v7 )
    {
      if ( v4 != v5 )
      {
        VIDMM_RECYCLE_MULTIRANGE::MergeRanges(this, v4, v5);
        v3 = *((_QWORD *)this + 9);
      }
      v6 = *(_DWORD *)(v1 + 64);
      v4 = (struct VIDMM_RECYCLE_RANGE *)v1;
      v7 = *(_DWORD *)(v1 + 92);
    }
    if ( v1 == v3 )
      break;
    v8 = *(_QWORD *)(v1 + 120);
    v5 = (struct VIDMM_RECYCLE_RANGE *)v1;
    if ( v8 == *(_QWORD *)(v1 + 72) + 72LL )
      v1 = 0LL;
    else
      v1 = v8 - 120;
  }
  if ( v4 != (struct VIDMM_RECYCLE_RANGE *)v1 )
    VIDMM_RECYCLE_MULTIRANGE::MergeRanges(this, v4, (struct VIDMM_RECYCLE_RANGE *)v1);
  if ( !*((_DWORD *)this + 54) )
  {
    v9 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
    if ( v9 == *((struct VIDMM_RECYCLE_RANGE **)this + 9) && !*((_DWORD *)v9 + 16) )
      VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 10), v9);
  }
  v10 = (_QWORD *)*((_QWORD *)this + 10);
  if ( *v10 != 1LL )
    return 0;
  if ( *((_DWORD *)this + 54) )
    return 0;
  v12 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  if ( *((_DWORD *)v12 + 16) )
    return 0;
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v10[4], 2, (__int64)this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*(VIDMM_RECYCLE_HEAP_MGR **)(v10[4] + 8LL), this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*(VIDMM_RECYCLE_HEAP_MGR **)(v10[4] + 8LL), v12);
  return 1;
}
