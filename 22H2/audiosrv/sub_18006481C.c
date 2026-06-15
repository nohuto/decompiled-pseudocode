/*
 * XREFs of sub_18006481C @ 0x18006481C
 * Callers:
 *     sub_18006473C @ 0x18006473C (sub_18006473C.c)
 *     sub_1801123CC @ 0x1801123CC (sub_1801123CC.c)
 *     sub_180139E98 @ 0x180139E98 (sub_180139E98.c)
 *     sub_18013D810 @ 0x18013D810 (sub_18013D810.c)
 *     sub_18013D8C0 @ 0x18013D8C0 (sub_18013D8C0.c)
 *     sub_18013D970 @ 0x18013D970 (sub_18013D970.c)
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_180064888 @ 0x180064888 (sub_180064888.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006481C(__int64 *a1, _WORD *a2)
{
  char v4; // al
  int v5; // r8d
  __int64 v6; // rax

  sub_180003E08(a1, (__int64)&qword_18019F818);
  v4 = sub_180064888(a1, a2);
  v5 = 0;
  if ( !v4 )
  {
    if ( a2 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( a2[v6] );
      v5 = v6;
    }
    sub_18002BB70(a1, a2, v5);
  }
  return a1;
}
