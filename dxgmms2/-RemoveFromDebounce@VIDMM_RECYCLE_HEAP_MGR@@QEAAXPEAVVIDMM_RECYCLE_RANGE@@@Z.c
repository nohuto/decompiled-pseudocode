/*
 * XREFs of ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009AAD0
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0095F98 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0096430 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0097830 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0099800 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00999D0 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C009E640 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A9EA8 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00F5CFC (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F6B9C (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C0001E98 (-UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  int v5; // eax
  unsigned __int64 v6; // rcx

  v2 = *((_QWORD *)a2 + 13);
  v3 = (_QWORD *)((char *)a2 + 104);
  if ( *(struct VIDMM_RECYCLE_RANGE **)(v2 + 8) != (struct VIDMM_RECYCLE_RANGE *)((char *)a2 + 104)
    || (v4 = (_QWORD *)*((_QWORD *)a2 + 14), (_QWORD *)*v4 != v3) )
  {
    __fastfail(3u);
  }
  *v4 = v2;
  *(_QWORD *)(v2 + 8) = v4;
  *v3 = 0LL;
  v5 = *((_DWORD *)a2 + 16);
  *((_QWORD *)a2 + 14) = 0LL;
  *((_QWORD *)a2 + 12) = 0LL;
  if ( v5 == 5 )
  {
    VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(*((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 5), a2);
  }
  else if ( (unsigned int)(v5 - 3) <= 1 )
  {
    v6 = *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 5);
    if ( (__int64)(v6 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v6)) < 0 )
    {
      if ( g_IsInternalRelease )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
      }
    }
  }
}
