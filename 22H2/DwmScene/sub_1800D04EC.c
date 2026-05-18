/*
 * XREFs of sub_1800D04EC @ 0x1800D04EC
 * Callers:
 *     sub_180065F50 @ 0x180065F50 (sub_180065F50.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D04EC(__int64 a1)
{
  char result; // al

  result = *(_BYTE *)(a1 + 184);
  if ( result )
    return sub_1800D0464(a1, *(_QWORD *)(a1 + 192));
  return result;
}
