__int64 __fastcall CCD_MODE_RESULT_SET::AddMode(
        CCD_MODE_RESULT_SET *this,
        const struct D3DKMT_PATHMODALITY_MODE_RESULT *a2)
{
  _QWORD *v4; // rbp
  _DWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0

  if ( (**(unsigned __int8 (__fastcall ***)(CCD_MODE_RESULT_SET *))this)(this) )
  {
    v4 = (_QWORD *)((char *)this + 16);
    v5 = (_DWORD *)((char *)this + 48);
    if ( (_QWORD *)*v4 != v4 && *v5 != 50 * (*v5 / 0x32u) )
    {
      v6 = (_QWORD *)(*((_QWORD *)this + 3) - 8LL);
      if ( *((_QWORD *)this + 3) == 8LL )
        WdLogSingleEntry0(1LL);
LABEL_11:
      v10 = *((_OWORD *)a2 + 1);
      v11 = 14LL * (*v5 % 0x32u);
      *(_OWORD *)&v6[v11 + 3] = *(_OWORD *)a2;
      v12 = *((_OWORD *)a2 + 2);
      *(_OWORD *)&v6[v11 + 5] = v10;
      v13 = *((_OWORD *)a2 + 3);
      *(_OWORD *)&v6[v11 + 7] = v12;
      v14 = *((_OWORD *)a2 + 4);
      *(_OWORD *)&v6[v11 + 9] = v13;
      v15 = *((_OWORD *)a2 + 5);
      *(_OWORD *)&v6[v11 + 11] = v14;
      v16 = *((_OWORD *)a2 + 6);
      *(_OWORD *)&v6[v11 + 13] = v15;
      *(_OWORD *)&v6[v11 + 15] = v16;
      ++*v5;
      return 0LL;
    }
    v7 = operator new[](0x15F8uLL, 0x4B677844u, 256LL);
    v6 = (_QWORD *)v7;
    if ( v7 )
    {
      memset((void *)(v7 + 24), 0, 0x15E0uLL);
      v6[1] = 0LL;
      v6[2] = 0LL;
      *v6 = &SetElement::`vftable';
      if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
              (__int64)this,
              (__int64)v6) )
      {
        v8 = (_QWORD *)*((_QWORD *)this + 3);
        v9 = v6 + 1;
        if ( (_QWORD *)*v8 != v4 )
          __fastfail(3u);
        *v9 = v4;
        v6[2] = v8;
        *v8 = v9;
        *((_QWORD *)this + 3) = v9;
        ++*((_QWORD *)this + 4);
      }
      goto LABEL_11;
    }
  }
  return 3221225495LL;
}
