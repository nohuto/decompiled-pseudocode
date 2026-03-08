/*
 * XREFs of HUBFDO_IdleResiliencyCallback @ 0x1C000FA10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_IdleResiliencyCallback(LPCGUID SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  int v5; // eax

  if ( Context )
  {
    v5 = *Value;
    if ( *((_DWORD *)Context + 662) != *Value )
    {
      *((_DWORD *)Context + 662) = v5;
      if ( v5 == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 315),
            4u,
            3u,
            0x6Au,
            (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, POWER_SETTING_CALLBACK *, __int64, const char *))(WdfFunctions_01015 + 3512))(
          WdfDriverGlobals,
          *((_QWORD *)Context + 2),
          HUBFDO_IdleResiliencyCallback,
          6817LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      }
      else if ( !v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 315),
            4u,
            3u,
            0x6Bu,
            (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, POWER_SETTING_CALLBACK *, int, const char *))(WdfFunctions_01015 + 3504))(
          WdfDriverGlobals,
          *((_QWORD *)Context + 2),
          0LL,
          HUBFDO_IdleResiliencyCallback,
          6823,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      }
    }
  }
  return 0LL;
}
