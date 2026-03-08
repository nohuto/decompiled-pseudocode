/*
 * XREFs of IopInvalidDeviceRequest @ 0x1402E8D60
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 */

__int64 __fastcall IopInvalidDeviceRequest(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = -1073741808;
  IofCompleteRequest(a2, 0);
  return 3221225488LL;
}
