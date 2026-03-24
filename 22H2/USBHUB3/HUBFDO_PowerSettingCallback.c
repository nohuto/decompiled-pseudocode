/*
 * XREFs of HUBFDO_PowerSettingCallback @ 0x1C000D8F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_PowerSettingCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  int v14; // eax
  __int64 v16; // [rsp+28h] [rbp-70h]
  __int64 v17; // [rsp+28h] [rbp-70h]
  _DWORD v18[10]; // [rsp+40h] [rbp-58h] BYREF

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
            5195LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
          _InterlockedAnd((volatile signed __int32 *)Context + 10, 0xF7FFFFFF);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *((_QWORD *)Context + 315),
              4u,
              3u,
              0x37u,
              (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids);
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
            0x38u,
            (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids);
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
               WdfDriverGlobals,
               *((_QWORD *)Context + 2),
               0LL,
               0LL,
               5212,
               "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
        if ( v4 < 0 )
        {
          v4 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v17) = 0;
            WPP_RECORDER_SF_d(
              *((_QWORD *)Context + 315),
              3u,
              3u,
              0x39u,
              (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids,
              v17);
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
  v10 = *Value;
  if ( *Value != *((_DWORD *)Context + 644) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(
        *((_QWORD *)Context + 315),
        4u,
        3u,
        0x3Au,
        (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids,
        *Value);
      v10 = *Value;
    }
    v18[3] = v10;
    v11 = 0;
    v18[6] = 2;
    v12 = *((_BYTE *)Context + 240) == 0;
    v18[8] = 2;
    if ( v12 )
      v11 = 2;
    v18[1] = 2;
    v18[7] = v11;
    v18[4] = 2;
    v18[5] = 2;
    v18[0] = 36;
    v18[2] = 3;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, PVOID))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, Context);
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 368))(
            WdfDriverGlobals,
            v13,
            v18);
    v4 = v14;
    if ( v14 >= 0 )
    {
      *((_DWORD *)Context + 644) = *Value;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = v14;
        WPP_RECORDER_SF_d(
          *((_QWORD *)Context + 315),
          3u,
          3u,
          0x3Bu,
          (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids,
          v16);
      }
      return 0;
    }
  }
  return (unsigned int)v4;
}
