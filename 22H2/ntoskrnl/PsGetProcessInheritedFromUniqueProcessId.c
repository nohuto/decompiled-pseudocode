/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x140205130
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x1406A1C90 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 1344);
}
