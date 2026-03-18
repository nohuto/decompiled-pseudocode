/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x1402F63C0
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x1406E1310 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 1344);
}
