void __fastcall VIDMM_PAGE_TABLE::EvictPageTable(struct VIDMM_ALLOC **this, struct CVirtualAddressAllocator *a2)
{
  __int64 v3; // rcx
  char v4; // r9
  struct CVirtualAddressAllocator *v5; // r10
  unsigned __int64 v6; // r11
  __int64 v7; // r8
  VIDMM_GLOBAL *v8; // rdi
  __int64 v9; // rdx
  LONG v10; // r9d

  if ( VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
  {
    v7 = *(_QWORD *)(v3 + 16);
    v8 = (VIDMM_GLOBAL *)*((_QWORD *)v5 + 11);
    v9 = *((_QWORD *)v8 + 5028) + 1616LL * ((*(_DWORD *)v3 >> 7) & 0x1F);
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 120) + 80LL) & 0x1000) != 0 )
      *(_QWORD *)(v7 + 128) = 0LL;
    if ( (**(_DWORD **)(v9 + 448) & 8) != 0 && v4 )
    {
      if ( (*(_DWORD *)this & 0x40) != 0 )
        v10 = *(_DWORD *)(v9 + 88);
      else
        v10 = *(_DWORD *)(v9 + 84);
      VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
        (VIDMM_PAGE_TABLE *)this,
        v5,
        0,
        v10,
        v6,
        (struct _DXGK_UPDATEPAGETABLEFLAGS)((*(_DWORD *)this & 0x40 | 0x20u) >> 3));
    }
    *((_DWORD *)this[2] + 17) |= 0x200000u;
    *((_BYTE *)this[2] + 82) = 1;
    VIDMM_GLOBAL::EvictOneAllocation(v8, this[3], 0);
    *((_DWORD *)this[2] + 17) &= ~0x200000u;
  }
}
