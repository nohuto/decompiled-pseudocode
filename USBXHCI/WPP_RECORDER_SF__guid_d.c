__int64 __fastcall WPP_RECORDER_SF__guid_d(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v8; // [rsp+20h] [rbp-48h]
  _DWORD v9[6]; // [rsp+50h] [rbp-18h] BYREF

  v9[0] = -1073741670;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64, __int64, _DWORD *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      259LL,
      a6,
      16LL,
      v9,
      4LL,
      0LL);
  LOWORD(v8) = 259;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, void *, int, __int64, __int64, _DWORD *, __int64, _QWORD))WppAutoLogTrace)(
           a1,
           2LL,
           4LL,
           &WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
           v8,
           a6,
           16LL,
           v9,
           4LL,
           0LL);
}
