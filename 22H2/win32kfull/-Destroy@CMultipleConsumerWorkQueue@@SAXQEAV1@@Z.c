/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C00B71CC
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00A552C (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ?UmfdCallSessionUninitialize@@YAXXZ @ 0x1C00BA4B0 (-UmfdCallSessionUninitialize@@YAXXZ.c)
 *     ??1?$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C0307428 (--1-$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 * Callees:
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C00B720C (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C00B7264 (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 */

void __fastcall CMultipleConsumerWorkQueue::Destroy(void **pv)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *pv;
  if ( v2 )
    CWorkItemQueue::Destroy(v2);
  v3 = pv[1];
  if ( v3 )
    CEventPool::Destroy(v3);
  EngFreeMem(pv);
}
