/*
 * XREFs of ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C002E290
 * Callers:
 *     VidMmUnreferenceDmaBuffer @ 0x1C002D590 (VidMmUnreferenceDmaBuffer.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0041854 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1C01060F8 (VidSchiDiscardQueuePacket.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1C010910C (VidSchUnreferenceDmaBuffer.c)
 * Callees:
 *     ?RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z @ 0x1C001BD7E (-RemoveDMAReferences@VIDMM_GLOBAL@@SAXPEAUVIDMM_ALLOC@@J@Z.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1C010910C (VidSchUnreferenceDmaBuffer.c)
 */

void __fastcall VIDMM_GLOBAL::UnreferenceDmaBuffer(VIDMM_GLOBAL *this, struct _VIDMM_DMA_BUFFER *a2, char a3)
{
  __int64 v4; // rsi
  __int64 i; // rdi
  struct VIDMM_ALLOC *v6; // rcx
  struct VIDMM_ALLOC *v7; // rcx

  if ( a3 )
  {
    VidSchUnreferenceDmaBuffer(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL));
  }
  else
  {
    v4 = *((_QWORD *)a2 + 13);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 36); i = (unsigned int)(i + 1) )
    {
      v6 = *(struct VIDMM_ALLOC **)(v4 + 8 * i);
      if ( v6 )
        VIDMM_GLOBAL::RemoveDMAReferences(v6, 1);
    }
    v7 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 8);
    if ( v7 )
      VIDMM_GLOBAL::RemoveDMAReferences(v7, 1);
    ++*((_DWORD *)a2 + 5);
  }
}
