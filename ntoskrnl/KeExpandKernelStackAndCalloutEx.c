/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x1403155F0
 * Callers:
 *     sub_140769C84 @ 0x140769C84 (sub_140769C84.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14094E098 (IopIssueSystemEnvironmentRequest.c)
 *     ViPtLogStackTrace @ 0x140ADC05C (ViPtLogStackTrace.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140315620 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCalloutEx(
        PEXPAND_STACK_CALLOUT Callout,
        PVOID Parameter,
        SIZE_T Size,
        BOOLEAN Wait,
        PVOID Context)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, (__int64)Context);
}
