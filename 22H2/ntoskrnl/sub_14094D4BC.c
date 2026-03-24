/*
 * XREFs of sub_14094D4BC @ 0x14094D4BC
 * Callers:
 *     sub_1405B2FE0 @ 0x1405B2FE0 (sub_1405B2FE0.c)
 *     sub_14094D660 @ 0x14094D660 (sub_14094D660.c)
 *     ExpGenuinePolicyPostProcess @ 0x14094DA10 (ExpGenuinePolicyPostProcess.c)
 *     sub_14094DE90 @ 0x14094DE90 (sub_14094DE90.c)
 *     sub_14094DF10 @ 0x14094DF10 (sub_14094DF10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14094D4BC(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
