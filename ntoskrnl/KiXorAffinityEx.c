__int64 __fastcall KiXorAffinityEx(char *a1, _WORD *a2, _BYTE *a3, unsigned __int16 a4)
{
  _BYTE *v8; // r10
  unsigned __int16 v9; // r11
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // bp
  char *v12; // r15
  unsigned int v13; // r9d
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // dx
  signed __int64 v16; // r14
  __int64 v17; // rdi
  _QWORD *v18; // r8
  bool v19; // zf
  __int64 v20; // rcx
  unsigned __int16 v21; // ax
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  _BYTE v26[272]; // [rsp+20h] [rbp-148h] BYREF

  memset(v26, 0, 0x108uLL);
  v8 = v26;
  v9 = *a2;
  v10 = 32;
  v11 = *(_WORD *)a1;
  if ( a3 )
  {
    v10 = a4;
    v8 = a3;
  }
  v12 = (char *)a2;
  v13 = 0;
  if ( *(_WORD *)a1 >= *a2 )
  {
    v11 = *a2;
    v9 = *(_WORD *)a1;
    v12 = a1;
  }
  *((_WORD *)v8 + 1) = v10;
  v14 = v9;
  v15 = 0;
  if ( v9 > v10 )
    v14 = v10;
  *(_WORD *)v8 = v14;
  if ( v11 > v10 )
    v11 = v10;
  if ( v9 > v10 )
    v9 = v10;
  if ( v11 )
  {
    v16 = a1 - (char *)a2;
    v17 = v11;
    v18 = a2 + 4;
    v15 = v11;
    do
    {
      v19 = *v18 == *(_QWORD *)((char *)v18 + v16);
      *(_QWORD *)((char *)v18 + v8 - (_BYTE *)a2) = *v18 ^ *(_QWORD *)((char *)v18 + v16);
      ++v18;
      if ( !v19 )
        v13 = 1;
      --v17;
    }
    while ( v17 );
  }
  if ( v15 < v9 )
  {
    v20 = 8LL * v15;
    v21 = v9 - v15;
    v15 = v9;
    v22 = v21;
    do
    {
      v23 = *(_QWORD *)&v12[v20 + 8];
      *(_QWORD *)&v8[v20 + 8] = v23;
      v20 += 8LL;
      if ( v23 )
        v13 = 1;
      --v22;
    }
    while ( v22 );
  }
  if ( v8 != v26 )
  {
    *((_DWORD *)v8 + 1) = 0;
    while ( v15 < *((_WORD *)v8 + 1) )
    {
      v24 = v15++;
      *(_QWORD *)&v8[8 * v24 + 8] = 0LL;
    }
  }
  return v13;
}
