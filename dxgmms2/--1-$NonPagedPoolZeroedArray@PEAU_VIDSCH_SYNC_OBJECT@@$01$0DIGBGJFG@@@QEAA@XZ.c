void __fastcall NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>::~NonPagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,2,945908054>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
}
