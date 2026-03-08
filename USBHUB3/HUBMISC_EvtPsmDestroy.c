/*
 * XREFs of HUBMISC_EvtPsmDestroy @ 0x1C0032310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_EvtPsmDestroy(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C006A340);
  v3 = v2[164];
  if ( v3 )
  {
    LOBYTE(v1) = 1;
    ExDeleteTimer(v3, v1, 0LL, 0LL);
    v2[164] = 0LL;
  }
  imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v2[179]);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, *v2);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           v4,
           "PSM Tag",
           7485LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
}
