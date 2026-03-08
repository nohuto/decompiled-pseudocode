/*
 * XREFs of ?DelayExecution@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@IPEAVVIDMM_PAGING_QUEUE@@KPEA_K@Z @ 0x1C00E1930
 * Callers:
 *     ?VidMmDelayExecution@@YAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@IPEAVVIDMM_PAGING_QUEUE@@KPEA_K@Z @ 0x1C002CAD0 (-VidMmDelayExecution@@YAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@IPEAVVIDMM_PAGING_QUEUE@@KPEA_K@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C008EBA0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::DelayExecution(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        struct VIDMM_PAGING_QUEUE *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  struct VIDMM_PAGING_QUEUE *v6; // rbx
  _QWORD v8[13]; // [rsp+30h] [rbp-68h] BYREF

  v6 = a4;
  if ( !a4 )
    v6 = (struct VIDMM_PAGING_QUEUE *)(*((_QWORD *)a2 + 10) + 176LL * a3);
  memset(v8, 0, 0x58uLL);
  v8[1] = *((_QWORD *)v6 + 17);
  LODWORD(v8[4]) = a5;
  LODWORD(v8[0]) = 217;
  VIDMM_GLOBAL::QueueDeferredCommand(this, v6, (struct _VIDMM_DEFERRED_COMMAND *)v8, 0, a6);
}
