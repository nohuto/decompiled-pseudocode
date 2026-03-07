signed __int64 __fastcall ExHandleTableQuery(unsigned int *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int *v3; // rax
  signed __int64 v4; // r9
  unsigned __int64 v5; // r11
  __int64 v6; // r10
  __int64 v9; // rcx
  int v10; // edx
  signed __int64 result; // rax

  v3 = a1 + 16;
  v4 = 0LL;
  v5 = (unsigned __int64)&a1[16 * (unsigned __int64)(unsigned int)ExpFreeListCount + 16];
  v6 = 0LL;
  if ( (unsigned __int64)(a1 + 16) < v5 )
  {
    do
    {
      v9 = (int)v3[6];
      v10 = v3[7];
      if ( (int)v9 > v10 )
        v10 = v3[6];
      v4 += v9;
      v3 += 16;
      v6 += (unsigned int)v10;
    }
    while ( (unsigned __int64)v3 < v5 );
    if ( v4 < 0 )
    {
      v4 = 0LL;
    }
    else if ( v4 > 0xFFFFFFFFLL )
    {
      v4 = 0xFFFFFFFFLL;
    }
    if ( v6 > 0xFFFFFFFFLL )
      v6 = 0xFFFFFFFFLL;
  }
  if ( v4 > (__int64)((255 * ((unsigned __int64)*a1 >> 2)) >> 8) )
    v4 = (255 * ((unsigned __int64)*a1 >> 2)) >> 8;
  result = v4;
  if ( v6 <= v4 )
    result = v6;
  if ( a2 )
    *a2 = v4;
  if ( a3 )
    *a3 = result;
  return result;
}
