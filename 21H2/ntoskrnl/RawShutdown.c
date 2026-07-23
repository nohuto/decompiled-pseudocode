/*
 * XREFs of RawShutdown @ 0x14090F3E0
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     RawScanDeletedList @ 0x1406CA050 (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x14077D2D0 (IoUnregisterFileSystem.c)
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
