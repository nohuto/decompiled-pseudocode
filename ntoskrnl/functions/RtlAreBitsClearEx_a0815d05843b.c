bool __fastcall RtlAreBitsClearEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  bool result; // al
  unsigned __int64 v5; // rcx
  char v6; // bl
  __int64 *v7; // rdx
  __int64 v8; // r11
  __int64 *v9; // r10
  __int64 *v11; // rdx

  if ( a2 >= *a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return !_bittest64((const signed __int64 *)(a1[1] + 8 * (a2 >> 6)), a2 & 0x3F);
    return 0;
  }
  if ( *a1 - a2 < a3 )
    return 0;
  v5 = a1[1];
  v6 = a2 + a3 - 1;
  v7 = (__int64 *)(v5 + 8 * (a2 >> 6));
  v8 = *v7;
  v9 = (__int64 *)(v5 + 8 * ((a2 + a3 - 1) >> 6));
  if ( v7 == v9 )
    return (v8 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2)) == 0;
  if ( (v8 & (-1LL << a2)) != 0 )
    return 0;
  v11 = v7 + 1;
  if ( v11 == v9 )
    return ((0xFFFFFFFFFFFFFFFFuLL >> ~v6) & *v11) == 0;
  result = 0;
  while ( !*v11 )
  {
    if ( ++v11 == v9 )
      return ((0xFFFFFFFFFFFFFFFFuLL >> ~v6) & *v11) == 0;
  }
  return result;
}
