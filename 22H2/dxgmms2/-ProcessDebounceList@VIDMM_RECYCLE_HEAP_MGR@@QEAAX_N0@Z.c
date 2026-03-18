/*
 * XREFs of ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00A40A0
 * Callers:
 *     ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C00A3F60 (-VidMmRangeCurationThread@@YAXPEAX@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00A5850 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C00B4230 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00B4A10 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 * Callees:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C009EDBC (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C00A2CB0 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A3578 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C00A3620 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A426C (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(VIDMM_RECYCLE_HEAP_MGR *this, char a2, char a3)
{
  VIDMM_RECYCLE_HEAP_MGR *v3; // r14
  VIDMM_RECYCLE_HEAP_MGR *v5; // rbx
  _QWORD *v6; // rsi
  VIDMM_RECYCLE_HEAP_MGR *v9; // r12
  bool v10; // al
  struct VIDMM_RECYCLE_RANGE *v11; // rsi
  VIDMM_RECYCLE_HEAP_MGR *v12; // rsi
  bool v13; // al
  struct VIDMM_RECYCLE_RANGE *v14; // r14
  int v15; // eax
  VIDMM_RECYCLE_MULTIRANGE *v16; // rcx
  VIDMM_RECYCLE_MULTIRANGE *v17; // rcx
  VIDMM_RECYCLE_HEAP_MGR **v18; // rax
  __int64 v19; // rcx
  struct VIDMM_RECYCLE_RANGE *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // r8
  _QWORD *v23; // [rsp+20h] [rbp-38h] BYREF
  VIDMM_RECYCLE_HEAP_MGR *v24; // [rsp+28h] [rbp-30h]
  int v25; // [rsp+60h] [rbp+8h] BYREF

  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544);
  v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 193);
  v24 = (VIDMM_RECYCLE_HEAP_MGR *)&v23;
  v6 = &v23;
  v23 = &v23;
  if ( v5 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544) )
  {
    do
    {
      v9 = v5;
      v10 = (__int64)VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_1C00764A0 << 20)
         || VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_1C00764A4 << 20);
      v11 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v5 - 104);
      if ( a3 )
      {
        if ( !v10 )
          break;
      }
      else if ( a2 && *((_QWORD *)v11 + 12) > *((_QWORD *)this + 197) )
      {
        break;
      }
      v5 = *(VIDMM_RECYCLE_HEAP_MGR **)v5;
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v11);
      LOBYTE(v25) = 0;
      v15 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(v11, (bool *)&v25);
      if ( v15 < 0 )
      {
        WdLogSingleEntry3(3LL, v11, v15, **((_QWORD **)this + 1));
        v18 = (VIDMM_RECYCLE_HEAP_MGR **)v24;
        if ( *(_QWORD ***)v24 != &v23 )
          goto LABEL_38;
        *((_QWORD *)v9 + 1) = v24;
        *(_QWORD *)v9 = &v23;
        *v18 = v9;
        v24 = v9;
      }
      if ( !(_BYTE)v25 )
      {
        v16 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v11 + 17);
        if ( v16 )
          VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v16);
      }
    }
    while ( v5 != v3 );
    v6 = v23;
  }
  if ( v6 != &v23 )
  {
    while ( 1 )
    {
      v19 = *v6;
      v20 = (struct VIDMM_RECYCLE_RANGE *)(v6 - 13);
      v21 = v6;
      v6 = (_QWORD *)v19;
      if ( *(_QWORD **)(v19 + 8) != v21 )
        break;
      v22 = (_QWORD *)v21[1];
      if ( (_QWORD *)*v22 != v21 )
        break;
      *v22 = v19;
      *(_QWORD *)(v19 + 8) = v22;
      *((_QWORD *)v20 + 14) = 0LL;
      *v21 = 0LL;
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, v20);
      if ( v6 == &v23 )
        goto LABEL_10;
    }
LABEL_38:
    __fastfail(3u);
  }
LABEL_10:
  v12 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 195);
  while ( v12 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1560) )
  {
    v13 = (__int64)VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit >= (__int64)((unsigned __int64)(unsigned int)dword_1C00764A0 << 20)
       || VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock >= (__int64)((unsigned __int64)(unsigned int)dword_1C00764A4 << 20);
    v14 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v12 - 104);
    if ( a3 )
    {
      if ( !v13 )
        return;
    }
    else if ( a2 && *((_QWORD *)v14 + 12) > *((_QWORD *)this + 197) )
    {
      return;
    }
    v12 = *(VIDMM_RECYCLE_HEAP_MGR **)v12;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v14);
    v25 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_BLOCK **)v14, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v25);
    if ( !v25 )
    {
      v17 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v14 + 17);
      if ( v17 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v17);
    }
  }
}
