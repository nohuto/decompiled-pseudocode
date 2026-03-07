__int64 __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  void *v5; // rcx
  unsigned __int64 i; // rdi

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(a1, a3);
  v5 = *(void **)a1;
  *(_WORD *)(a1 + 32) = 1;
  if ( v5 )
  {
    memmove(v5, a2, 8LL * *(unsigned int *)(a1 + 24));
    qsort(*(void **)a1, *(unsigned int *)(a1 + 24), 8uLL, DxgkComparePointers);
    for ( i = 0LL;
          i < *(unsigned int *)(a1 + 24);
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(*(_QWORD *)(*(_QWORD *)a1 + 8 * i++) + 32LL)) )
    {
      ;
    }
    *(_WORD *)(a1 + 32) = 256;
  }
  return a1;
}
