/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x140291968
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140290C60 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1402917C0 (AlpcpFreeCompletionPacketLookaside.c)
 * Callees:
 *     IoFreeMiniCompletionPacket @ 0x1406F4D80 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_QWORD *P)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(P[3 * i + 8]);
  ExFreePoolWithTag(P, 0);
}
