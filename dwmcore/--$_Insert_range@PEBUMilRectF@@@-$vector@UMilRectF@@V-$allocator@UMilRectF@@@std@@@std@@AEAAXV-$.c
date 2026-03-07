void __fastcall std::vector<MilRectF>::_Insert_range<MilRectF const *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        __int64 a4)
{
  _BYTE *v4; // r14
  signed __int64 v5; // r12
  _BYTE *v7; // r8
  unsigned __int64 v8; // r15
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  size_t v13; // r13
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  SIZE_T size_of; // rax
  char *v19; // r12
  size_t v20; // r8
  const void *v21; // rdx
  char *v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // rbp
  char *v25; // rdi
  _BYTE *v26; // [rsp+80h] [rbp+8h]
  size_t Size; // [rsp+98h] [rbp+20h]

  v4 = *(_BYTE **)(a1 + 8);
  v5 = a4 - (_QWORD)a3;
  v7 = *(_BYTE **)a1;
  v8 = v5 >> 4;
  Size = v5;
  v26 = *(_BYTE **)a1;
  if ( v5 >> 4 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( v8 <= (v11 - (__int64)v4) >> 4 )
    {
      v23 = 16 * v8;
      v24 = (v4 - a2) >> 4;
      if ( v8 < v24 )
      {
        memmove_0(v4, &v4[-v23], 16 * v8);
        *(_QWORD *)(a1 + 8) = &v4[v23];
        memmove_0(&a2[16 * v8], a2, (size_t)&v4[-16LL * v8 - (_QWORD)a2]);
      }
      else
      {
        v25 = &a2[v23];
        memmove_0(v25, a2, v4 - a2);
        *(_QWORD *)(a1 + 8) = &v25[16 * v24];
      }
      memmove_0(a2, a3, v5);
    }
    else
    {
      v12 = 0xFFFFFFFFFFFFFFFLL;
      v13 = v4 - v7;
      v14 = (v4 - v7) >> 4;
      if ( v8 > 0xFFFFFFFFFFFFFFFLL - v14 )
        std::_Xlength_error("vector too long");
      v15 = v14 + v8;
      v16 = (v11 - (__int64)v7) >> 4;
      v17 = v16 >> 1;
      if ( v16 <= 0xFFFFFFFFFFFFFFFLL - (v16 >> 1) )
      {
        v12 = v17 + v16;
        if ( v17 + v16 < v15 )
          v12 = v15;
      }
      size_of = std::_Get_size_of_n<16>(v12);
      v19 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memmove_0(&v19[16 * ((a2 - v26) >> 4)], a3, Size);
      if ( v8 == 1 && a2 == v4 )
      {
        v21 = v26;
        v20 = v13;
        v22 = v19;
      }
      else
      {
        memmove_0(v19, v26, a2 - v26);
        v20 = v4 - a2;
        v21 = a2;
        v22 = &v19[16 * v8 + 16 * ((a2 - v26) >> 4)];
      }
      memmove_0(v22, v21, v20);
      if ( *(_QWORD *)a1 )
        std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
      *(_QWORD *)a1 = v19;
      *(_QWORD *)(a1 + 8) = &v19[16 * v15];
      *(_QWORD *)(a1 + 16) = &v19[16 * v12];
    }
  }
}
