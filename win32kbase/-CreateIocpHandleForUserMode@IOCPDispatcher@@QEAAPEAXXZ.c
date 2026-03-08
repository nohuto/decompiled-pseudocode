/*
 * XREFs of ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x1C0094444
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00942B4 (UserActivateMITInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     ProtectHandle @ 0x1C00945DC (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall IOCPDispatcher::CreateIocpHandleForUserMode(IOCPDispatcher *this)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  NTSTATUS v3; // eax
  int v4; // r8d
  __int64 v5; // r9
  NTSTATUS v6; // edx
  char v8; // al
  char v9; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3864LL);
  if ( !*(_QWORD *)(v1 + 2904) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3867LL);
  v2 = (_QWORD *)(v1 + 2912);
  if ( *(_QWORD *)(v1 + 2912) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3869LL);
  v3 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         *(HANDLE *)(v1 + 2904),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PHANDLE)(v1 + 2912),
         0,
         0,
         2u);
  v6 = v3;
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = v6;
      LOBYTE(v6) = v8;
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        26,
        (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids,
        v9);
    }
  }
  else
  {
    LOBYTE(v5) = 1;
    ProtectHandle(*v2, (unsigned int)v3, 0LL, v5);
  }
  return (void *)*v2;
}
