/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x1402B6AF0
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x14077F530 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 1344);
}
