/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x140305588
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140319A20 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x140363E6C (AlpcpFreeCompletionPacketLookaside.c)
 * Callees:
 *     IoFreeMiniCompletionPacket @ 0x14076CD50 (IoFreeMiniCompletionPacket.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_QWORD *P)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(P[3 * i + 8]);
  ExFreePoolWithTag(P, 0);
}
