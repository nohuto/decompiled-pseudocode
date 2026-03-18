/*
 * XREFs of RawShutdown @ 0x1409B82D0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402C9950 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x140304E10 (IoDeleteDevice.c)
 *     RawScanDeletedList @ 0x140791BAC (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x1408757B0 (IoUnregisterFileSystem.c)
 */

__int64 __fastcall RawShutdown(__int64 a1, IRP *a2)
{
  RawScanDeletedList();
  IoUnregisterFileSystem(RawDeviceDiskObject);
  IoUnregisterFileSystem(RawDeviceCdRomObject);
  IoUnregisterFileSystem(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceCdRomObject);
  IoDeleteDevice(RawDeviceDiskObject);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 1);
  return 0LL;
}
