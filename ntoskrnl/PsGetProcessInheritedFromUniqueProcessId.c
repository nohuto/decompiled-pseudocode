/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x14033E340
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x140793DC0 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 1344);
}
