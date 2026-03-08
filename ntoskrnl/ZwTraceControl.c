/*
 * XREFs of ZwTraceControl @ 0x140415D70
 * Callers:
 *     EtwWriteStartScenario @ 0x14085A170 (EtwWriteStartScenario.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTraceControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
