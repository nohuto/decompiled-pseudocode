/*
 * XREFs of ExpNewThreadNecessary @ 0x14033F670
 * Callers:
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402F6A24 (ExpPartitionCreateThreadIfNecessary.c)
 *     ExpQueueWorkItem @ 0x14033EE40 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExpWorkQueueManagerThread @ 0x140839860 (ExpWorkQueueManagerThread.c)
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
