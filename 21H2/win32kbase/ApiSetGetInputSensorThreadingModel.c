/*
 * XREFs of ApiSetGetInputSensorThreadingModel @ 0x1C0052F34
 * Callers:
 *     InputInitialize @ 0x1C0052DC4 (InputInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsGetInputSensorThreadingModelSupported @ 0x1C0053038 (IsGetInputSensorThreadingModelSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ApiSetGetInputSensorThreadingModel(unsigned int a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v4; // rcx
  char v5; // bl
  void *v6; // r9
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edx
  void *v14; // r8

  v4 = WPP_GLOBAL_Control;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v6 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      198,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  v7 = 0;
  if ( (int)IsGetInputSensorThreadingModelSupported(v4, a2, a3, v6) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( (int)IsGetInputSensorThreadingModelSupported(v9, v8, v10, v11) >= 0 && qword_1C029CF88 )
    v7 = qword_1C029CF88(a1);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( (_BYTE)v12 || v5 )
  {
    v14 = &WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids;
    LOBYTE(v14) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      (_DWORD)v14,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      199,
      (__int64)&WPP_0697f2bc7c5d31d94a4cce9255604f83_Traceguids);
  }
  return v7;
}
