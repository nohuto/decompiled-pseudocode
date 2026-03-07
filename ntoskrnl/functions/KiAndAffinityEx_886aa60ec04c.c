__int64 __fastcall KiAndAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3, unsigned __int16 a4)
{
  _BYTE *v8; // r9
  unsigned __int16 v9; // cx
  unsigned int v10; // r10d
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // cx
  __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // rdx
  _BYTE v17[272]; // [rsp+20h] [rbp-128h] BYREF

  memset(v17, 0, 0x108uLL);
  v8 = v17;
  v9 = 32;
  if ( a3 )
  {
    v8 = a3;
    v9 = a4;
  }
  v10 = 0;
  *((_WORD *)v8 + 1) = v9;
  v11 = *a1;
  if ( *a1 >= *a2 )
    v11 = *a2;
  *(_WORD *)v8 = v11;
  if ( v11 > v9 )
  {
    *(_WORD *)v8 = v9;
    v11 = v9;
  }
  v12 = 0;
  if ( v11 )
  {
    do
    {
      v13 = 4LL * v12;
      v14 = (*(_QWORD *)&a2[v13 + 4] & *(_QWORD *)&a1[v13 + 4]) == 0LL;
      *(_QWORD *)&v8[v13 * 2 + 8] = *(_QWORD *)&a2[v13 + 4] & *(_QWORD *)&a1[v13 + 4];
      if ( !v14 )
        v10 = 1;
      ++v12;
    }
    while ( v12 < *(_WORD *)v8 );
  }
  if ( v8 != v17 )
  {
    for ( *((_DWORD *)v8 + 1) = 0; v12 < *((_WORD *)v8 + 1); *(_QWORD *)&v8[8 * v15 + 8] = 0LL )
      v15 = v12++;
  }
  return v10;
}
