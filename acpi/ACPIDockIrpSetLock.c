/*
 * XREFs of ACPIDockIrpSetLock @ 0x1C007B9E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDockIrpSetLock(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx

  Status = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
