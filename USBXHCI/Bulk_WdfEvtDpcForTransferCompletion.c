/*
 * XREFs of Bulk_WdfEvtDpcForTransferCompletion @ 0x1C000E390
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_ProcessTransferCompletion @ 0x1C000E3C8 (Bulk_ProcessTransferCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Bulk_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 912))(WdfDriverGlobals, a1);
  return Bulk_ProcessTransferCompletion(v1);
}
