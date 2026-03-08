/*
 * XREFs of ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01A5768
 * Callers:
 *     ConvertPointCoordinates @ 0x1C01A66F4 (ConvertPointCoordinates.c)
 * Callees:
 *     LongLongToLong @ 0x1C0013C0C (LongLongToLong.c)
 */

__int64 __fastcall ConvertCoordinatesWithRounding(int a1, int a2, int a3, int a4, int a5, LONG *plResult)
{
  int v6; // edx
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // rdx
  unsigned int v11; // r9d
  int v12; // r11d

  v6 = a2 - a1;
  v7 = (a4 - a3) * (__int64)(a5 - a1);
  v8 = 2 * v7;
  if ( v7 <= 0 )
    v9 = v8 - v6;
  else
    v9 = v6 + v8;
  if ( !LongLongToLong(a3 + v9 / (2LL * v6), plResult) )
  {
    v11 = 1;
    if ( *v10 >= v12 )
      *v10 = v12 - 1;
  }
  return v11;
}
