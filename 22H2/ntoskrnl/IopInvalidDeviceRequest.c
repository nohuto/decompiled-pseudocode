/*
 * XREFs of IopInvalidDeviceRequest @ 0x140310770
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140242E00 (IofCompleteRequest.c)
 */

__int64 __fastcall IopInvalidDeviceRequest(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = -1073741808;
  IofCompleteRequest(a2, 0);
  return 3221225488LL;
}
