/*
 * XREFs of IopSessionChangeWorker @ 0x1402D2EA0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyWithProcessing @ 0x1402D2F20 (ExNotifyWithProcessing.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     MmSetSessionObjectIoEvent @ 0x14075E414 (MmSetSessionObjectIoEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
