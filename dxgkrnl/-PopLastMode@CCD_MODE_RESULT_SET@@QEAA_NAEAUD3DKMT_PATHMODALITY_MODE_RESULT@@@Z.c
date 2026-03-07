char __fastcall CCD_MODE_RESULT_SET::PopLastMode(CCD_MODE_RESULT_SET *this, struct D3DKMT_PATHMODALITY_MODE_RESULT *a2)
{
  __int64 v5; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx

  if ( !*((_DWORD *)this + 12) )
    return 0;
  if ( *((CCD_MODE_RESULT_SET **)this + 2) == (CCD_MODE_RESULT_SET *)((char *)this + 16) )
  {
    v5 = 0LL;
LABEL_6:
    WdLogSingleEntry0(1LL);
    goto LABEL_7;
  }
  v5 = *((_QWORD *)this + 3) - 8LL;
  if ( *((_QWORD *)this + 3) == 8LL )
    goto LABEL_6;
LABEL_7:
  v6 = *((_DWORD *)this + 12) - 1;
  *((_DWORD *)this + 12) = v6;
  v7 = 112LL * (v6 % 0x32);
  *(_OWORD *)a2 = *(_OWORD *)(v7 + v5 + 24);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(v7 + v5 + 40);
  *((_OWORD *)a2 + 2) = *(_OWORD *)(v7 + v5 + 56);
  *((_OWORD *)a2 + 3) = *(_OWORD *)(v7 + v5 + 72);
  *((_OWORD *)a2 + 4) = *(_OWORD *)(v7 + v5 + 88);
  *((_OWORD *)a2 + 5) = *(_OWORD *)(v7 + v5 + 104);
  *((_OWORD *)a2 + 6) = *(_OWORD *)(v7 + v5 + 120);
  if ( *((_DWORD *)this + 12) == 50 * (*((_DWORD *)this + 12) / 0x32u) )
  {
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)this,
           v5) )
    {
      v8 = (_QWORD *)(v5 + 8);
      v9 = *(_QWORD *)(v5 + 8);
      if ( *(_QWORD *)(v9 + 8) != v5 + 8 || (v10 = *(_QWORD **)(v5 + 16), (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *v8 = 0LL;
      *(_QWORD *)(v5 + 16) = 0LL;
      --*((_QWORD *)this + 4);
    }
    if ( v5 )
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
  }
  return 1;
}
