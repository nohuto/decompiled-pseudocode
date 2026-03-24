/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x1403FD040
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E5E0 (RtlRaiseCustomSystemEventTrigger.c)
 *     DbgkpStartSystemErrorHandler @ 0x140887850 (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateNameInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
