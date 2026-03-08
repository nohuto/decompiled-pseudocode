/*
 * XREFs of HUBPDO_EvtDeviceResourceRequirementsQuery @ 0x1C00801B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddDsmEvent @ 0x1C000A740 (HUBSM_AddDsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C0032DEC (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceResourceRequirementsQuery(const void *a1)
{
  struct _KEVENT *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rax
  __int64 v8; // [rsp+28h] [rbp-20h]

  v2 = *(struct _KEVENT **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, const void *, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                              WdfDriverGlobals,
                              a1,
                              off_1C006A0F8)
                          + 24);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)&v2->Header.Lock);
  LOBYTE(v4) = 1;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
         WdfDriverGlobals,
         v3,
         v4,
         0LL,
         10877,
         "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  if ( v5 >= 0 )
  {
    if ( (v2[68].Header.SignalState & 0x4000) == 0 )
    {
      KeClearEvent(v2 + 67);
      HUBSM_AddDsmEvent((__int64)v2, 4095LL);
      HUBMISC_WaitForSignal(&v2[67], "Pre Start Completion", a1);
    }
    KeClearEvent(v2 + 66);
    HUBSM_AddDsmEvent((__int64)v2, 4091LL);
    HUBMISC_WaitForSignal(&v2[66], "Device ResourcesQuery", a1);
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
           WdfDriverGlobals,
           *(_QWORD *)&v2->Header.Lock);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
      WdfDriverGlobals,
      v6,
      0LL,
      10916LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = v5;
    WPP_RECORDER_SF_d(
      (__int64)v2->Header.WaitListHead.Flink[89].Blink,
      2u,
      5u,
      0xA2u,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      v8);
  }
  return 0LL;
}
