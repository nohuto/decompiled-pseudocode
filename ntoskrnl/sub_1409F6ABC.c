/*
 * XREFs of sub_1409F6ABC @ 0x1409F6ABC
 * Callers:
 *     sub_140607040 @ 0x140607040 (sub_140607040.c)
 *     sub_1409F6C60 @ 0x1409F6C60 (sub_1409F6C60.c)
 *     ExpGenuinePolicyPostProcess @ 0x1409F6FF0 (ExpGenuinePolicyPostProcess.c)
 *     sub_1409F7450 @ 0x1409F7450 (sub_1409F7450.c)
 *     sub_1409F74D0 @ 0x1409F74D0 (sub_1409F74D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409F6ABC(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 4;
  if ( a3 < 4 )
    return 3221225507LL;
  if ( a1 )
    *a1 = 4;
  if ( a2 )
    *a2 = a5;
  return result;
}
