/*
 * XREFs of HUBPDO_EvtDeviceDisableWakeAtBus @ 0x1C001C870
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_WaitForSignal @ 0x1C0032DEC (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceDisableWakeAtBus(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 32), 0xFFFFFFFB);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 32), 0xFFFFFFF7);
  result = *(unsigned int *)(v1 + 32);
  if ( (result & 0x10) == 0 && (result & 0x4000) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v1 + 32), 0xFFFFBFFF);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           *(_QWORD *)(v1 + 264),
           off_1C006A310);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
      WdfDriverGlobals,
      *(_QWORD *)(v1 + 264));
    return HUBMISC_WaitForSignal((PVOID)(v3 + 24));
  }
  return result;
}
