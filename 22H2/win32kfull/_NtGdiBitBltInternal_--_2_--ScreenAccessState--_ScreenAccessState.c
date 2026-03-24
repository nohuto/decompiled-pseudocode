/*
 * XREFs of _NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState @ 0x1C0089AAC
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

void __fastcall NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState(_BYTE *a1)
{
  __int64 ThreadWin32Thread; // rax

  if ( *a1 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_DWORD *)(ThreadWin32Thread + 328) &= ~0x10u;
  }
}
