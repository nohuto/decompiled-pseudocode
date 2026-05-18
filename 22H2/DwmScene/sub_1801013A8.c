/*
 * XREFs of sub_1801013A8 @ 0x1801013A8
 * Callers:
 *     sub_180100C74 @ 0x180100C74 (sub_180100C74.c)
 * Callees:
 *     sub_1801014A4 @ 0x1801014A4 (sub_1801014A4.c)
 */

__int64 __fastcall sub_1801013A8(void *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)sub_1801014A4(Src);
      --v4;
    }
    while ( v4 );
  }
  return sub_1801014A4(Src);
}
