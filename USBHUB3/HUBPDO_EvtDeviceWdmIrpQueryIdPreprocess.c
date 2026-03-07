__int64 __fastcall HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess(__int64 a1, __int64 a2)
{
  struct _KEVENT *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rax
  __int64 v9; // [rsp+28h] [rbp-20h]

  v3 = *(struct _KEVENT **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                              WdfDriverGlobals,
                              a1,
                              off_1C006A0F8)
                          + 24);
  if ( (v3[68].Header.SignalState & 0x4000) == 0 && !*(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) && !KeGetCurrentIrql() )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
           WdfDriverGlobals,
           *(_QWORD *)&v3->Header.Lock);
    LOBYTE(v5) = 1;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
           WdfDriverGlobals,
           v4,
           v5,
           0LL,
           4024,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    if ( v6 >= 0 )
    {
      KeClearEvent(v3 + 67);
      HUBSM_AddEvent((__int64)&v3[21], 4095);
      HUBMISC_WaitForSignal(&v3[67]);
      v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
             WdfDriverGlobals,
             *(_QWORD *)&v3->Header.Lock);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
        WdfDriverGlobals,
        v7,
        0LL,
        4046LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = v6;
      WPP_RECORDER_SF_d(
        (__int64)v3->Header.WaitListHead.Flink[89].Blink,
        2u,
        5u,
        0x38u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v9);
    }
  }
  return 0LL;
}
