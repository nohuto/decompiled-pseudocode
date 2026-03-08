/*
 * XREFs of HUBPDO_EvtDeviceD0Entry @ 0x1C0019930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage @ 0x1C000CE04 (Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000CE90 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x1C000CF08 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     HUBMISC_WaitForSignal @ 0x1C0032DEC (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C003EAB4 (HUBIDLE_AddEvent.c)
 *     SleepstudyHelper_ComponentActive @ 0x1C0043DB4 (SleepstudyHelper_ComponentActive.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  int v4; // eax
  int v5; // esi
  __int64 v6; // rcx
  int IsEnabledDeviceUsage; // eax
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  GUID v14; // [rsp+40h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  v3 = *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 384) = 1;
  v14 = 0LL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C006A1E8)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v3 + 2176)) >= 0 )
  {
    v14 = *(GUID *)(v3 + 2176);
    _InterlockedOr((volatile signed __int32 *)(v3 + 1636), 0x80u);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v5 = v4;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v6 = *(_DWORD *)(v2 + 32) >> 3;
    LOWORD(v6) = (*(_DWORD *)(v2 + 32) & 8) != 0;
    McTemplateK0pqqh_EtwWriteTransfer(
      v6,
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_START,
      &v14,
      *(_QWORD *)(v3 + 24),
      1,
      v4,
      v6);
  }
  IsEnabledDeviceUsage = Feature_USB4PowerImprovements__private_IsEnabledDeviceUsage();
  v8 = *(_QWORD *)(v3 + 8);
  if ( !IsEnabledDeviceUsage )
  {
    if ( (*(_DWORD *)(v8 + 204) & 0x800) == 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v8 + 204) & 0x800) != 0 && (*(_DWORD *)(v3 + 1636) & 0x200000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v8 + 1432), 4u, 5u, 0x4Au, (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
LABEL_12:
    PoFxActivateComponent(*(_QWORD *)(*(_QWORD *)v3 + 2608LL), 0LL, 1LL);
  }
LABEL_13:
  HUBIDLE_AddEvent(v2 + 72, 6007LL, 0LL);
  KeClearEvent((PRKEVENT)(v3 + 1584));
  HUBSM_AddEvent(v3 + 504, 4067);
  HUBMISC_WaitForSignal((PVOID)(v3 + 1584));
  v9 = *(_QWORD *)(v2 + 392);
  v10 = *(_DWORD *)(v3 + 1576);
  if ( v9 )
    SleepstudyHelper_ComponentActive();
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v13) = v5;
    LODWORD(v12) = v10;
    McTemplateK0pqq_EtwWriteTransfer(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_COMPLETE,
      &v14,
      *(_QWORD *)(v3 + 24),
      v12,
      v13);
  }
  _InterlockedAnd((volatile signed __int32 *)(v3 + 1636), 0xFFFFFF7F);
  return v10;
}
