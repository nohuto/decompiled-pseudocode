void __fastcall VIDMM_PAGE_TABLE::DestroyPageTable(struct VIDMM_ALLOC **this, struct CVirtualAddressAllocator *a2)
{
  VIDMM_GLOBAL *v2; // rdi
  PRKPROCESS *v5; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v6; // r8
  struct VIDMM_ALLOC *v7; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v2 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  VIDMM_PAGE_TABLE::EvictPageTable(this, a2);
  if ( this[3] )
  {
    v5 = (PRKPROCESS *)*((_QWORD *)a2 + 12);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v5, &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(v2, this[3], 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    KeUnstackDetachProcess(&ApcState);
    this[3] = 0LL;
  }
  v6 = this[2];
  if ( v6 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation(v2, 0LL, v6, 0);
    this[2] = 0LL;
  }
  v7 = this[4];
  if ( v7 )
  {
    operator delete(v7);
    this[4] = 0LL;
  }
  operator delete(this);
}
