__int64 __fastcall SymCryptFdefRawMultSubUint32(_DWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // r10
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rbp
  __int64 v9; // rdx
  _DWORD *v10; // r8
  __int64 v11; // rsi
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  v4 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( a4 )
  {
    v8 = a3;
    v9 = a2 - (_QWORD)a1;
    v10 = a1;
    v11 = a4;
    v7 = a4;
    do
    {
      v12 = v8 * *(unsigned int *)((char *)v10 + v9) + v4;
      v13 = (unsigned int)*v10 - (unsigned __int64)(unsigned int)v12;
      v4 = HIDWORD(v12);
      v14 = v13 - v6;
      *v10++ = v14;
      v6 = BYTE4(v14) & 1;
      --v11;
    }
    while ( v11 );
  }
  v15 = (unsigned int)a1[v7] - (unsigned __int64)v6 - v4;
  a1[v7] = v15;
  return BYTE4(v15) & 1;
}
