/*
 * XREFs of EtwExitProcess @ 0x140614368
 * Callers:
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     EtwpCovSampProcessCleanup @ 0x140945750 (EtwpCovSampProcessCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwExitProcess(__int64 a1, __int64 a2)
{
  PADAPTER_OBJECT *v2; // rbx
  struct _DMA_ADAPTER *v4; // rcx
  void *v5; // rbx

  v2 = *(PADAPTER_OBJECT **)(a1 + 1424);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1424) = 0LL;
    if ( *v2 )
      HalPutDmaAdapter(*v2);
    v4 = v2[1];
    if ( v4 )
      HalPutDmaAdapter(v4);
    ExFreePoolWithTag(v2, 0);
  }
  v5 = *(void **)(a1 + 2544);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 2544) = 0LL;
    LOBYTE(a2) = 1;
    EtwpCovSampProcessCleanup(v5, a2);
    ExFreePoolWithTag(v5, 0x56777445u);
  }
}
