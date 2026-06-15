/*
 * XREFs of sub_18004AA1C @ 0x18004AA1C
 * Callers:
 *     sub_18004A848 @ 0x18004A848 (sub_18004A848.c)
 * Callees:
 *     sub_18004AE9C @ 0x18004AE9C (sub_18004AE9C.c)
 *     sub_18004BC54 @ 0x18004BC54 (sub_18004BC54.c)
 *     sub_18011A840 @ 0x18011A840 (sub_18011A840.c)
 */

__int64 __fastcall sub_18004AA1C(__int64 a1, __int64 a2, __int128 *a3, unsigned int a4, int a5)
{
  int v9; // ebx
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF

  v11 = *a3;
  v9 = sub_18004AE9C(a1, a4, a2, (unsigned int)&v11, 0, (__int64)&v12, 0LL, 0LL, 0LL);
  if ( v9 >= 0 && a5 )
  {
    v12 = (unsigned int)(int)((double)(int)v12 * 10000000.0 / (double)*(int *)(a2 + 4) + 0.5);
    return (unsigned int)sub_18004BC54(a1, &v12);
  }
  else if ( v9 == -2004287480 )
  {
    v11 = *a3;
    if ( (unsigned __int8)sub_18011A840(a1, a4, &v11, a2) )
      return (unsigned int)-2005139389;
  }
  return (unsigned int)v9;
}
