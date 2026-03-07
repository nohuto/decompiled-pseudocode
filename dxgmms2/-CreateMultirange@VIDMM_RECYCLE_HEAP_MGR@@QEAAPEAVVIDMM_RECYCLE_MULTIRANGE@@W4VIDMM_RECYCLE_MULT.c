PVOID __fastcall VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  PVOID v8; // rax
  PVOID v9; // rbx

  v8 = VIDMM_RECYCLE_HEAP_MGR::AllocateWithStore(
         (VIDMM_RECYCLE_HEAP_MGR *)a1,
         *(struct _LOOKASIDE_LIST_EX **)(a1 + 1320),
         (void **)(a1 + 1656),
         (unsigned int *)(a1 + 1620));
  v9 = v8;
  if ( v8 )
    VIDMM_RECYCLE_MULTIRANGE::Init(v8, a2, a3, a4, a5);
  return v9;
}
