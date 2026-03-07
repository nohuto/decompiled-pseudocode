__int64 WPP_RECORDER_SF_Dddd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-68h]
  int v8; // [rsp+70h] [rbp-18h] BYREF
  int v9; // [rsp+78h] [rbp-10h] BYREF
  __int64 v10; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  v8 = 0xFFFFFF;
  v9 = 49153;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, int *, __int64, int *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
      104LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      &v9,
      4LL,
      &v8,
      4LL,
      0LL);
  LOWORD(v7) = 104;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v7, (__int64 *)va);
}
