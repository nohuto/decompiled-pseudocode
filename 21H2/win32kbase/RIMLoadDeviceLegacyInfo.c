/*
 * XREFs of RIMLoadDeviceLegacyInfo @ 0x1C00A1600
 * Callers:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C017C948 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetCheckForLegacyTouchPad @ 0x1C00A173C (ApiSetCheckForLegacyTouchPad.c)
 *     rimBlockingDeviceIoControlFile @ 0x1C00A1864 (rimBlockingDeviceIoControlFile.c)
 *     RIMIsHIDMouse @ 0x1C00A1B80 (RIMIsHIDMouse.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A1D50 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall RIMLoadDeviceLegacyInfo(__int64 a1, int a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  int v9; // r8d
  _UNKNOWN **result; // rax
  PVOID Object; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  PVOID v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  int v15; // [rsp+60h] [rbp-10h]

  Handle = 0LL;
  v13 = 0LL;
  Object = 0LL;
  v4 = 0;
  if ( (int)RIMGetDeviceObjectPointer((int)a1 + 208, a2, a3, (unsigned int)&Handle, (__int64)&v13, (__int64)&Object) < 0 )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    result = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                              WPP_GLOBAL_Control->AttachedDevice,
                              v5,
                              v7,
                              (_DWORD)gRimLog,
                              2,
                              1,
                              27,
                              (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids);
    }
  }
  else
  {
    if ( !v13 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    ObfReferenceObject(Object);
    if ( (unsigned int)RIMIsHIDMouse(Object) )
    {
      v14 = 0LL;
      v4 = 1;
      v15 = 0;
      if ( (int)rimBlockingDeviceIoControlFile(Handle, &v14) < 0 )
      {
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v9,
            (_DWORD)gRimLog,
            3,
            1,
            28,
            (__int64)&WPP_8fed67cf671c3c35dd73f9843ee5fb4d_Traceguids);
        }
      }
      else
      {
        *(_WORD *)(a1 + 882) = HIWORD(v14);
        *(_WORD *)(a1 + 884) = v15;
      }
    }
    result = (_UNKNOWN **)ApiSetCheckForLegacyTouchPad(a1, v13, Object, v4);
  }
  if ( Handle )
  {
    ZwClose(Handle);
    ObfDereferenceObject(v13);
    return (_UNKNOWN **)ObfDereferenceObject(Object);
  }
  return result;
}
