/*
 * XREFs of UsbhPdoPnp_DoDefault @ 0x1C0055180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhPdoPnp_DoDefault(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx

  Status = a2->IoStatus.Status;
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
