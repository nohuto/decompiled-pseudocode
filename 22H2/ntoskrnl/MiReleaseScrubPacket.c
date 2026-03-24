/*
 * XREFs of MiReleaseScrubPacket @ 0x1408DBFA0
 * Callers:
 *     MiInitializeScrubPacket @ 0x1408DBEA0 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x1408DBFF0 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x1408DC060 (MiScrubProcesses.c)
 * Callees:
 *     MiReleasePteCopyList @ 0x140323F44 (MiReleasePteCopyList.c)
 *     MiDeleteUltraThreadContext @ 0x140357B5C (MiDeleteUltraThreadContext.c)
 *     MiDereferencePageRuns @ 0x14037E930 (MiDereferencePageRuns.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rcx

  MiDeleteUltraThreadContext(a1 + 48);
  MiReleasePteCopyList(a1 + 176);
  v2 = *(void **)(a1 + 200);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(_QWORD *)(a1 + 216);
  if ( v3 )
    MiDereferencePageRuns(v3);
}
