/*
 * XREFs of CcPrivateVolumeCacheMapTelemetryCallback @ 0x14087C800
 * Callers:
 *     <none>
 * Callees:
 *     CcGetActiveWorkerCountInPartition @ 0x1403CE3C4 (CcGetActiveWorkerCountInPartition.c)
 */

char __fastcall CcPrivateVolumeCacheMapTelemetryCallback(__int64 a1, __int64 a2)
{
  ++qword_140C5F550;
  qword_140C5F558 += *(unsigned int *)(a2 + 912);
  qword_140C5F560 += *(_QWORD *)(a2 + 992);
  qword_140C5F570 += *(unsigned int *)(a2 + 776);
  qword_140C5F580 += *(_QWORD *)(a2 + 1080);
  qword_140C5F588 += *(_QWORD *)(a2 + 1088);
  CcGetActiveWorkerCountInPartition(a1, a2, &qword_140C5F578);
  return 1;
}
