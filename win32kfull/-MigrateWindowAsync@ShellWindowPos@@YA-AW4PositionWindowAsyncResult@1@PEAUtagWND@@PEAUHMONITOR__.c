/*
 * XREFs of ?MigrateWindowAsync@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHMONITOR__@@K@Z @ 0x1C021FE00
 * Callers:
 *     NtUserShellMigrateWindow @ 0x1C01DED60 (NtUserShellMigrateWindow.c)
 * Callees:
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01B6860 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 */

__int64 __fastcall ShellWindowPos::MigrateWindowAsync(struct tagTHREADINFO **a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  void *v7; // rbx

  v6 = Win32AllocPoolZInit(16LL, 1836543317LL);
  v7 = (void *)v6;
  if ( !v6 )
    return 1LL;
  *(_QWORD *)v6 = a2;
  *(_DWORD *)(v6 + 8) = a3;
  if ( !PostEventMessageWindow(a1, 0x1Bu, 1uLL, v6) )
  {
    Win32FreePool(v7);
    return 1LL;
  }
  return 0LL;
}
