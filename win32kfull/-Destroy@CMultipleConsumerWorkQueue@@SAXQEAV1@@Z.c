/*
 * XREFs of ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C00EF3DC
 * Callers:
 *     ?UmfdCallSessionUninitialize@@YAXXZ @ 0x1C00928DC (-UmfdCallSessionUninitialize@@YAXXZ.c)
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00E717C (-UmfdCallSessionInitialize@@YAJXZ.c)
 *     ??1?$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C0309188 (--1-$CAutoDestroy@VCMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 * Callees:
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C00EF41C (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C00EF474 (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
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
