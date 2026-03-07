char __fastcall CcPartitionTelemetryCallback(__int64 a1)
{
  __int64 v1; // r9

  ++qword_140C5F548;
  qword_140C5F568 += MmGetAvailablePagesForPartitionObject(*(_QWORD *)(a1 + 8));
  if ( CcEnablePerVolumeLazyWriter )
  {
    CcForEachPrivateVolumeCacheMap(
      v1,
      (__int64 (__fastcall *)(__int64, __int64, __int64))CcPrivateVolumeCacheMapTelemetryCallback,
      0LL);
  }
  else
  {
    qword_140C5F558 += *(unsigned int *)(v1 + 976);
    qword_140C5F560 += *(_QWORD *)(v1 + 1056);
    qword_140C5F570 += *(unsigned int *)(v1 + 840);
    qword_140C5F580 += *(_QWORD *)(v1 + 1144);
    qword_140C5F588 += *(_QWORD *)(v1 + 1152);
    CcGetActiveWorkerCountInPartition(v1, 0LL, &qword_140C5F578);
  }
  return 1;
}
