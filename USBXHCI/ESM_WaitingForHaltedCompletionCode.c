/*
 * XREFs of ESM_WaitingForHaltedCompletionCode @ 0x1C0051E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_WaitingForHaltedCompletionCode(__int64 a1)
{
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 1304LL),
    -20000000LL);
  return 1000LL;
}
