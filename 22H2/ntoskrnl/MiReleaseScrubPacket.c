/*
 * XREFs of MiReleaseScrubPacket @ 0x140A463A4
 * Callers:
 *     MiInitializeScrubPacket @ 0x140A4609C (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x140A46670 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x1402E92A4 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx

  MiDeleteUltraThreadContext(a1 + 48);
  v2 = *(void **)(a1 + 176);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
