/*
 * XREFs of Interrupter_DeferToDpcOrWorkItem @ 0x1C00224FA
 * Callers:
 *     Interrupter_WdfEvtInterruptIsr @ 0x1C0007760 (Interrupter_WdfEvtInterruptIsr.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_IoWorkItemRequeueDpc @ 0x1C003E130 (Interrupter_IoWorkItemRequeueDpc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Interrupter_DeferToDpcOrWorkItem(__int64 a1)
{
  if ( *(_BYTE *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                                WdfDriverGlobals,
                                a1,
                                off_1C0063310)
                            + 8)
                + 601LL) )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3328))(WdfDriverGlobals, a1);
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1136))(WdfDriverGlobals, a1);
}
