/*
 * XREFs of IsIsolatedWin32Process @ 0x1C01544B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsIsolatedWin32Process(__int64 a1)
{
  return (*(_DWORD *)(a1 + 812) >> 29) & 1;
}
