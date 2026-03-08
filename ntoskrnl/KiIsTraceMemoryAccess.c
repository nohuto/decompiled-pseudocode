/*
 * XREFs of KiIsTraceMemoryAccess @ 0x1402DA680
 * Callers:
 *     KeInvalidAccessAllowed @ 0x1402DA5E0 (KeInvalidAccessAllowed.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsTraceMemoryAccess(unsigned __int64 a1)
{
  return KiDynamicTraceEnabled && a1 >= qword_140D1F2A8 && a1 < qword_140D1F2B0 && KeGetCurrentIrql() == 15;
}
