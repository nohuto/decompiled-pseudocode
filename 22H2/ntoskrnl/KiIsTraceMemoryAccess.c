/*
 * XREFs of KiIsTraceMemoryAccess @ 0x1402FB520
 * Callers:
 *     KeInvalidAccessAllowed @ 0x1402FB490 (KeInvalidAccessAllowed.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsTraceMemoryAccess(unsigned __int64 a1)
{
  return KiDynamicTraceEnabled && a1 >= ControlPc && a1 < qword_140CFCBE0 && KeGetCurrentIrql() == 15;
}
