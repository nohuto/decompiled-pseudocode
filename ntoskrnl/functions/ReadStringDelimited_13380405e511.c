__int64 __fastcall ReadStringDelimited(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _WORD **a5,
        int a6,
        FILE *File,
        __int64 a8,
        _DWORD *a9)
{
  unsigned __int8 v10; // r10
  unsigned __int8 *v14; // rcx
  char v15; // r11
  unsigned __int8 *v16; // r9
  bool v17; // zf
  unsigned __int8 *v18; // r9
  unsigned __int8 i; // al
  unsigned __int8 *v20; // rdx
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int8 v24; // al
  int v26[4]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v27; // [rsp+60h] [rbp-48h]

  v10 = 0;
  v14 = *a2;
  v15 = a1 | 8;
  *(_OWORD *)v26 = 0LL;
  v16 = v14 + 1;
  *a2 = v14 + 1;
  v17 = v14[1] == 94;
  v27 = 0LL;
  if ( !v17 )
  {
    v16 = v14;
    v15 = a1;
  }
  v18 = v16 + 1;
  i = *v18;
  if ( *v18 != 93 )
    goto LABEL_5;
  v10 = 93;
  HIBYTE(v26[2]) = 32;
  for ( i = *++v18; i != 93; i = *v18 )
  {
LABEL_5:
    v20 = v18++;
    if ( i == 45 && v10 && (v21 = *v18, *v18 != 93) )
    {
      v18 = v20 + 2;
      if ( v10 >= v21 )
      {
        v22 = v10;
        v10 = v21;
      }
      else
      {
        v22 = v21;
      }
      do
      {
        v23 = (unsigned __int64)v10 >> 3;
        v24 = v10++;
        *((_BYTE *)v26 + v23) |= 1 << (v24 & 7);
      }
      while ( v10 <= v22 );
      v10 = 0;
    }
    else
    {
      v10 = i;
      *((_BYTE *)v26 + ((unsigned __int64)i >> 3)) |= 1 << (i & 7);
    }
  }
  *a2 = v18;
  return ReadString(v15, (__int64)v26, a3, a4, a5, a6, File, a8, a9);
}
