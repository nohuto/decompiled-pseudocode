/*
 * XREFs of ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x1C00B6410
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00B5A44 (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ProtectHandle @ 0x1C003AA94 (ProtectHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall IOCPDispatcher::CreateIocpHandleForUserMode(IOCPDispatcher *this)
{
  IOCPDispatcher *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void **v5; // rbx
  NTSTATUS v6; // edx
  int v7; // r8d
  bool v9; // al
  char v10; // [rsp+40h] [rbp-18h]

  v1 = gpIOCPDispatcher;
  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( !*((_QWORD *)v1 + 363) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  v5 = (void **)((char *)v1 + 2912);
  if ( *((_QWORD *)v1 + 364) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  v6 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         *((HANDLE *)v1 + 363),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PHANDLE)v1 + 364,
         0,
         0,
         2u);
  if ( v6 < 0 )
  {
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v6;
      LOBYTE(v6) = v9;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        26,
        (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids,
        v10);
    }
  }
  else
  {
    ProtectHandle(*v5, v6, 0LL, 1);
  }
  return *v5;
}
