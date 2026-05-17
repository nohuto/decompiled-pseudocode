/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800CBF10
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D980 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
