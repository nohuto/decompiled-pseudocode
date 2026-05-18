/*
 * XREFs of sub_180089BBC @ 0x180089BBC
 * Callers:
 *     sub_180089ACC @ 0x180089ACC (sub_180089ACC.c)
 *     sub_1800C609C @ 0x1800C609C (sub_1800C609C.c)
 *     sub_18010B52C @ 0x18010B52C (sub_18010B52C.c)
 *     sub_18011B81C @ 0x18011B81C (sub_18011B81C.c)
 * Callees:
 *     sub_18001D118 @ 0x18001D118 (sub_18001D118.c)
 */

__int64 __fastcall sub_180089BBC(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // r11
  _QWORD *v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // r10
  unsigned __int64 v9; // rcx

  v4 = (a1[1] - *a1) >> 3;
  v5 = sub_18001D118((__int64)a1, a2);
  v6 = (_QWORD *)*a1;
  v7 = v5;
  v8 = 0LL;
  v9 = (unsigned __int64)(a1[1] - *a1 + 7) >> 3;
  if ( *a1 > (unsigned __int64)a1[1] )
    v9 = 0LL;
  if ( v9 )
  {
    do
    {
      *v7++ = *v6++;
      ++v8;
    }
    while ( v8 != v9 );
  }
  return sub_18001CCB4(a1, (__int64)v5, v4, a2);
}
