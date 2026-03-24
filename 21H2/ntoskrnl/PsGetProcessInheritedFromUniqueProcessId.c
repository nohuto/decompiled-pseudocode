/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x140205170
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x1406BF030 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 1344);
}
