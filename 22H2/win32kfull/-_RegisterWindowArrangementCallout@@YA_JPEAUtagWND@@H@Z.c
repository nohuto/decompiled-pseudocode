/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C003AFE4
 * Callers:
 *     NtUserRegisterWindowArrangementCallout @ 0x1C003AF20 (NtUserRegisterWindowArrangementCallout.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C003B148 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     IsIAMThread @ 0x1C003B1AC (IsIAMThread.c)
 *     IsMessageOnlyWindow @ 0x1C00424C0 (IsMessageOnlyWindow.c)
 *     ?_UnregisterHotKey@@YAHPEAUtagWND@@H@Z @ 0x1C0042BDC (-_UnregisterHotKey@@YAHPEAUtagWND@@H@Z.c)
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0043264 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     IsShellProcess @ 0x1C0066FBC (IsShellProcess.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, int a2)
{
  struct tagWND **v4; // rsi
  __int64 CurrentProcessWin32Process; // rax
  int v6; // eax
  struct tagWND *v7; // rcx
  __int64 v8; // rcx
  struct tagWND *v9; // r8
  struct tagWND *v10; // r8

  v4 = *(struct tagWND ***)(gptiCurrent + 456LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 )
    goto LABEL_20;
  LOBYTE(v6) = IAMThreadAccessGranted(gptiCurrent);
  if ( !v6 )
    goto LABEL_20;
  v7 = v4[41];
  if ( !a2 )
  {
    if ( !v7 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 328LL) == a1 && *((_QWORD *)v7 + 2) == gptiCurrent )
    {
      _UnregisterHotKey(a1, 61536);
      ShellWindowManagement::SetWindow((ShellWindowManagement *)v4, 0LL, v10);
      return 1LL;
    }
    goto LABEL_20;
  }
  if ( !v7 )
  {
    if ( *((_QWORD *)a1 + 2) == gptiCurrent
      && (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL))
      && (unsigned int)IsIAMThread(gptiCurrent) )
    {
      if ( !(unsigned int)IsMessageOnlyWindow(a1) || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      {
        v8 = 87LL;
        goto LABEL_21;
      }
      ShellWindowManagement::SetWindow((ShellWindowManagement *)v4, a1, v9);
      _RegisterHotKey(v4[41], 0LL, -17, 0x6001u, 0x73u, 0LL);
      return 1LL;
    }
LABEL_20:
    v8 = 5LL;
    goto LABEL_21;
  }
  v8 = 1242LL;
LABEL_21:
  UserSetLastError(v8);
  return 0LL;
}
