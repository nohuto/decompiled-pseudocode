/*
 * XREFs of ??1?$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02DC8CC
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00F6EF4 (-UmfdCallSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C011AC34 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 */

void __fastcall CAutoDestroy<CMultipleConsumerWorkQueue>::~CAutoDestroy<CMultipleConsumerWorkQueue>(void ***a1)
{
  void **v1; // rcx

  v1 = *a1;
  if ( v1 )
    CMultipleConsumerWorkQueue::Destroy(v1);
}
