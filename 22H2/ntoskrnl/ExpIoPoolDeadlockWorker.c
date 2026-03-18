/*
 * XREFs of ExpIoPoolDeadlockWorker @ 0x140A00830
 * Callers:
 *     <none>
 * Callees:
 *     DbgkWerCaptureLiveKernelDump @ 0x1408839B0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall ExpIoPoolDeadlockWorker(int *a1)
{
  return DbgkWerCaptureLiveKernelDump(L"IoThreadpool", 453LL, *a1, *((_QWORD *)a1 + 1), 0LL, 0LL, 0LL, 0LL, 0);
}
