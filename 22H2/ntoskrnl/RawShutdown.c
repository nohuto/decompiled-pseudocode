/*
 * XREFs of RawShutdown @ 0x14090F2D0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140242E00 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x140360200 (IoDeleteDevice.c)
 *     RawScanDeletedList @ 0x140719020 (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x14077D010 (IoUnregisterFileSystem.c)
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
