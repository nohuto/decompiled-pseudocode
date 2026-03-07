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
  unsigned __int8 v16; // dl
  VIDMM_RECYCLE_MULTIRANGE *v17; // rcx
  unsigned __int8 v18; // dl
  VIDMM_RECYCLE_MULTIRANGE *v19; // rcx
  VIDMM_RECYCLE_HEAP_MGR **v20; // rax
  __int64 v21; // rcx
  struct VIDMM_RECYCLE_RANGE *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // r8
  _QWORD *v25; // [rsp+20h] [rbp-38h] BYREF
  VIDMM_RECYCLE_HEAP_MGR *v26; // [rsp+28h] [rbp-30h]
  int v27; // [rsp+60h] [rbp+8h] BYREF

  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1544);
  v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 193);
  v26 = (VIDMM_RECYCLE_HEAP_MGR *)&v25;
  v6 = &v25;
  v25 = &v25;
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
      LOBYTE(v27) = 0;
      v15 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(v11, (bool *)&v27);
      if ( v15 < 0 )
      {
        WdLogSingleEntry3(3LL, v11, v15, **((_QWORD **)this + 1));
        v20 = (VIDMM_RECYCLE_HEAP_MGR **)v26;
        if ( *(_QWORD ***)v26 != &v25 )
          goto LABEL_38;
        *((_QWORD *)v9 + 1) = v26;
        *(_QWORD *)v9 = &v25;
        *v20 = v9;
        v26 = v9;
      }
      if ( !(_BYTE)v27 )
      {
        v17 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v11 + 17);
        if ( v17 )
          VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v17, v16);
      }
    }
    while ( v5 != v3 );
    v6 = v25;
  }
  if ( v6 != &v25 )
  {
    while ( 1 )
    {
      v21 = *v6;
      v22 = (struct VIDMM_RECYCLE_RANGE *)(v6 - 13);
      v23 = v6;
      v6 = (_QWORD *)v21;
      if ( *(_QWORD **)(v21 + 8) != v23 )
        break;
      v24 = (_QWORD *)v23[1];
      if ( (_QWORD *)*v24 != v23 )
        break;
      *v24 = v21;
      *(_QWORD *)(v21 + 8) = v24;
      *((_QWORD *)v22 + 14) = 0LL;
      *v23 = 0LL;
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, v22);
      if ( v6 == &v25 )
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
    v27 = 0;
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_BLOCK **)v14, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v27);
    if ( !v27 )
    {
      v19 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v14 + 17);
      if ( v19 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v19, v18);
    }
  }
}
