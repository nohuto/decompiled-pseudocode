/*
 * XREFs of GreDecNonRBLockCount @ 0x1C0098250
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 */

__int64 GreDecNonRBLockCount()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    --*(_DWORD *)(result + 108);
  return result;
}
