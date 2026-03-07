__int64 WPP_RECORDER_SF_DDDqDDDDD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+28h] [rbp-99h]
  __int64 v8; // [rsp+100h] [rbp+3Fh] BYREF
  va_list va; // [rsp+100h] [rbp+3Fh]
  __int64 v10; // [rsp+108h] [rbp+47h] BYREF
  va_list va1; // [rsp+108h] [rbp+47h]
  __int64 v12; // [rsp+110h] [rbp+4Fh] BYREF
  va_list va2; // [rsp+110h] [rbp+4Fh]
  __int64 v14; // [rsp+118h] [rbp+57h] BYREF
  va_list va3; // [rsp+118h] [rbp+57h]
  __int64 v16; // [rsp+120h] [rbp+5Fh] BYREF
  va_list va4; // [rsp+120h] [rbp+5Fh]
  __int64 v18; // [rsp+128h] [rbp+67h] BYREF
  va_list va5; // [rsp+128h] [rbp+67h]
  __int64 v20; // [rsp+130h] [rbp+6Fh] BYREF
  va_list va6; // [rsp+130h] [rbp+6Fh]
  __int64 v22; // [rsp+138h] [rbp+77h] BYREF
  va_list va7; // [rsp+138h] [rbp+77h]
  va_list va8; // [rsp+140h] [rbp+7Fh] BYREF

  va_start(va8, a5);
  va_start(va7, a5);
  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v16 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v18 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v20 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v22 = va_arg(va8, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
      29LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      8LL,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      (__int64 *)va6,
      4LL,
      (__int64 *)va7,
      4LL,
      va8,
      4LL,
      0LL);
  LOWORD(v7) = 29;
  return WppAutoLogTrace(
           a1,
           5LL,
           14LL,
           &WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           (__int64 *)va3,
           8LL,
           (__int64 *)va4,
           4LL,
           (__int64 *)va5,
           4LL,
           (__int64 *)va6,
           4LL,
           (__int64 *)va7,
           4LL,
           va8);
}
