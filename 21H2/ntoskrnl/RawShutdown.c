/*
 * XREFs of RawShutdown @ 0x14090F280
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140243490 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x140360D90 (IoDeleteDevice.c)
 *     RawScanDeletedList @ 0x14071B3D8 (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x14077D110 (IoUnregisterFileSystem.c)
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
