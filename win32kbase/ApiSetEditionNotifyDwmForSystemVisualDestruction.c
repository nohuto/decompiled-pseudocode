__int64 __fastcall ApiSetEditionNotifyDwmForSystemVisualDestruction(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  PDEVICE_OBJECT v5; // rcx
  unsigned int v6; // ebx
  char v7; // di
  void *v8; // r9
  void *v10; // r8

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  v6 = 0;
  v7 = 1;
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
  v8 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      494,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  if ( qword_1C02D7FA0 && (int)qword_1C02D7FA0(v5, a2, a3, v8) >= 0 )
  {
    if ( qword_1C02D7FA8 )
      return (unsigned int)qword_1C02D7FA8(a1, v3);
    return v6;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v7 = 0;
    if ( (_BYTE)a2 || v7 )
    {
      v10 = &WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids;
      LOBYTE(v10) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)v10,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        10,
        495,
        (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
    }
    return 0LL;
  }
}
