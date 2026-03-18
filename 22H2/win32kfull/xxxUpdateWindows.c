/*
 * XREFs of xxxUpdateWindows @ 0x1C02151D0
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     NtUserUpdateWindows @ 0x1C01DFDF0 (NtUserUpdateWindows.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01571A6 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall xxxUpdateWindows(struct tagWND *a1, HRGN a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( !*((_QWORD *)PtiCurrentShared((__int64)a1, (__int64)a2, a3, a4) + 57)
    || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v7, v6, v8, v9) + 57) + 8LL) + 64LL) & 1) == 0 )
  {
    xxxUpdateThreadsWindows(gptiCurrent, a1, a2);
  }
  return 1LL;
}
