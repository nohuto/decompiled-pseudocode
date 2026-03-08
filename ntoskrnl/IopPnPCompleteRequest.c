/*
 * XREFs of IopPnPCompleteRequest @ 0x14036CC7C
 * Callers:
 *     IopPnPDispatch @ 0x1407F7890 (IopPnPDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  IofCompleteRequest(a1, 0);
}
