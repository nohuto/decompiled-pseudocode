/*
 * XREFs of xxxUpdateWindows @ 0x1C0217D90
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     NtUserUpdateWindows @ 0x1C01E0EA0 (NtUserUpdateWindows.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C014A486 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall xxxUpdateWindows(struct tagWND *a1, HRGN a2)
{
  __int64 v4; // rcx

  if ( !*((_QWORD *)PtiCurrentShared((__int64)a1) + 57)
    || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v4) + 57) + 8LL) + 64LL) & 1) == 0 )
  {
    xxxUpdateThreadsWindows(gptiCurrent, a1, a2);
  }
  return 1LL;
}
