__int64 __fastcall PfPrefetchRequestVerifyPath(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v4; // r8d
  unsigned int *v6; // r11

  v4 = a3[2];
  if ( v4 >= 0x7FFF )
    return 10000LL;
  if ( !v4 )
    return 10500LL;
  if ( !*a3 )
    return 10750LL;
  if ( (unsigned __int8)PfRequestRangeCheck(a2 + 48, *a3, 2 * v4 + 2, 2, 1) )
    return *(_WORD *)(a1 + *v6 + 2LL * v6[2]) != 0 ? 0x2EE0 : 0;
  return 11000LL;
}
