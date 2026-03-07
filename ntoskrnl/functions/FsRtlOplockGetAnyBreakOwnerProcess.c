void *__fastcall FsRtlOplockGetAnyBreakOwnerProcess(__int64 *a1)
{
  __int64 v1; // rdi
  void *v2; // rbx
  __int64 v3; // rcx

  if ( !a1 )
    return 0LL;
  v1 = *a1;
  if ( !*a1 )
    return 0LL;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v1 + 152));
  v2 = *(void **)(v1 + 16);
  if ( v2 || (v3 = *(_QWORD *)(v1 + 72), v3 != v1 + 72) && (v2 = *(void **)(v3 + 32)) != 0LL )
    ObfReferenceObjectWithTag(v2, 0x746C6644u);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v1 + 152));
  return v2;
}
