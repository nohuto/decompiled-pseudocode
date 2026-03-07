void __fastcall CAutoDestroy<CWorkItemQueue>::~CAutoDestroy<CWorkItemQueue>(union _SLIST_HEADER **a1)
{
  union _SLIST_HEADER *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CWorkItemQueue::Destroy(v1);
}
