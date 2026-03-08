/*
 * XREFs of HUBPDO_EvtCompleteIrpWorkItem @ 0x1C001CEE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtCompleteIrpWorkItem(__int64 a1)
{
  PIRP *v2; // rax

  v2 = (PIRP *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 a1,
                 off_1C006A148);
  IofCompleteRequest(*v2, 0);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
