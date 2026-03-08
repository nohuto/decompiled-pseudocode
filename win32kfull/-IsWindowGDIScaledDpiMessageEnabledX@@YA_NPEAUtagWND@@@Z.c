/*
 * XREFs of ?IsWindowGDIScaledDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C0222404
 * Callers:
 *     NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C01D6E80 (NtUserIsWindowGDIScaledDpiMessageEnabled.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

char __fastcall IsWindowGDIScaledDpiMessageEnabledX(struct tagWND *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  char v5; // dl

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    return 0;
  if ( !*((_QWORD *)PtiCurrentShared(v2) + 57) )
    return 0;
  v4 = PtiCurrentShared(v3);
  v5 = 1;
  if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)v4 + 57) + 8LL) + 64LL) & 1) == 0
    || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) != 0x40000000
    || (*((_DWORD *)a1 + 80) & 0x100000) == 0 )
  {
    return 0;
  }
  return v5;
}
