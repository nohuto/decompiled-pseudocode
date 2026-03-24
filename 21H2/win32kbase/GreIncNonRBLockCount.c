/*
 * XREFs of GreIncNonRBLockCount @ 0x1C00974C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 */

__int64 GreIncNonRBLockCount()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    ++*(_DWORD *)(result + 108);
  return result;
}
