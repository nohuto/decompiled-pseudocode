/*
 * XREFs of ??1?$CAutoDestroy@VCWorkItemQueue@@@@QEAA@XZ @ 0x1C02DC910
 * Callers:
 *     ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C00F6EF4 (-UmfdCallSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C011ACCC (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 */

void __fastcall CAutoDestroy<CWorkItemQueue>::~CAutoDestroy<CWorkItemQueue>(union _SLIST_HEADER **a1)
{
  union _SLIST_HEADER *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CWorkItemQueue::Destroy(v1);
}
