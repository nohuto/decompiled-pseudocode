/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x1404150F0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405AEB80 (RtlRaiseCustomSystemEventTrigger.c)
 *     DbgkpStartSystemErrorHandler @ 0x1409377EC (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateNameInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
