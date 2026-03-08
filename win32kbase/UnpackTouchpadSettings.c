/*
 * XREFs of UnpackTouchpadSettings @ 0x1C0219908
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C0220200 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C015CC04 (_SetPrecisionTouchPadConfiguration.c)
 */

__int64 (__fastcall *__fastcall UnpackTouchpadSettings(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD)
{
  unsigned int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD Source1[3]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+4Ch] [rbp-1Ch]
  int v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+54h] [rbp-14h]

  v4 = a1[10];
  Source1[0] = a1[6];
  Source1[1] = a1[7];
  Source1[2] = a1[8];
  v13 = a1[9];
  v12 = v4 & 0x7FF;
  v5 = (v4 >> 11) & 0x7F;
  v14 = v5;
  v6 = SGDGetUserSessionState(a1, v5, v12, a4);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlCompareMemory(
                                                             Source1,
                                                             (const void *)(v6 + 16800),
                                                             0x18uLL);
  if ( result != (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))24 )
  {
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        15,
        (__int64)&WPP_ba08f856c6723d7409559d634e9d3140_Traceguids);
    SetPrecisionTouchPadConfiguration((__int64)Source1, v8, v9, v10);
    result = qword_1C02D6EC8;
    if ( qword_1C02D6EC8 )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C02D6EC8(175LL, 0LL, 0LL);
  }
  return result;
}
