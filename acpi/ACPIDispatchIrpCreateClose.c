/*
 * XREFs of ACPIDispatchIrpCreateClose @ 0x1C0024570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchIrpCreateClose(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2->RequestorMode && (a2->Flags & 0x400000) == 0 )
    v2 = -1073741822;
  a2->IoStatus.Status = v2;
  IofCompleteRequest(a2, 0);
  return v2;
}
