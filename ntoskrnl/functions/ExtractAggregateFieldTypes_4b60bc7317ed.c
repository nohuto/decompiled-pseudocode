unsigned __int8 __fastcall ExtractAggregateFieldTypes(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // r9
  unsigned __int64 v5; // r10
  char *v6; // rcx
  char v7; // al
  __int64 v9; // rax
  char v11; // al
  char v12; // r8
  char v13; // dl

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0;
  v5 = v2 + *(unsigned int *)(a2 + 24);
  v6 = (char *)(v2 + 2);
  do
    v7 = *v6++;
  while ( v7 < 0 );
  while ( *v6++ )
    ;
  while ( (unsigned __int64)v6 < v5 )
  {
    while ( *v6++ )
      ;
    if ( *v6 >= 0 )
      break;
    v11 = v6[1];
    v12 = *v6 & 0x7F;
    v6 += 2;
    if ( v11 >= 0 )
      break;
    while ( 1 )
    {
      v13 = *v6;
      if ( *v6 >= 0 )
        break;
      if ( v13 != (char)0x80 )
        return v3;
      ++v6;
    }
    if ( v12 != 9 || (unsigned __int8)(v13 - 113) > 2u )
      break;
    v9 = 2LL * v3++;
    *(_BYTE *)(a2 + 8 * v9 + 45) = v13;
  }
  return v3;
}
