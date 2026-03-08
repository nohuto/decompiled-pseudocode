/*
 * XREFs of FsRtlCancellableWaitForSingleObject @ 0x1407D9430
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x140201018 (FsRtlpWaitOnIrp.c)
 * Callees:
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1407D7750 (FsRtlCancellableWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall FsRtlCancellableWaitForSingleObject(PVOID Object, PLARGE_INTEGER Timeout, PIRP Irp)
{
  PVOID v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = Object;
  return FsRtlCancellableWaitForMultipleObjects(1u, &v4, WaitAll, Timeout, 0LL, Irp);
}
