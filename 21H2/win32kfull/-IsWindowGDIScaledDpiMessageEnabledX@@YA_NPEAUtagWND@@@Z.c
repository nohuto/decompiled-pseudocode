/*
 * XREFs of ?IsWindowGDIScaledDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C02382E8
 * Callers:
 *     NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C01F8B20 (NtUserIsWindowGDIScaledDpiMessageEnabled.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

char __fastcall IsWindowGDIScaledDpiMessageEnabledX(struct tagWND *a1)
{
  __int64 ThreadWin32Thread; // rax
  char v3; // dl

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    return 0;
  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
    return 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = 1;
  if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 456) + 8LL) + 64LL) & 1) == 0
    || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0x4000000F) != 0x40000000
    || (*((_DWORD *)a1 + 80) & 0x100000) == 0 )
  {
    return 0;
  }
  return v3;
}
