/*
 * XREFs of HUBFDO_LowPowerEpochCallback @ 0x1C000FB30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C00887B0 (HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue.c)
 */

__int64 __fastcall HUBFDO_LowPowerEpochCallback(LPCGUID SettingGuid, int *Value, __int64 ValueLength, char *Context)
{
  int v5; // eax
  int v6; // eax
  int v8; // [rsp+58h] [rbp+10h] BYREF

  if ( Context )
  {
    v5 = *Value;
    if ( *((_DWORD *)Context + 694) != *Value )
    {
      *((_DWORD *)Context + 694) = v5;
      if ( v5 == 1 )
      {
        if ( (*((_DWORD *)Context + 10) & 0x8000000) != 0
          && ((*((_DWORD *)Context + 11) & 0x100) != 0 || *((char **)Context + 298) == Context + 2384) )
        {
          v8 = 0;
          v6 = HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(&v8, Value, ValueLength);
          if ( v6 >= 0 )
          {
            if ( v8 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_(
                  *((_QWORD *)Context + 315),
                  4u,
                  3u,
                  0x6Eu,
                  (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, POWER_SETTING_CALLBACK *, __int64, const char *))(WdfFunctions_01015 + 3512))(
                WdfDriverGlobals,
                *((_QWORD *)Context + 2),
                HUBFDO_LowPowerEpochCallback,
                6895LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
              Context[2780] = 1;
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_(
                *((_QWORD *)Context + 315),
                3u,
                3u,
                0x6Du,
                (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_d(
              *((_QWORD *)Context + 315),
              3u,
              3u,
              0x6Cu,
              (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
              v6);
          }
        }
      }
      else if ( !v5 && Context[2780] == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)Context + 315),
            4u,
            3u,
            0x6Fu,
            (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, POWER_SETTING_CALLBACK *, int, const char *))(WdfFunctions_01015 + 3504))(
          WdfDriverGlobals,
          *((_QWORD *)Context + 2),
          0LL,
          HUBFDO_LowPowerEpochCallback,
          6907,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        Context[2780] = 0;
      }
    }
  }
  return 0LL;
}
