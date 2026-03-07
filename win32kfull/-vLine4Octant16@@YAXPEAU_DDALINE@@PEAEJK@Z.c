void __fastcall vLine4Octant16(struct _DDALINE *a1, unsigned __int8 *a2, int a3, char a4)
{
  unsigned int v4; // ebx
  int v5; // edi
  int v6; // esi
  unsigned __int8 *v7; // rbp
  int v8; // r14d
  int v9; // r15d
  char v10; // r11
  int i; // edi
  int v12; // r9d
  unsigned int v13; // eax
  int v14; // esi

  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 3);
  v6 = *((_DWORD *)a1 + 6);
  v7 = a2;
  v8 = *((_DWORD *)a1 + 4);
  v9 = *((_DWORD *)a1 + 5);
  v10 = a4 & 0xF | (16 * (a4 & 0xF));
  a2[(unsigned __int64)v4 >> 1] = byte_1C032B800[v4 & 1] & a2[(unsigned __int64)v4 >> 1] | v10 & ~byte_1C032B800[v4 & 1];
  for ( i = v5 - 1; i; --i )
  {
    v7 += a3;
    v13 = v4 + 1;
    v14 = v9 + v6;
    v12 = v14;
    if ( v14 < 0 )
      v13 = v4;
    v6 = v14 - v8;
    v4 = v13;
    v7[(unsigned __int64)v13 >> 1] = byte_1C032B800[v13 & 1] & v7[(unsigned __int64)v13 >> 1] | v10 & ~byte_1C032B800[v13 & 1];
    if ( v12 < 0 )
      v6 = v12;
  }
}
