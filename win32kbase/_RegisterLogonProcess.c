/*
 * XREFs of _RegisterLogonProcess @ 0x1C008CF70
 * Callers:
 *     NtUserRegisterLogonProcess @ 0x1C008CD50 (NtUserRegisterLogonProcess.c)
 * Callees:
 *     CreateKernelEvent @ 0x1C002E010 (CreateKernelEvent.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0070430 (Win32FreePool.c)
 *     isInputVirtualizationEnabled @ 0x1C0079014 (isInputVirtualizationEnabled.c)
 *     ImSessionStart @ 0x1C008BE98 (ImSessionStart.c)
 *     IsPrivileged @ 0x1C008D1A0 (IsPrivileged.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage @ 0x1C00DC8F8 (Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage.c)
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x1C021DD3C (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 *     WmsgpConnect @ 0x1C0301300 (WmsgpConnect.c)
 */

_BOOL8 __fastcall RegisterLogonProcess(int a1, __int64 a2)
{
  __int64 v3; // rsi
  int v4; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // di
  __int64 KernelEvent; // rbx
  __int64 v21; // rax
  char *v22; // rcx
  unsigned int *v23; // rax
  char v24; // [rsp+40h] [rbp-28h]
  _QWORD v25[2]; // [rsp+50h] [rbp-18h] BYREF

  v3 = a1;
  if ( !gpidLogon )
  {
    if ( !(unsigned int)IsPrivileged(&psTcb) )
    {
      v4 = 5;
      goto LABEL_4;
    }
    if ( !isInputVirtualizationEnabled(v12, v11, v13, v14) || gpIVThread )
      goto LABEL_32;
    v19 = 1;
    KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
    v21 = CreateKernelEvent(SynchronizationEvent, 0);
    if ( KernelEvent )
    {
      if ( v21 )
      {
        v25[0] = KernelEvent;
        v25[1] = v21;
        v15 = (unsigned int)SendIVWorkerThreadRequest((struct _IVWORKER_INIT *)v25);
        goto LABEL_24;
      }
      v22 = (char *)KernelEvent;
    }
    else
    {
      if ( !v21 )
      {
LABEL_23:
        v15 = 3221225495LL;
LABEL_24:
        if ( (int)v15 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v19 = 0;
          }
          if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v24 = v15;
            LOBYTE(v15) = v19;
            LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              v15,
              v17,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              12,
              10,
              (__int64)&WPP_96784e752bb334d4c90d8aef48fc607f_Traceguids,
              v24);
          }
          return 0LL;
        }
LABEL_32:
        gpidLogon = v3;
        *((_DWORD *)gpsi + 567) = v3;
        v23 = (unsigned int *)SGDGetUserSessionState(v16, v15, v17, v18);
        v10 = WmsgpConnect(a2, *v23);
        goto LABEL_33;
      }
      v22 = (char *)v21;
    }
    Win32FreePool(v22);
    goto LABEL_23;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    v4 = 0x2000000;
LABEL_4:
    UserSetLastError(v4);
    return 0LL;
  }
  gpidLogonUI = v3;
  if ( !(unsigned int)Feature_WebThreatDefenseToggle__private_IsEnabledDeviceUsage()
    || gbImInitialized
    || *(_DWORD *)SGDGetUserSessionState(v7, v6, v8, v9) == gServiceSessionId
    || (v10 = ImSessionStart(), v10 < 0) )
  {
    v10 = 0;
  }
  else
  {
    gbImInitialized = 1;
  }
LABEL_33:
  if ( ghSMSS )
  {
    if ( gpepCSRSS )
    {
      ZwClose(ghSMSS);
      ghSMSS = 0LL;
    }
  }
  return v10 >= 0;
}
