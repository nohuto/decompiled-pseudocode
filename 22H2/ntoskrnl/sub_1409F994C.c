/*
 * XREFs of sub_1409F994C @ 0x1409F994C
 * Callers:
 *     sub_140609490 @ 0x140609490 (sub_140609490.c)
 *     sub_1409F9AF0 @ 0x1409F9AF0 (sub_1409F9AF0.c)
 *     ExpGenuinePolicyPostProcess @ 0x1409F9E80 (ExpGenuinePolicyPostProcess.c)
 *     sub_1409FA2E0 @ 0x1409FA2E0 (sub_1409FA2E0.c)
 *     sub_1409FA360 @ 0x1409FA360 (sub_1409FA360.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409F994C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
