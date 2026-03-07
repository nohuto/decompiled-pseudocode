__int64 __fastcall CVisual::PropagateFlags(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  BOOL v5; // r13d
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2 | 0x10;
  if ( (a2 & 1) == 0 )
    v3 = a2;
  v5 = !(a2 & 1);
  if ( (v2 & 2) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v2) = v2 & 1;
  if ( (_DWORD)v2 )
  {
    v12 = 0LL;
    v13 = (unsigned int)v2;
    do
    {
      v14 = CPtrArrayBase::operator[](a1 + 24, v12);
      if ( v14 != *(_QWORD *)(a1 + 88) )
        (*(void (__fastcall **)(__int64, BOOL, __int64))(*(_QWORD *)v14 + 72LL))(v14, v5, a1);
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
  *(_BYTE *)(a1 + 96) |= v3;
  v7 = result;
  if ( (v3 & 0xC) != 0 )
  {
    v3 = v3 & 0xFFFFFF73 | 0x80;
    if ( result )
      ++*(_DWORD *)(result + 28);
  }
  if ( (v3 & 2) != 0 )
    v3 = v3 & 0xFFFFFFBD | 0x40;
  v8 = *(_QWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a1 + 103) & 1) != 0 )
  {
    do
    {
      if ( !v8 )
        break;
      result = v3 & *(char *)(v8 + 96);
      if ( (_DWORD)result == v3 )
        break;
      *(_BYTE *)(v8 + 96) |= v3;
      v9 = *(_QWORD *)(v8 + 24);
      if ( (v9 & 2) != 0 )
        v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v9) = v9 & 1;
      v10 = (__int64 *)(v8 + 88);
      if ( (_DWORD)v9 )
      {
        v15 = 0LL;
        v16 = (unsigned int)v9;
        do
        {
          v17 = CPtrArrayBase::operator[](v8 + 24, v15);
          if ( v17 != *v10 )
            (*(void (__fastcall **)(__int64, BOOL, __int64))(*(_QWORD *)v17 + 72LL))(v17, v5, v8);
          ++v15;
          --v16;
        }
        while ( v16 );
      }
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 160LL))(v8);
      if ( v11 && v7 != v11 )
      {
        if ( (v3 & 0x80u) != 0 )
          ++*(_DWORD *)(v11 + 24);
        v7 = v11;
      }
      result = v8;
      v8 = *v10;
    }
    while ( (*(_BYTE *)(result + 103) & 1) != 0 );
  }
  return result;
}
