/*
 * XREFs of sub_14094D63C @ 0x14094D63C
 * Callers:
 *     sub_1405B32D0 @ 0x1405B32D0 (sub_1405B32D0.c)
 *     sub_14094D7E0 @ 0x14094D7E0 (sub_14094D7E0.c)
 *     ExpGenuinePolicyPostProcess @ 0x14094DB90 (ExpGenuinePolicyPostProcess.c)
 *     sub_14094E010 @ 0x14094E010 (sub_14094E010.c)
 *     sub_14094E090 @ 0x14094E090 (sub_14094E090.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14094D63C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
