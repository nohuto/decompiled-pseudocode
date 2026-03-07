__int64 __fastcall DMMVIDPNTOPOLOGY::RemovePath(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        struct DMMVIDPNPRESENTPATH **a4)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  struct DMMVIDPNPRESENTPATH *Path; // r14
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  int *v13; // rbp
  DMMVIDPNSOURCE *v14; // r10
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  v6 = a2;
  if ( a4 )
    *a4 = 0LL;
  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u) )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225506LL;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(this, v6, v4);
  if ( !Path )
  {
    WdLogSingleEntry3(2LL, v6, v4, this);
    return 3223192359LL;
  }
  if ( *((_BYTE *)this + 76) <= 2u )
    WdLogSingleEntry0(1LL);
  if ( *((_QWORD *)this + 12) <= 2uLL )
    WdLogSingleEntry0(1LL);
  if ( (*(_BYTE *)(*((_QWORD *)this + 13) + 2LL) & 1) != 0 )
  {
    v17 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(this, v6, &v17) < 0 || (v16 = v17) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v16 = v17;
    }
    if ( v16 < 2 )
    {
      WdLogSingleEntry3(2LL, this, v6, v4);
      return 3221225506LL;
    }
  }
  v9 = Set<DMMVIDPNPRESENTPATH>::FindByValue((__int64)this, (__int64)Path);
  if ( DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::ContainsByReference(
         (__int64)this + 8,
         (__int64)v9) )
  {
    v10 = v9 + 1;
    v11 = v9[1];
    if ( *(_QWORD **)(v11 + 8) != v9 + 1 || (v12 = (_QWORD *)v9[2], (_QWORD *)*v12 != v10) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *v10 = 0LL;
    v9[2] = 0LL;
    --*((_QWORD *)this + 5);
    if ( v9 )
      goto LABEL_14;
  }
  else
  {
    v9 = 0LL;
  }
  WdLogSingleEntry0(1LL);
LABEL_14:
  *((_DWORD *)this + 49) &= ~(1 << (*((_DWORD *)v9 + 26) - 1));
  v13 = (int *)v9[12];
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(this, v13[6]) )
    WdLogSingleEntry0(1LL);
  DMMVIDPNTARGET::_SetEmptyCofuncModeSet((DMMVIDPNTARGET *)v13);
  if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(this, *(_DWORD *)(v9[11] + 24LL)) )
    DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(v14);
  if ( a4 )
    *a4 = (struct DMMVIDPNPRESENTPATH *)v9;
  else
    (*(void (__fastcall **)(_QWORD *, __int64))*v9)(v9, 1LL);
  ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 2u);
  return 0LL;
}
