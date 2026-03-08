/*
 * XREFs of MiWakeLargePageRebuild @ 0x14065BC3C
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x14034FE70 (MiUnlinkNodeLargePageHelper.c)
 *     MiSignalLargePageRebuild @ 0x1403609B4 (MiSignalLargePageRebuild.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140295BC8 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 */

__int64 __fastcall MiWakeLargePageRebuild(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r9
  unsigned __int8 v4; // al
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  unsigned int v8; // ebx

  v3 = *(_QWORD *)(a1 + 16) + 25408LL * a2;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 || *(_BYTE *)(v3 + 3249) || *(_BYTE *)(v3 + 3250) != 8 && (a3 & 1) == 0 )
    return 1LL;
  v4 = PsReferencePartitionSafe(*(_QWORD *)(a1 + 200));
  v8 = v4;
  if ( v4 )
  {
    *(_BYTE *)(v6 + 33) = 1;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 16) = MiRebuildLargePages;
    *(_QWORD *)(v6 + 24) = v5;
    ExQueueWorkItemToPartition((_QWORD *)v6, 4, 0xFFFFFFFF, *(_QWORD *)(v7 + 200));
  }
  return v8;
}
