/*
 * XREFs of PsGetProcessInheritedFromUniqueProcessId @ 0x1402A9AB0
 * Callers:
 *     PsChargeProcessWakeCounter @ 0x1406BCA00 (PsChargeProcessWakeCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessInheritedFromUniqueProcessId(__int64 a1)
{
  return *(_QWORD *)(a1 + 1344);
}
