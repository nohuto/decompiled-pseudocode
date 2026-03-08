/*
 * XREFs of ExpPartitionCreateThreadIfNecessary @ 0x1402F6A24
 * Callers:
 *     ExpTryQueueWorkItem @ 0x140308AAC (ExpTryQueueWorkItem.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExpNewThreadNecessary @ 0x14033F670 (ExpNewThreadNecessary.c)
 */

LONG __fastcall ExpPartitionCreateThreadIfNecessary(__int64 a1, __int64 a2, __int64 a3)
{
  LONG result; // eax
  unsigned __int16 *v4; // r9
  __int64 v5; // r10

  result = ExpNewThreadNecessary(a3, *(unsigned int *)(a3 + 720), a3, a2);
  if ( (_BYTE)result )
    return KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL * *v4) + 16LL), 0, 0);
  return result;
}
