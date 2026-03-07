__int64 __fastcall NtUserShellRegisterHotKey(__int64 a1, unsigned int a2, int a3, unsigned int a4, HWND a5)
{
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  int v12; // edx
  int v13; // r8d
  struct tagWND *v14; // rdi
  HWND v15; // rbx
  int v16; // ebx
  __int64 v17; // rcx
  int v19; // ecx
  char v20; // [rsp+70h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v20);
  if ( (a3 & 0xFFFF9FF0) != 0 )
  {
    UserSetLastError(1004);
    goto LABEL_11;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  v11 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( !(unsigned int)IsShellProcess(v11) )
  {
    LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v13,
        67,
        3,
        20,
        67,
        (__int64)&WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids);
    }
    v19 = 5;
    goto LABEL_25;
  }
  if ( a1 )
  {
    v14 = (struct tagWND *)ValidateHwnd(a1);
    if ( v14 )
      goto LABEL_7;
LABEL_11:
    v16 = 0;
    goto LABEL_9;
  }
  v14 = 0LL;
LABEL_7:
  v15 = a5;
  if ( a5 && !ValidateHwnd(a5) )
    goto LABEL_11;
  v16 = _RegisterHotKey(v14, 0LL, a2, a3 | 0x80u, a4, v15);
  if ( !v16 )
  {
    v19 = 5023;
LABEL_25:
    v16 = 0;
    UserSetLastError(v19);
  }
LABEL_9:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v20);
  UserSessionSwitchLeaveCrit(v17);
  return v16;
}
