/*
 * XREFs of IopSessionChangeWorker @ 0x14033BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ExNotifyWithProcessing @ 0x14033BD60 (ExNotifyWithProcessing.c)
 *     MmSetSessionObjectIoEvent @ 0x1407B42F4 (MmSetSessionObjectIoEvent.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall IopSessionChangeWorker(PVOID *P)
{
  PVOID v2; // rcx

  ExNotifyWithProcessing(IopSessionCallbackObject, P, 0LL, 0LL);
  MmSetSessionObjectIoEvent(P[7]);
  ObfDereferenceObjectWithTag(P[7], 0x746C6644u);
  v2 = P[6];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
