__int64 __fastcall rimCreateAndProcessPointerDeviceButtonOnlyFrame(
        struct RawInputManagerObject *a1,
        LARGE_INTEGER *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v6; // rbp
  LARGE_INTEGER *v7; // rbx
  __int64 result; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r8
  _DWORD v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v13[0] = 0;
  v6 = a3;
  v7 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      34,
      (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
  }
  result = RIMStartPointerDeviceFrame((__int64)a1, (__int64)v7, a5);
  if ( (_DWORD)result )
  {
    RIMStoreRawDataInPointerDeviceFrame((__int64)a1, (__int64)v7, v6, a4, v13);
    rimProcessPointerDeviceButtonContact((_DWORD)a1, (_DWORD)v7, v6, a4, v13[0]);
    rimProcessMissingPointerDeviceContacts(a1, v7, 0LL);
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v7, v12);
    result = RIMCompletePointerDeviceFrame((HANDLE *)a1, v7, 1u);
  }
  else
  {
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      result = WPP_RECORDER_AND_TRACE_SF_(
                 WPP_GLOBAL_Control->AttachedDevice,
                 v10,
                 v11,
                 (_DWORD)gRimLog,
                 4,
                 1,
                 35,
                 (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
    }
  }
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) != 0)
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v10,
             v11,
             (_DWORD)gRimLog,
             4,
             1,
             36,
             (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
  }
  return result;
}
