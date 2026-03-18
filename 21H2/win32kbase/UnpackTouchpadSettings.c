/*
 * XREFs of UnpackTouchpadSettings @ 0x1C01E90D4
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EF3E0 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0148CEC (_SetPrecisionTouchPadConfiguration.c)
 */

__int64 (__fastcall *__fastcall UnpackTouchpadSettings(_DWORD *a1))(_QWORD, _QWORD, _QWORD)
{
  unsigned int v1; // edx
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  int v3; // edx
  int v4; // r8d
  _DWORD Source1[6]; // [rsp+40h] [rbp-28h] BYREF

  v1 = a1[10];
  Source1[0] = a1[6];
  Source1[1] = a1[7];
  Source1[2] = a1[8];
  Source1[4] = a1[9];
  Source1[3] = v1 & 0x7FF;
  Source1[5] = (v1 >> 11) & 0x7F;
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlCompareMemory(Source1, &gTouchPadParameters, 0x18uLL);
  if ( result != (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))24 )
  {
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        15,
        (__int64)&WPP_76daf91aede7319b3291ff1c1ef65419_Traceguids);
    }
    SetPrecisionTouchPadConfiguration((__int64)Source1);
    result = qword_1C029C670;
    if ( qword_1C029C670 )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C029C670(175LL, 0LL, 0LL);
  }
  return result;
}
