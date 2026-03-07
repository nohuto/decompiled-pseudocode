__int64 __fastcall HUBFDO_PowerSettingCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-70h]
  __int64 v15; // [rsp+28h] [rbp-70h]
  _DWORD v16[7]; // [rsp+40h] [rbp-58h] BYREF
  int v17; // [rsp+5Ch] [rbp-3Ch]
  int v18; // [rsp+60h] [rbp-38h]

  v4 = 0;
  if ( (*((_DWORD *)Context + 10) & 0x4000000) == 0 )
    return (unsigned int)-1073741811;
  if ( RtlCompareMemory(SettingGuid, &GUID_USB_SETTING_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    if ( ValueLength >= 4 && *Value <= 1u )
    {
      v9 = *((_DWORD *)Context + 10) & 0x8000000;
      if ( *Value == 1 )
      {
        if ( v9 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
            WdfDriverGlobals,
            *((_QWORD *)Context + 2),
            0LL,
            5791LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
          _InterlockedAnd((volatile signed __int32 *)Context + 10, 0xF7FFFFFF);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *((_QWORD *)Context + 315),
              4u,
              3u,
              0x52u,
              (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
          if ( *((_QWORD *)Context + 329) )
            SleepstudyHelper_ComponentInactive();
        }
      }
      else if ( !v9 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 315),
            4u,
            3u,
            0x53u,
            (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *((_QWORD *)Context + 2),
               0LL,
               0LL,
               5808,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        if ( v4 < 0 )
        {
          v4 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v15) = 0;
            WPP_RECORDER_SF_d(
              *((_QWORD *)Context + 315),
              3u,
              3u,
              0x54u,
              (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
              v15);
          }
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)Context + 10, 0x8000000u);
          if ( *((_QWORD *)Context + 329) )
            SleepstudyHelper_ComponentActive();
        }
      }
      return (unsigned int)v4;
    }
    return (unsigned int)-1073741811;
  }
  if ( RtlCompareMemory(SettingGuid, &GUID_POWER_HUB_SELECTIVE_SUSPEND_TIMEOUT, 0x10uLL) != 16 )
    return (unsigned int)-1073741811;
  if ( *Value != *((_DWORD *)Context + 644) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 315),
        4u,
        3u,
        0x55u,
        (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
        *Value);
    v17 = 0;
    v10 = *Value;
    v16[0] = 36;
    v16[6] = 2;
    v18 = 2;
    v16[1] = 2;
    v16[3] = v10;
    v16[4] = 2;
    v16[5] = 2;
    v16[2] = 3;
    if ( !*((_BYTE *)Context + 240) || (*((_DWORD *)Context + 11) & 0x20) != 0 )
      v17 = 2;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, PVOID))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, Context);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(
            WdfDriverGlobals,
            v11,
            v16);
    v4 = v12;
    if ( v12 >= 0 )
    {
      *((_DWORD *)Context + 644) = *Value;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = v12;
        WPP_RECORDER_SF_d(
          *((_QWORD *)Context + 315),
          3u,
          3u,
          0x56u,
          (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
          v14);
      }
      return 0;
    }
  }
  return (unsigned int)v4;
}
