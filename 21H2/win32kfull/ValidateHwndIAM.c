/*
 * XREFs of ValidateHwndIAM @ 0x1C0022C00
 * Callers:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C002583C (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     NtUserSetBridgeWindowChild @ 0x1C01FC5D0 (NtUserSetBridgeWindowChild.c)
 *     NtUserShellMigrateWindow @ 0x1C01FEC10 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01FEFF0 (NtUserShellSetWindowPos.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall ValidateHwndIAM(__int64 a1)
{
  __int64 result; // rax
  __int64 ThreadWin32Thread; // rdi
  int v4; // ebx

  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    return ValidateHwnd(a1);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v4 = *(_DWORD *)(ThreadWin32Thread + 1508);
  *(_DWORD *)(ThreadWin32Thread + 1508) = 0;
  result = ValidateHwnd(a1);
  *(_DWORD *)(ThreadWin32Thread + 1508) = v4;
  return result;
}
