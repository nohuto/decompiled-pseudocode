/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00F1804
 * Callers:
 *     NtUserRegisterWindowArrangementCallout @ 0x1C00F1740 (NtUserRegisterWindowArrangementCallout.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsShellProcess @ 0x1C007B10C (IsShellProcess.c)
 *     _UnregisterHotKey @ 0x1C009DD7C (_UnregisterHotKey.c)
 *     _RegisterHotKey @ 0x1C009E114 (_RegisterHotKey.c)
 *     IsIAMThread @ 0x1C00A9A2C (IsIAMThread.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C00F1A30 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     IsMessageOnlyWindow @ 0x1C00F1ED0 (IsMessageOnlyWindow.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, int a2)
{
  struct tagWND **v4; // rsi
  __int64 v5; // rdx
  struct tagWND *v6; // rcx
  int v7; // eax
  struct tagWND *v8; // r8
  __int64 v10; // rcx
  struct tagWND *v11; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v4 = *(struct tagWND ***)(gptiCurrent + 456LL);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 12) & 0x88) != 0 || !IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v10 = 5LL;
    goto LABEL_13;
  }
  v6 = v4[40];
  if ( !a2 )
  {
    if ( !v6 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 320LL) == a1 && *((_QWORD *)v6 + 2) == gptiCurrent )
    {
      UnregisterHotKey((__int64)a1, 0xF060u);
      ShellWindowManagement::SetWindow((ShellWindowManagement *)v4, 0LL, v11);
      return 1LL;
    }
    goto LABEL_12;
  }
  if ( v6 )
  {
    v10 = 1242LL;
    goto LABEL_13;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
    goto LABEL_12;
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
    goto LABEL_12;
  LOBYTE(v7) = IsIAMThread(gptiCurrent);
  if ( !v7 )
    goto LABEL_12;
  if ( (unsigned int)IsMessageOnlyWindow(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
  {
    ShellWindowManagement::SetWindow((ShellWindowManagement *)v4, a1, v8);
    LODWORD(BugCheckParameter2) = 115;
    RegisterHotKey(v4[40], 0LL, 61536, 28673, BugCheckParameter2);
    return 1LL;
  }
  v10 = 87LL;
LABEL_13:
  UserSetLastError(v10, v5);
  return 0LL;
}
