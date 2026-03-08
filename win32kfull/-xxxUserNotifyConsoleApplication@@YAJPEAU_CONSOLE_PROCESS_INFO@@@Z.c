/*
 * XREFs of ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C003C924
 * Callers:
 *     xxxConsoleControl @ 0x1C003C5E8 (xxxConsoleControl.c)
 * Callees:
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z @ 0x1C003E988 (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z.c)
 *     ?ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z @ 0x1C003F218 (-ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     LockProcessByClientId @ 0x1C0099860 (LockProcessByClientId.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C009B8A4 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1C01B3FD4 (--1CLockProcessByPid@@QEAA@XZ.c)
 */

__int64 __fastcall xxxUserNotifyConsoleApplication(
        struct _CONSOLE_PROCESS_INFO *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int inited; // edi
  int v7; // r8d
  bool v8; // bl
  int v9; // edx
  struct _EPROCESS *v10; // rdx
  bool v11; // bl
  bool v12; // si
  char ProcessId; // al
  int v14; // r8d
  int v15; // edx
  PEPROCESS Process; // [rsp+50h] [rbp-18h] BYREF
  int v17; // [rsp+58h] [rbp-10h]

  if ( !gptiRit )
    return 3221225506LL;
  inited = LockProcessByClientId(*(int *)a1, &Process, a3, a4);
  v17 = inited;
  if ( Process )
  {
    inited = xxxSetProcessInitState(Process, 0LL);
    if ( inited < 0 )
    {
      v11 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        ProcessId = (unsigned __int8)PsGetProcessId(Process);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v14,
          (_DWORD)gFullLog,
          3,
          2,
          12,
          (__int64)&WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids,
          ProcessId);
      }
    }
    else if ( (*((_DWORD *)a1 + 1) & 1) != 0 )
    {
      ForegroundLaunch::ApplyForegroundPolicyConsole(Process, v10);
    }
    if ( Process )
      ObfDereferenceObject(Process);
  }
  else
  {
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 11;
      LOBYTE(v9) = v8;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v7,
        (_DWORD)gFullLog,
        3,
        2,
        11,
        (__int64)&WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids,
        *(_DWORD *)a1,
        inited);
      inited = v17;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)&Process);
  }
  return (unsigned int)inited;
}
