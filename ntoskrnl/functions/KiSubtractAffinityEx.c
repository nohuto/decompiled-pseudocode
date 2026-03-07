__int64 __fastcall KiSubtractAffinityEx(unsigned __int16 *a1, char *a2, _BYTE *a3, unsigned __int16 a4)
{
  unsigned __int16 v8; // ax
  _BYTE *v9; // r9
  unsigned __int16 v10; // r11
  unsigned int v11; // r10d
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // r8
  unsigned __int16 v14; // ax
  signed __int64 v15; // r14
  __int64 v16; // rbx
  _QWORD *v17; // rcx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v21; // rcx
  _BYTE v22[272]; // [rsp+20h] [rbp-138h] BYREF

  memset(v22, 0, 0x108uLL);
  v8 = *(_WORD *)a2;
  v9 = v22;
  v10 = *a1;
  v11 = 0;
  v12 = 0;
  if ( a3 )
    v9 = a3;
  v13 = 32;
  if ( a3 )
    v13 = a4;
  *((_WORD *)v9 + 1) = v13;
  if ( v10 >= v8 )
    v10 = v8;
  v14 = *a1;
  if ( *a1 > v13 )
    v14 = v13;
  *(_WORD *)v9 = v14;
  if ( v10 > v13 )
    v10 = v13;
  if ( v10 )
  {
    v15 = a2 - (char *)a1;
    v16 = v10;
    v17 = a1 + 4;
    v12 = v10;
    do
    {
      v18 = (*v17 & ~*(_QWORD *)((char *)v17 + v15)) == 0LL;
      *(_QWORD *)((char *)v17 + v9 - (_BYTE *)a1) = *v17 & ~*(_QWORD *)((char *)v17 + v15);
      ++v17;
      if ( !v18 )
        v11 = 1;
      --v16;
    }
    while ( v16 );
  }
  while ( v12 < *(_WORD *)v9 )
  {
    v21 = *(_QWORD *)&a1[4 * v12 + 4];
    *(_QWORD *)&v9[8 * v12 + 8] = v21;
    if ( v21 )
      v11 = 1;
    ++v12;
  }
  if ( v9 != v22 )
  {
    *((_DWORD *)v9 + 1) = 0;
    while ( v12 < *((_WORD *)v9 + 1) )
    {
      v19 = v12++;
      *(_QWORD *)&v9[8 * v19 + 8] = 0LL;
    }
  }
  return v11;
}
