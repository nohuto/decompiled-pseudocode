__int64 __fastcall DMMVIDPNTARGET::ReleaseModeSet(DMMVIDPNTARGET *this, struct DMMVIDPNTARGETMODESET *a2)
{
  DMMVIDPNTARGET *v4; // rdx
  __int64 v6; // r11
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = (DMMVIDPNTARGET *)*((_QWORD *)a2 + 14);
  if ( v4 == this )
  {
    if ( a2 == *((struct DMMVIDPNTARGETMODESET **)this + 14) )
    {
      WdLogSingleEntry2(7LL, a2, *((unsigned int *)this + 6));
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 14, 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
        WdLogSingleEntry0(1LL);
    }
    if ( *((_DWORD *)a2 + 24) == 1
      && (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                            *((_QWORD *)this + 15),
                            a2) )
    {
      v7 = (_QWORD *)((char *)a2 + 8);
      v8 = *((_QWORD *)a2 + 1);
      if ( *(struct DMMVIDPNTARGETMODESET **)(v8 + 8) != (struct DMMVIDPNTARGETMODESET *)((char *)a2 + 8)
        || (v9 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v9 != v7) )
      {
        __fastfail(3u);
      }
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      *v7 = 0LL;
      *((_QWORD *)a2 + 2) = 0LL;
      --*(_QWORD *)(v6 + 32);
    }
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)a2 + 88));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, v4, a2, this);
    return 3223192368LL;
  }
}
