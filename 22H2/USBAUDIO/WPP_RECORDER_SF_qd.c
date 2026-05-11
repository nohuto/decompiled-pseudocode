/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C00014A8
 * Callers:
 *     DeviceCreate @ 0x1C0001C90 (DeviceCreate.c)
 *     USBType1StateChangePin @ 0x1C0006260 (USBType1StateChangePin.c)
 *     USBType1ChangePowerState @ 0x1C00065F0 (USBType1ChangePowerState.c)
 *     USBCaptureResetWorker @ 0x1C00068D0 (USBCaptureResetWorker.c)
 *     USBCaptureStateChangePin @ 0x1C00070D0 (USBCaptureStateChangePin.c)
 *     USBCaptureChangePowerState @ 0x1C0007680 (USBCaptureChangePowerState.c)
 *     DeviceStart @ 0x1C00228A0 (DeviceStart.c)
 *     DeviceStop @ 0x1C0022F60 (DeviceStop.c)
 *     PinGoToLowPowerState @ 0x1C00242E0 (PinGoToLowPowerState.c)
 *     PinGoToFullPowerState @ 0x1C00243E0 (PinGoToFullPowerState.c)
 *     PinCreate @ 0x1C00244E0 (PinCreate.c)
 *     PinSetDataFormat @ 0x1C0024A70 (PinSetDataFormat.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C002D75C (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002DC7C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C002E6D0 (USBHwDataPipeReset.c)
 *     USBType1RenderCreatePin @ 0x1C0032CD0 (USBType1RenderCreatePin.c)
 *     USBCaptureStartTransfers @ 0x1C0033134 (USBCaptureStartTransfers.c)
 *     USBCaptureCreatePin @ 0x1C0033240 (USBCaptureCreatePin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qd(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v12 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, (__int64 *)va);
}
