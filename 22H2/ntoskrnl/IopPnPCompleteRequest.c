/*
 * XREFs of IopPnPCompleteRequest @ 0x1403713F8
 * Callers:
 *     IopPnPDispatch @ 0x14074EF40 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140242E00 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
