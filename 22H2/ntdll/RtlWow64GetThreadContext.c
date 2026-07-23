/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800DC010
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D980 (ZwQueryInformationThread.c)
 */

NTSTATUS __cdecl RtlWow64GetThreadContext(HANDLE ThreadHandle, PWOW64_CONTEXT ThreadContext)
{
  return ZwQueryInformationThread(ThreadHandle, ThreadWow64Context, ThreadContext, 0x2CCu, 0LL);
}
