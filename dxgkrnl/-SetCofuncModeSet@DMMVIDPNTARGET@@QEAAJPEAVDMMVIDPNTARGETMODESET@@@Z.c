__int64 __fastcall DMMVIDPNTARGET::SetCofuncModeSet(
        struct DMMVIDPNTARGETMODESET **this,
        struct DMMVIDPNTARGETMODESET *a2)
{
  struct DMMVIDPNTARGETMODESET *v4; // rcx
  struct DMMVIDPNTARGETMODESET *v5; // rcx
  unsigned int v7; // esi
  __int64 v8; // rax
  struct DMMVIDPNTARGETMODESET *v9; // rsi
  __int64 v10; // r11
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  if ( *((struct DMMVIDPNTARGETMODESET **)a2 + 6) == (struct DMMVIDPNTARGETMODESET *)((char *)a2 + 48) )
  {
    v7 = -1071774967;
LABEL_13:
    WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 6));
    return v7;
  }
  if ( a2 != this[14] )
  {
    v7 = -1071774928;
    goto LABEL_13;
  }
  if ( *((_QWORD *)this[13] + 18) )
  {
    v8 = Set<DMMVIDPNTARGETMODE>::FindByValue((char *)a2 + 24);
    if ( !v8 )
      return 3223192338LL;
    DMMVIDPNTARGETMODESET::PinMode(a2, *(_DWORD *)(v8 + 24));
  }
  *((_BYTE *)this[13] + 136) = 0;
  if ( (unsigned __int64)*((int *)this[13] + 24) > 1 )
  {
    v9 = this[13];
    if ( !(unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                             this[15],
                             v9) )
    {
      v11 = *(_QWORD **)(v10 + 24);
      v12 = (_QWORD *)((char *)v9 + 8);
      if ( *v11 != v10 + 16 )
        __fastfail(3u);
      *v12 = v10 + 16;
      *((_QWORD *)v9 + 2) = v11;
      *v11 = v12;
      *(_QWORD *)(v10 + 24) = v12;
      ++*(_QWORD *)(v10 + 32);
    }
  }
  v4 = this[13];
  if ( v4 && a2 != v4 )
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v4 + 88));
  this[13] = a2;
  v5 = this[14];
  if ( v5 )
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v5 + 88));
  this[14] = 0LL;
  return 0LL;
}
