void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  struct CVirtualAddressAllocator *v3; // rbx
  VIDMM_GLOBAL *v6; // rdi
  struct VIDMM_ALLOC *v7; // r9
  unsigned int NumPde; // r14d
  unsigned int v9; // r15d
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // r12
  __int64 v14; // rdi
  PRKPROCESS *v15; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v16; // r8
  struct VIDMM_ALLOC *v17; // rcx
  VIDMM_GLOBAL *v19; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v3 = a2;
  VIDMM_PAGE_DIRECTORY::EvictPageDirectory((VIDMM_PAGE_DIRECTORY *)this, a2, a3, 1u, 1);
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)v3 + 11);
  v19 = v6;
  if ( this[6] )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde(v3, (struct VIDMM_PAGE_DIRECTORY *)this);
    v9 = NumPde;
    if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
      NumPde *= 2;
    v10 = a3;
    v11 = 0LL;
    v12 = 0;
    v13 = *(_QWORD *)(48LL * (*(_DWORD *)this & 7)
                    + 1616 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                    + *((_QWORD *)v6 + 5028)
                    + 136);
    if ( NumPde )
    {
      v14 = 0LL;
      do
      {
        if ( *(_QWORD *)((char *)v7 + v14) )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            if ( (*(_DWORD *)((_BYTE *)this[5] + v11) & 0x400LL) != 0 )
              ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)v19 + 40256), *(PVOID *)((char *)v7 + v14));
            else
              VIDMM_PAGE_TABLE::DestroyPageTable(*(struct VIDMM_ALLOC ***)((char *)v7 + v14), a2);
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*(VIDMM_PAGE_DIRECTORY **)((char *)v7 + v14), a2, v10);
          }
          *(_QWORD *)((char *)this[6] + v14) = 0LL;
          v7 = this[6];
        }
        v10 += v13;
        if ( v12 == v9 )
        {
          v10 = a3;
          v7 = this[6];
        }
        ++v12;
        v11 += 16LL;
        v14 += 8LL;
      }
      while ( v12 < NumPde );
      v6 = v19;
    }
    operator delete(v7);
    v3 = a2;
    this[6] = 0LL;
  }
  if ( this[3] )
  {
    v15 = (PRKPROCESS *)*((_QWORD *)v3 + 12);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v15, &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(v6, this[3], 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    KeUnstackDetachProcess(&ApcState);
    this[3] = 0LL;
  }
  v16 = this[2];
  if ( v16 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation((struct _KTHREAD **)v6, 0LL, v16, 0);
    this[2] = 0LL;
  }
  v17 = this[5];
  if ( v17 )
  {
    operator delete(v17);
    this[5] = 0LL;
  }
}
