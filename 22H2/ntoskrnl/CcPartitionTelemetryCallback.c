/*
 * XREFs of CcPartitionTelemetryCallback @ 0x140880BE0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetAvailablePagesForPartitionObject @ 0x14036E010 (MmGetAvailablePagesForPartitionObject.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x1403D0810 (CcForEachPrivateVolumeCacheMap.c)
 *     CcGetActiveWorkerCountInPartition @ 0x1403D3964 (CcGetActiveWorkerCountInPartition.c)
 */

char __fastcall CcPartitionTelemetryCallback(__int64 a1)
{
  __int64 v1; // r9

  ++qword_140C5F9A8;
  qword_140C5F9C8 += MmGetAvailablePagesForPartitionObject(*(_QWORD *)(a1 + 8));
  if ( CcEnablePerVolumeLazyWriter )
  {
    CcForEachPrivateVolumeCacheMap(
      v1,
      (__int64 (__fastcall *)(__int64, __int64, __int64))CcPrivateVolumeCacheMapTelemetryCallback,
      0LL);
  }
  else
  {
    qword_140C5F9B8 += *(unsigned int *)(v1 + 976);
    qword_140C5F9C0 += *(_QWORD *)(v1 + 1056);
    qword_140C5F9D0 += *(unsigned int *)(v1 + 840);
    qword_140C5F9E0 += *(_QWORD *)(v1 + 1144);
    qword_140C5F9E8 += *(_QWORD *)(v1 + 1152);
    CcGetActiveWorkerCountInPartition(v1, 0LL, &qword_140C5F9D8);
  }
  return 1;
}
