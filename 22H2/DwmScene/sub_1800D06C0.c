/*
 * XREFs of sub_1800D06C0 @ 0x1800D06C0
 * Callers:
 *     sub_18006B5F0 @ 0x18006B5F0 (sub_18006B5F0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D06C0(__int64 a1)
{
  char result; // al

  result = *(_BYTE *)(a1 + 184);
  if ( result )
    return sub_1800D0660(a1, *(_QWORD *)(a1 + 192));
  return result;
}
