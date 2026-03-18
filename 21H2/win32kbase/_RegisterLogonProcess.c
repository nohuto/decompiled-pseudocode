/*
 * XREFs of _RegisterLogonProcess @ 0x1C00BDE70
 * Callers:
 *     NtUserRegisterLogonProcess @ 0x1C00BDCB0 (NtUserRegisterLogonProcess.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C00384C4 (isInputVirtualizationEnabled.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     CreateKernelEvent @ 0x1C005D9C0 (CreateKernelEvent.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     IsPrivileged @ 0x1C00BDF50 (IsPrivileged.c)
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x1C01ED0C0 (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 *     WmsgpConnect @ 0x1C02C8A68 (WmsgpConnect.c)
 */

_BOOL8 __fastcall RegisterLogonProcess(int a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v9; // rcx
  char v10; // di
  __int64 KernelEvent; // rsi
  __int64 v12; // rax
  int v13; // r8d
  char *v14; // rdx
  int v15; // edx
  char v16; // [rsp+40h] [rbp-28h]
  _QWORD v17[2]; // [rsp+50h] [rbp-18h] BYREF

  v3 = a1;
  if ( !gpidLogon )
  {
    if ( !(unsigned int)IsPrivileged(&psTcb) )
    {
      v9 = 5LL;
      goto LABEL_15;
    }
    if ( !isInputVirtualizationEnabled() || gpIVThread )
    {
LABEL_5:
      gpidLogon = v3;
      *((_DWORD *)gpsi + 567) = v3;
      v7 = WmsgpConnect(a2);
      goto LABEL_6;
    }
    v10 = 1;
    KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
    v12 = CreateKernelEvent(SynchronizationEvent, 0);
    if ( KernelEvent )
    {
      if ( v12 )
      {
        v17[0] = KernelEvent;
        v17[1] = v12;
        v15 = SendIVWorkerThreadRequest((struct _IVWORKER_INIT *)v17);
        goto LABEL_4;
      }
      v14 = (char *)KernelEvent;
    }
    else
    {
      if ( !v12 )
      {
LABEL_26:
        v15 = -1073741801;
LABEL_4:
        if ( v15 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v10 = 0;
          }
          if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v16 = v15;
            LOBYTE(v15) = v10;
            LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v15,
              v13,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              12,
              10,
              (__int64)&WPP_86bab3461bda36372cf618f3aa701f63_Traceguids,
              v16);
          }
          return 0LL;
        }
        goto LABEL_5;
      }
      v14 = (char *)v12;
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v14);
    goto LABEL_26;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    v9 = 0x2000000LL;
LABEL_15:
    UserSetLastError(v9, v4, v5, v6);
    return 0LL;
  }
  gpidLogonUI = v3;
  v7 = 0;
LABEL_6:
  if ( ghSMSS )
  {
    if ( gpepCSRSS )
    {
      ZwClose(ghSMSS);
      ghSMSS = 0LL;
    }
  }
  return v7 >= 0;
}
