/*
 * XREFs of ValidateHwndIAM @ 0x1C009A070
 * Callers:
 *     NtUserSetWindowPos @ 0x1C0067A30 (NtUserSetWindowPos.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C009A010 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     NtUserSetBridgeWindowChild @ 0x1C01DB5C0 (NtUserSetBridgeWindowChild.c)
 *     NtUserShellMigrateWindow @ 0x1C01DED60 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01DF140 (NtUserShellSetWindowPos.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 */

__int64 __fastcall ValidateHwndIAM(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  struct tagTHREADINFO *v4; // rdi
  int v5; // ebx

  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    return ValidateHwnd(a1);
  v4 = PtiCurrentShared(v2);
  v5 = *((_DWORD *)v4 + 387);
  *((_DWORD *)v4 + 387) = 0;
  result = ValidateHwnd(a1);
  *((_DWORD *)v4 + 387) = v5;
  return result;
}
