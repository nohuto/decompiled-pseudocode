/*
 * XREFs of sub_18013D8C0 @ 0x18013D8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_18006481C @ 0x18006481C (sub_18006481C.c)
 *     sub_18013D280 @ 0x18013D280 (sub_18013D280.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18013D8C0(__int64 a1, _WORD *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  int v6; // eax

  v4 = 0;
  v5 = sub_180055F40(0x10uLL);
  if ( v5 )
  {
    *v5 = off_18014B3B0;
    sub_18006481C(v5 + 1, a2);
    *v5 = off_18014B3C0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = sub_18013D280(a1 - 8, (__int64)v5);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
