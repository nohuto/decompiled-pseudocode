__int64 __fastcall ParsePackageLen(_QWORD *a1, _QWORD *a2)
{
  unsigned int v3; // r8d
  unsigned __int8 *v4; // r11
  unsigned int v5; // r9d
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // cl

  if ( a2 )
    *a2 = *a1;
  v3 = *(unsigned __int8 *)*a1;
  v4 = (unsigned __int8 *)(*a1 + 1LL);
  *a1 = v4;
  v5 = v3 >> 6;
  if ( (unsigned __int8)(v3 >> 6) )
  {
    v3 &= 0xFu;
    v6 = 0;
    do
    {
      v7 = v6++;
      v3 |= *v4++ << (8 * v7 + 4);
      *a1 = v4;
    }
    while ( v6 < (unsigned __int8)v5 );
  }
  if ( a2 )
    *a2 += v3;
  return v3;
}
