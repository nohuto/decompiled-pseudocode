/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00D7770
 * Callers:
 *     <none>
 * Callees:
 *     _UnregisterHotKey @ 0x1C00328F0 (_UnregisterHotKey.c)
 *     _RegisterHotKey @ 0x1C0032C74 (_RegisterHotKey.c)
 *     IAMThreadAccessGranted @ 0x1C0037FF4 (IAMThreadAccessGranted.c)
 *     IsShellProcess @ 0x1C003C638 (IsShellProcess.c)
 *     IsIAMThread @ 0x1C003CEF8 (IsIAMThread.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     IsMessageOnlyWindow @ 0x1C00D7730 (IsMessageOnlyWindow.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C00D7884 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, int a2)
{
  struct tagWND **v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  struct tagWND *v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v11; // rcx
  struct tagWND *v12; // r8
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v4 = *(struct tagWND ***)(gptiCurrent + 456LL);
  v6 = *(unsigned int *)(PsGetCurrentProcessWin32Process(a1) + 12);
  if ( (v6 & 0x88) != 0 || !IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v11 = 5LL;
    goto LABEL_13;
  }
  v7 = v4[41];
  if ( !a2 )
  {
    if ( !v7 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 328LL) == a1 && *((_QWORD *)v7 + 2) == gptiCurrent )
    {
      UnregisterHotKey((__int64)a1, 0xF060u);
      ShellWindowManagement::SetWindow((ShellWindowManagement *)v4, 0LL, v12);
      return 1LL;
    }
    goto LABEL_12;
  }
  if ( v7 )
  {
    v11 = 1242LL;
    goto LABEL_13;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
    goto LABEL_12;
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
    goto LABEL_12;
  LOBYTE(v8) = IsIAMThread(gptiCurrent);
  if ( !v8 )
    goto LABEL_12;
  LOBYTE(v9) = IsMessageOnlyWindow((__int64)a1);
  if ( v9 && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
  {
    ShellWindowManagement::SetWindow((ShellWindowManagement *)v4, a1, (struct tagWND *)v6);
    LODWORD(BugCheckParameter2) = 115;
    RegisterHotKey(v4[41], 0LL, 61536LL, 28673, BugCheckParameter2);
    return 1LL;
  }
  v11 = 87LL;
LABEL_13:
  UserSetLastError(v11, v5, v6);
  return 0LL;
}
