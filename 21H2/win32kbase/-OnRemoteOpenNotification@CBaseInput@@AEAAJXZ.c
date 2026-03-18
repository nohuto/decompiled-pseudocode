/*
 * XREFs of ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00D22D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RimInputTypeToDeviceInputType @ 0x1C00B5F24 (RimInputTypeToDeviceInputType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0182000 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnRemoteOpenNotification(CBaseInput *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // esi
  __int64 v8; // rdi
  int v9; // ebx
  __int64 CurrentProcess; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  int v20; // r8d
  struct _UNICODE_STRING v21; // [rsp+50h] [rbp-18h] BYREF
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v21 = 0LL;
  RtlInitUnicodeString(&v21, 0LL);
  v2 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
  v7 = v2;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
      goto LABEL_16;
    }
    v8 = (__int64)*(&gRemoteKeyboardChannelHandlePair + 1);
  }
  else
  {
    v8 = (__int64)*(&gRemoteMouseChannelHandlePair + 1);
  }
  if ( v8 != -1 )
  {
    if ( v8 )
    {
      v22 = 0LL;
      CurrentProcess = PsGetCurrentProcess(v4, v3, v5, v6);
      v16 = PsGetCurrentProcess(v13, v12, v14, v15);
      v9 = ObDuplicateObject(v16, v8, CurrentProcess, &v22, 0, 512, 2, 0);
      if ( v9 >= 0 )
      {
        v9 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(*((_QWORD *)this + 1), (unsigned int)&v21, v7, v22, 0, 0LL);
        if ( v9 < 0 )
        {
          LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
          if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              v20,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              3,
              15,
              (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids,
              v9);
          }
        }
      }
      else
      {
        LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v17,
            v18,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            3,
            14,
            (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids,
            v9);
        }
      }
    }
    else
    {
      LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v3,
          v5,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          3,
          13,
          (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids);
      }
      return 0;
    }
    return (unsigned int)v9;
  }
LABEL_16:
  LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v5,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      3,
      12,
      (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids,
      v7);
  }
  return (unsigned int)-1073741816;
}
