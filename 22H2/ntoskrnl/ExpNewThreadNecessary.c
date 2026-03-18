/*
 * XREFs of ExpNewThreadNecessary @ 0x1402B7EA0
 * Callers:
 *     ExpQueueWorkItem @ 0x1402B7670 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x140361390 (ExpPartitionCreateThreadIfNecessary.c)
 *     ExpWorkQueueManagerThread @ 0x14083A910 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpNewThreadNecessary(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = *(_DWORD *)(a1 + 712);
  if ( v2 < (2 * *(_DWORD *)(a1 + 716)) >> 1 )
    return 1;
  if ( v2 >= a2 || *(_QWORD *)(a1 + 8) != a1 + 8 )
    return 0;
  return *(_DWORD *)(a1 + 4) || *(int *)(a1 + 716) < 0;
}
