void __fastcall CVisualTreeData::Link(CVisualTreeData *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  _QWORD *v4; // r8
  _QWORD *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r8
  HANDLE ProcessHeap; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _BYTE *v14; // rdx
  unsigned int i; // eax
  _QWORD **v16; // rbx
  __int64 v17; // rcx
  _BYTE *v18; // rdx
  unsigned int j; // eax

  v2 = *((_QWORD *)this + 49);
  v3 = *(_QWORD **)(v2 + 4688);
  v4 = (_QWORD *)((char *)this + 376);
  if ( *v3 != v2 + 4680 )
    goto LABEL_24;
  *v4 = v2 + 4680;
  v5 = 0LL;
  *((_QWORD *)this + 48) = v3;
  *v3 = v4;
  *(_QWORD *)(v2 + 4688) = v4;
  ++*(_DWORD *)(v2 + 4696);
  v6 = *((_QWORD *)this + 33);
  v7 = *(_QWORD *)(v6 + 232);
  if ( *(int *)v7 >= 0 )
    goto LABEL_3;
  v13 = *(unsigned int *)(v7 + 4);
  v14 = (_BYTE *)(v7 + 8);
  for ( i = 0; i < (unsigned int)v13; ++v14 )
  {
    if ( *v14 == 1 )
      break;
    ++i;
  }
  v16 = i >= (unsigned int)v13 ? 0LL : (_QWORD **)(v13 + 15 + v7 + 8LL * i - (((_BYTE)v13 + 15) & 7));
  v9 = *v16;
  if ( !v9 )
  {
LABEL_3:
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
    if ( !v9 )
      RaiseFailFastException(0LL, 0LL, 0);
    v9[1] = v9;
    *v9 = v9;
    v10 = *(_QWORD *)(v6 + 232);
    if ( *(int *)v10 < 0 )
    {
      v17 = *(unsigned int *)(v10 + 4);
      v18 = (_BYTE *)(v10 + 8);
      for ( j = 0; j < (unsigned int)v17; ++v18 )
      {
        if ( *v18 == 1 )
          break;
        ++j;
      }
      if ( j < (unsigned int)v17 )
        v5 = (_QWORD *)(v10 + v17 + 15 + 8LL * j - (((_BYTE)v17 + 15) & 7));
      *v5 = v9;
    }
    else
    {
      *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((_DWORD **)(v6 + 232), 1) = v9;
    }
  }
  v11 = (_QWORD *)v9[1];
  v12 = (_QWORD *)((char *)this + 360);
  if ( (_QWORD *)*v11 != v9 )
LABEL_24:
    __fastfail(3u);
  *v12 = v9;
  *((_QWORD *)this + 46) = v11;
  *v11 = v12;
  v9[1] = v12;
  *((_BYTE *)this + 10) = 1;
}
