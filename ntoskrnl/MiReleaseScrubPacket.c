/*
 * XREFs of MiReleaseScrubPacket @ 0x140A436D0
 * Callers:
 *     MiInitializeScrubPacket @ 0x140A433C8 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x140A439A0 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14035137C (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx

  MiDeleteUltraThreadContext(a1 + 48);
  v2 = *(void **)(a1 + 176);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
