/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x1403FC6C0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E520 (RtlRaiseCustomSystemEventTrigger.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408878A0 (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
