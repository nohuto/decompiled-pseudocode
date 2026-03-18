/*
 * XREFs of ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C007AA20
 * Callers:
 *     xxxConsoleControl @ 0x1C007A708 (xxxConsoleControl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     LockProcessByClientId @ 0x1C007AC20 (LockProcessByClientId.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqq @ 0x1C007AC8C (WPP_RECORDER_AND_TRACE_SF_sqq.c)
 *     CheckAllowForeground @ 0x1C007AD80 (CheckAllowForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUserNotifyConsoleApplication(struct _CONSOLE_PROCESS_INFO *a1)
{
  __int64 result; // rax
  int inited; // ebp
  __int64 v4; // rcx
  char v5; // bl
  __int64 CurrentProcessWin32Process; // rdi
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  bool v10; // si
  char ProcessWin32Process; // al
  int v12; // r8d
  const char *v13; // rcx
  int v14; // edx
  int v15; // [rsp+20h] [rbp-58h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  Object = 0LL;
  if ( !gptiRit )
    return 3221225506LL;
  result = LockProcessByClientId(*(int *)a1, &Object);
  if ( (int)result >= 0 )
  {
    inited = xxxSetProcessInitState(Object, 0LL);
    if ( inited >= 0 )
    {
      v4 = *((unsigned int *)a1 + 1);
      v5 = 1;
      if ( (v4 & 1) != 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
        if ( (unsigned int)CheckAllowForeground(Object) )
        {
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40) == 0 )
            SetAppStarting(CurrentProcessWin32Process);
          gdwPUDFlags |= 0x8000000u;
          LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v7,
              v8,
              v9,
              4,
              2,
              11,
              (__int64)&WPP_d6b06c2d77c33863c5663f3e1e5963a9_Traceguids);
          }
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x100u;
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v5 = 0;
        }
        v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          ProcessWin32Process = PsGetProcessWin32Process(Object);
          v13 = "set";
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x100) == 0 )
            v13 = "NOT";
          v14 = 12;
          LOBYTE(v12) = v10;
          LOBYTE(v14) = v5;
          WPP_RECORDER_AND_TRACE_SF_sqq(
            WPP_GLOBAL_Control->AttachedDevice,
            v14,
            v12,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v15,
            2,
            12,
            (__int64)&WPP_d6b06c2d77c33863c5663f3e1e5963a9_Traceguids,
            (__int64)v13,
            CurrentProcessWin32Process,
            ProcessWin32Process);
        }
      }
    }
    ObfDereferenceObject(Object);
    return (unsigned int)inited;
  }
  return result;
}
