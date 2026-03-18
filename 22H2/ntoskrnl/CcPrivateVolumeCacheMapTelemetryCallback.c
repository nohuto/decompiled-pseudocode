/*
 * XREFs of CcPrivateVolumeCacheMapTelemetryCallback @ 0x1408815B0
 * Callers:
 *     <none>
 * Callees:
 *     CcGetActiveWorkerCountInPartition @ 0x1403D3964 (CcGetActiveWorkerCountInPartition.c)
 */

char __fastcall CcPrivateVolumeCacheMapTelemetryCallback(__int64 a1, __int64 a2)
{
  ++qword_140C5F9B0;
  qword_140C5F9B8 += *(unsigned int *)(a2 + 912);
  qword_140C5F9C0 += *(_QWORD *)(a2 + 992);
  qword_140C5F9D0 += *(unsigned int *)(a2 + 776);
  qword_140C5F9E0 += *(_QWORD *)(a2 + 1080);
  qword_140C5F9E8 += *(_QWORD *)(a2 + 1088);
  CcGetActiveWorkerCountInPartition(a1, a2, &qword_140C5F9D8);
  return 1;
}
