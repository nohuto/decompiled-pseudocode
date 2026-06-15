/*
 * XREFs of sub_180061BA0 @ 0x180061BA0
 * Callers:
 *     sub_18000319C @ 0x18000319C (sub_18000319C.c)
 *     ServiceMain @ 0x180061950 (ServiceMain.c)
 *     sub_18006E0A0 @ 0x18006E0A0 (sub_18006E0A0.c)
 *     sub_1800C37C0 @ 0x1800C37C0 (sub_1800C37C0.c)
 *     sub_1800C7B00 @ 0x1800C7B00 (sub_1800C7B00.c)
 *     sub_1800C7CB0 @ 0x1800C7CB0 (sub_1800C7CB0.c)
 *     sub_1800C7DB0 @ 0x1800C7DB0 (sub_1800C7DB0.c)
 *     sub_1800C7E70 @ 0x1800C7E70 (sub_1800C7E70.c)
 *     sub_1800C8320 @ 0x1800C8320 (sub_1800C8320.c)
 *     sub_1800C92EC @ 0x1800C92EC (sub_1800C92EC.c)
 *     sub_1800CB980 @ 0x1800CB980 (sub_1800CB980.c)
 *     sub_1800CBBF0 @ 0x1800CBBF0 (sub_1800CBBF0.c)
 *     sub_1800CBDD0 @ 0x1800CBDD0 (sub_1800CBDD0.c)
 *     sub_1800D2960 @ 0x1800D2960 (sub_1800D2960.c)
 *     sub_1800E1B64 @ 0x1800E1B64 (sub_1800E1B64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180061BA0(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  signed int v4; // r9d
  unsigned __int64 v5; // r10
  __int64 v6; // r8
  __int16 v7; // ax
  _WORD *v8; // rax

  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    if ( v3 )
    {
      v5 = 2147483646 - v3;
      v6 = a3 - (_QWORD)a1;
      do
      {
        if ( !(v5 + v3) )
          break;
        v7 = *(_WORD *)((char *)a1 + v6);
        if ( !v7 )
          break;
        *a1++ = v7;
        --v3;
      }
      while ( v3 );
    }
    v8 = a1 - 1;
    if ( v3 )
      v8 = a1;
    v4 = v3 == 0 ? 0x8007007A : 0;
    *v8 = 0;
  }
  return (unsigned int)v4;
}
