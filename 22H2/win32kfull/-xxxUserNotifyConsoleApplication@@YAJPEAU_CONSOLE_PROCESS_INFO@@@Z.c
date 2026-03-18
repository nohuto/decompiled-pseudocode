/*
 * XREFs of ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00E3594
 * Callers:
 *     xxxConsoleControl @ 0x1C00E3258 (xxxConsoleControl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C004C704 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     LockProcessByClientId @ 0x1C004FEE0 (LockProcessByClientId.c)
 *     ?ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z @ 0x1C00E52A0 (-ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z @ 0x1C0118748 (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4_PROCESS_INIT_HINT@@@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1C01B2E14 (--1CLockProcessByPid@@QEAA@XZ.c)
 */

__int64 __fastcall xxxUserNotifyConsoleApplication(struct _CONSOLE_PROCESS_INFO *a1)
{
  int inited; // edi
  char v4; // bl
  struct _EPROCESS *v5; // rdx
  bool v6; // bl
  bool v7; // si
  char ProcessId; // al
  int v9; // r8d
  int v10; // edx
  PEPROCESS Process; // [rsp+50h] [rbp-18h] BYREF
  int v12; // [rsp+58h] [rbp-10h]

  if ( !gptiRit )
    return 3221225506LL;
  inited = LockProcessByClientId((void *)*(int *)a1, &Process);
  v12 = inited;
  if ( Process )
  {
    inited = xxxSetProcessInitState(Process, 0LL);
    if ( inited < 0 )
    {
      v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        ProcessId = (unsigned __int8)PsGetProcessId(Process);
        LOBYTE(v9) = v7;
        LOBYTE(v10) = v6;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v9,
          (_DWORD)gFullLog,
          3,
          2,
          12,
          (__int64)&WPP_da10ed9f41f835a692699b91a3623186_Traceguids,
          ProcessId);
      }
    }
    else if ( (*((_DWORD *)a1 + 1) & 1) != 0 )
    {
      ForegroundLaunch::ApplyForegroundPolicyConsole(Process, v5);
    }
    if ( Process )
      ObfDereferenceObject(Process);
  }
  else
  {
    v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_AND_TRACE_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v4,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        3u,
        2u,
        0xBu,
        (__int64)&WPP_da10ed9f41f835a692699b91a3623186_Traceguids,
        *(_DWORD *)a1,
        inited);
      inited = v12;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)&Process);
  }
  return (unsigned int)inited;
}
