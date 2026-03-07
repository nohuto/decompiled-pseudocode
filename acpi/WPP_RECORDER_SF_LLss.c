__int64 WPP_RECORDER_SF_LLss(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-58h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  va_list va1; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e7f2dcd7c72737231dca15e7ae005379_Traceguids,
      12LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      "NULL",
      5LL,
      "NULL",
      5LL,
      0LL);
  LOWORD(v7) = 12;
  return WppAutoLogTrace(
           a1,
           2LL,
           22LL,
           &WPP_e7f2dcd7c72737231dca15e7ae005379_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           "NULL",
           5LL,
           "NULL",
           5LL,
           0LL);
}
