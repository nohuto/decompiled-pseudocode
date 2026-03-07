_BOOL8 __fastcall VIDMM_PAGE_TABLE::CommitPageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3)
{
  struct VIDMM_ALLOC **v3; // r8
  BOOL v4; // r9d
  struct VIDMM_ALLOC **v5; // r10
  __int64 v6; // r11
  VIDMM_GLOBAL *v7; // rcx
  bool v9; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    v7 = *(VIDMM_GLOBAL **)(v6 + 88);
    v9 = v4;
    return (BOOL)VIDMM_GLOBAL::PageInPageTableOrDirectory(
                   v7,
                   (struct VIDMM_PAGE_TABLE_BASE *)v5,
                   v5[3],
                   (*(_DWORD *)(v6 + 144) & 4) != 0,
                   &v9,
                   v3);
  }
  return v4;
}
