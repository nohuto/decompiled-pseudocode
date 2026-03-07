__int64 __fastcall ApiSetEditionHandleAndPostKeyEvent(unsigned int a1)
{
  char v2; // di
  char v3; // dl
  char v4; // r8
  void *v5; // r9
  __int64 *v6; // rax
  unsigned int v7; // esi
  char v8; // dl
  __int64 v10; // [rsp+80h] [rbp-38h] BYREF

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  v5 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      402,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  v10 = 0LL;
  if ( gpqForeground )
  {
    v6 = *(__int64 **)(gpqForeground + 120);
    if ( v6 || (v6 = *(__int64 **)(gpqForeground + 128)) != 0LL )
      v10 = *v6;
  }
  SendMessageTo(3LL, (__int64)&v10, 8LL, (__int64)v5);
  v7 = 0;
  if ( qword_1C02D78E8 && (int)qword_1C02D78E8() >= 0 )
    v7 = EditionHandleAndPostKeyEvent(a1);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v8 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v8 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v2,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      403,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  return v7;
}
