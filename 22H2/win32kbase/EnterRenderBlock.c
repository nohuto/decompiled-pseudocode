/*
 * XREFs of EnterRenderBlock @ 0x1C00C3E70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 */

__int64 EnterRenderBlock()
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    ++*(_DWORD *)(result + 332);
  return result;
}
