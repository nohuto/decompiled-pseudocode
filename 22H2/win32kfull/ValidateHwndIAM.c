/*
 * XREFs of ValidateHwndIAM @ 0x1C00270A4
 * Callers:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0028CFC (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     NtUserSetWindowPos @ 0x1C0028F90 (NtUserSetWindowPos.c)
 *     NtUserSetBridgeWindowChild @ 0x1C01DA590 (NtUserSetBridgeWindowChild.c)
 *     NtUserShellMigrateWindow @ 0x1C01DDCB0 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01DE090 (NtUserShellSetWindowPos.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall ValidateHwndIAM(__int64 a1)
{
  __int64 result; // rax
  struct tagTHREADINFO *v3; // rdi
  int v4; // ebx

  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    return ValidateHwnd(a1);
  v3 = PtiCurrentShared();
  v4 = *((_DWORD *)v3 + 387);
  *((_DWORD *)v3 + 387) = 0;
  result = ValidateHwnd(a1);
  *((_DWORD *)v3 + 387) = v4;
  return result;
}
