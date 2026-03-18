/*
 * XREFs of UserIsWindowGdiScaled @ 0x1C0094DF0
 * Callers:
 *     DxgkEngGetWindowGdiDpiScalingFactor @ 0x1C0176BB0 (DxgkEngGetWindowGdiDpiScalingFactor.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ValidateHwndEx @ 0x1C002CB00 (ValidateHwndEx.c)
 */

__int64 __fastcall UserIsWindowGdiScaled(__int64 a1, _WORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    return 0LL;
  v4 = ValidateHwndEx(a1, 1LL, 0LL);
  if ( !v4 )
    return 0LL;
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    return 0LL;
  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
    return 0LL;
  if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) == 0 )
    return 0LL;
  v5 = *(_QWORD *)(v4 + 40);
  if ( (*(_DWORD *)(v5 + 288) & 0x4000000F) != 0x40000000 )
    return 0LL;
  result = 1LL;
  *a2 = *(_WORD *)(v5 + 284);
  return result;
}
