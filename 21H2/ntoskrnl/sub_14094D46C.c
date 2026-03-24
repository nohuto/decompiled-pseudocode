/*
 * XREFs of sub_14094D46C @ 0x14094D46C
 * Callers:
 *     sub_1405B30A0 @ 0x1405B30A0 (sub_1405B30A0.c)
 *     sub_14094D610 @ 0x14094D610 (sub_14094D610.c)
 *     ExpGenuinePolicyPostProcess @ 0x14094D9C0 (ExpGenuinePolicyPostProcess.c)
 *     sub_14094DE40 @ 0x14094DE40 (sub_14094DE40.c)
 *     sub_14094DEC0 @ 0x14094DEC0 (sub_14094DEC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14094D46C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
