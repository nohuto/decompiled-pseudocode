/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00975C4
 * Callers:
 *     NtUserRegisterWindowArrangementCallout @ 0x1C0097500 (NtUserRegisterWindowArrangementCallout.c)
 * Callees:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C003AB6C (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     IsMessageOnlyWindow @ 0x1C00967C0 (IsMessageOnlyWindow.c)
 *     IsIAMThread @ 0x1C00967E0 (IsIAMThread.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C0096800 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 *     IsShellProcess @ 0x1C009C278 (IsShellProcess.c)
 *     ?_UnregisterHotKey@@YAHPEAUtagWND@@H@Z @ 0x1C00B632C (-_UnregisterHotKey@@YAHPEAUtagWND@@H@Z.c)
 *     Feature_ReportShellHotKey__private_IsEnabledDeviceUsage @ 0x1C012C740 (Feature_ReportShellHotKey__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, int a2)
{
  struct tagWND **v4; // rsi
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v6; // rcx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  struct tagWND *v10; // r8
  __int64 v11; // rcx
  int IsEnabledDeviceUsage; // eax
  __int16 v13; // r9
  struct tagWND *v14; // r8

  v4 = *(struct tagWND ***)(gptiCurrent + 456LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 || !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    goto LABEL_23;
  v6 = v4[40];
  if ( !a2 )
  {
    if ( !v6 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 320LL) == a1 && *((_QWORD *)v6 + 2) == gptiCurrent )
    {
      _UnregisterHotKey(a1, 61536);
      ShellWindowManagement::SetWindow((ShellWindowManagement *)v4, 0LL, v14);
      return 1LL;
    }
    goto LABEL_23;
  }
  if ( !v6 )
  {
    if ( *((_QWORD *)a1 + 2) == gptiCurrent )
    {
      if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
      {
        LOBYTE(v8) = IsIAMThread(gptiCurrent);
        if ( v8 )
        {
          LOBYTE(v9) = IsMessageOnlyWindow((__int64)a1);
          if ( !v9 || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
          {
            v7 = 87;
            goto LABEL_24;
          }
          ShellWindowManagement::SetWindow((ShellWindowManagement *)v4, a1, v10);
          IsEnabledDeviceUsage = Feature_ReportShellHotKey__private_IsEnabledDeviceUsage(v11);
          if ( IsEnabledDeviceUsage )
          {
            IsEnabledDeviceUsage = 1;
            v13 = 24577;
          }
          else
          {
            v13 = 28673;
          }
          _RegisterHotKey(v4[40], 0LL, IsEnabledDeviceUsage != 0 ? -17 : 61536, v13, 0x73u, 0LL);
          return 1LL;
        }
      }
    }
LABEL_23:
    v7 = 5;
    goto LABEL_24;
  }
  v7 = 1242;
LABEL_24:
  UserSetLastError(v7);
  return 0LL;
}
