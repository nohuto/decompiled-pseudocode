/*
 * XREFs of HalpDispatchWmi @ 0x1408618D0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     HalpPassIrpFromFdoToPdo @ 0x14038CC24 (HalpPassIrpFromFdoToPdo.c)
 */

__int64 __fastcall HalpDispatchWmi(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx

  if ( **(_DWORD **)(a1 + 64) == 193 )
  {
    return (unsigned int)HalpPassIrpFromFdoToPdo(a1, a2);
  }
  else
  {
    Status = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
  }
  return Status;
}
