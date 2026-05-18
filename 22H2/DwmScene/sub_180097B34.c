/*
 * XREFs of sub_180097B34 @ 0x180097B34
 * Callers:
 *     sub_1800C1360 @ 0x1800C1360 (sub_1800C1360.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180097B34(unsigned __int64 a1, char a2)
{
  int v2; // eax

  if ( a1 < 0x20 )
  {
    v2 = 1 << a1;
    if ( a2 )
      dword_18020C618 |= v2;
    else
      dword_18020C618 &= ~v2;
  }
}
