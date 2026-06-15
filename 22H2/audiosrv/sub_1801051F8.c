/*
 * XREFs of sub_1801051F8 @ 0x1801051F8
 * Callers:
 *     sub_180047720 @ 0x180047720 (sub_180047720.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180105764 @ 0x180105764 (sub_180105764.c)
 *     sub_18010742C @ 0x18010742C (sub_18010742C.c)
 *     sub_180108150 @ 0x180108150 (sub_180108150.c)
 *     sub_18010D978 @ 0x18010D978 (sub_18010D978.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1801051F8(__int64 *a1)
{
  LPVOID v2; // rax
  int v3; // edi
  __int64 v4; // rbx

  *a1 = 0LL;
  v2 = sub_18006A18C(0x180uLL);
  if ( v2 )
  {
    v4 = sub_180105764(v2);
    v3 = sub_18010D978(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        sub_18010742C(v4);
      *a1 = v4;
      v3 = 0;
    }
    if ( v4 )
      sub_180108150(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
