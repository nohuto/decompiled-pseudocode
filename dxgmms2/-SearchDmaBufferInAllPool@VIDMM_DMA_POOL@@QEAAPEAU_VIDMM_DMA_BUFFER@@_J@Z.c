/*
 * XREFs of ?SearchDmaBufferInAllPool@VIDMM_DMA_POOL@@QEAAPEAU_VIDMM_DMA_BUFFER@@_J@Z @ 0x1C00F0480
 * Callers:
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00F0B74 (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall VIDMM_DMA_POOL::SearchDmaBufferInAllPool(VIDMM_DMA_POOL *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v4; // r9
  struct _LIST_ENTRY *v5; // rdx
  struct _LIST_ENTRY *v6; // rdx
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *v8; // rcx

  Flink = VIDMM_DMA_POOL::_DmaPoolsListHead.Flink;
  if ( VIDMM_DMA_POOL::_DmaPoolsListHead.Flink != &VIDMM_DMA_POOL::_DmaPoolsListHead )
  {
    v4 = *(struct _LIST_ENTRY **)(*(_QWORD *)this + 24LL);
    do
    {
      v5 = Flink - 7;
      Flink = Flink->Flink;
      if ( v4 == v5->Flink[1].Blink )
      {
        v6 = v5 + 6;
        v7 = v6->Flink;
        while ( v7 != v6 )
        {
          v8 = v7;
          v7 = v7->Flink;
          if ( v8[10].Flink == a2 )
            return v8;
        }
      }
    }
    while ( Flink != &VIDMM_DMA_POOL::_DmaPoolsListHead );
  }
  return 0LL;
}
