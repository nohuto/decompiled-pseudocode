__int64 __fastcall MiCheckSlabPfnBitmap(__int64 a1, __int64 a2, int a3)
{
  const signed __int64 **v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rcx
  const signed __int64 *v11; // rdx
  signed __int64 v12; // rbx
  const signed __int64 *v13; // r9
  const signed __int64 *v14; // r11
  bool v15; // zf
  const signed __int64 *v16; // r9

  if ( !byte_140C6EE66 )
    return 0LL;
  v4 = (const signed __int64 **)&unk_140C6EFF8;
  if ( !a3 )
    v4 = (const signed __int64 **)&unk_140C6EFE8;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v6 = v5 >> 9;
  if ( a2 == 1 )
    return (char)_bittest64(v4[1], v6);
  v9 = (v5 + a2 - 1) >> 9;
  v10 = v9 - v6 + 1;
  if ( v6 >= (unsigned __int64)*v4 )
    return 1LL;
  if ( v10 <= 1 )
  {
    if ( v9 == v6 )
      return (char)_bittest64(&v4[1][v6 >> 6], v6 & 0x3F);
    return 1LL;
  }
  if ( (unsigned __int64)*v4 - v6 < v10 )
    return 1LL;
  v11 = v4[1];
  v12 = v11[v6 >> 6];
  v13 = &v11[v6 >> 6];
  v14 = &v11[v9 >> 6];
  if ( v13 == v14 )
  {
    v15 = (v12 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10) << v6)) == 0;
  }
  else
  {
    if ( (v12 & (-1LL << v6)) != 0 )
      return 1LL;
    v16 = v13 + 1;
    if ( v16 != v14 )
    {
      while ( !*v16 )
      {
        if ( ++v16 == v14 )
          goto LABEL_20;
      }
      return 1LL;
    }
LABEL_20:
    v15 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v9) & *v16) == 0;
  }
  return !v15;
}
