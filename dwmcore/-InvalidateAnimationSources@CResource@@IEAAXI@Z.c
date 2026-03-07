void __fastcall CResource::InvalidateAnimationSources(CResource *this, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // rdi
  struct _RTL_GENERIC_TABLE *v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int Buffer; // [rsp+20h] [rbp-38h] BYREF
  void *lpMem[2]; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  v5 = *(_QWORD *)(v2 + 496);
  if ( v5 == *(_QWORD *)(v2 + 504) )
  {
    v12 = v5 + 1;
    v5 = 1LL;
    if ( v12 )
      v5 = v12;
  }
  v6 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 5);
  v7 = 0LL;
  if ( v6 )
  {
    Buffer = a2;
    v15 = 0LL;
    *(_OWORD *)lpMem = 0LL;
    v16 = 0;
    v7 = (__int64)RtlLookupElementGenericTable(v6, &Buffer);
    if ( lpMem[0] != lpMem[1] )
    {
      operator delete(lpMem[0]);
      lpMem[0] = 0LL;
    }
  }
  v8 = v7 + 8;
  v9 = -v7;
  v10 = v8 & -(__int64)(v9 != 0);
  if ( v10 )
  {
    if ( *(_DWORD *)((v8 & -(__int64)(v9 != 0)) + 0x18) )
    {
      do
      {
        v11 = v3++;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 8 * v11) + 296LL) = v5;
      }
      while ( v3 < *(_DWORD *)(v10 + 24) );
    }
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 448LL) |= 2u;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 32LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
      0LL,
      8LL);
  }
}
