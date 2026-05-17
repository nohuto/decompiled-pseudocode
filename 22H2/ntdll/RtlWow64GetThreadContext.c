/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800DC010
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D980 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
