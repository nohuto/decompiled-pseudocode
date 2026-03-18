/*
 * XREFs of IopInvalidDeviceRequest @ 0x140354410
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402C9950 (IofCompleteRequest.c)
 */

__int64 __fastcall IopInvalidDeviceRequest(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = -1073741808;
  IofCompleteRequest(a2, 0);
  return 3221225488LL;
}
