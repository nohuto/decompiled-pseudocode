/*
 * XREFs of ?bIncludeSprites@SURFACE@@SAHXZ @ 0x1C00D3C20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 */

__int64 SURFACE::bIncludeSprites(void)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    return (*(_DWORD *)(result + 328) >> 1) & 1;
  return result;
}
