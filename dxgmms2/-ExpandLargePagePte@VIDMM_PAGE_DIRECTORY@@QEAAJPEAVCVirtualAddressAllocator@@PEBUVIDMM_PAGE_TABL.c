__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_GLOBAL **a3,
        char a4,
        PVOID BaseAddress,
        unsigned int a6,
        struct VIDMM_ALLOC **a7)
{
  __int64 v11; // rbx
  __int64 v12; // rdx
  UINT64 v13; // rsi
  __int64 v14; // r11
  int v15; // r9d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // bl
  __int64 VidMmGlobalAllocFromOwner; // rax
  char v20; // r9
  unsigned int v21; // r10d
  __int64 v22; // r11
  char v23; // r9
  struct VIDMM_ALLOC **PageTable; // rbx
  __int64 v25; // rcx
  int v27; // esi
  _QWORD v28[10]; // [rsp+50h] [rbp-78h] BYREF

  v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6);
  memset(v28, 0, sizeof(v28));
  v12 = *(_QWORD *)v11;
  v13 = 0LL;
  v14 = *((_QWORD *)this + 5);
  v15 = *(_DWORD *)this >> 6;
  LODWORD(v28[7]) = *(_DWORD *)(v11 + 8);
  v16 = *(_QWORD *)(v14 + 16LL * a6);
  v28[6] = v12;
  v28[0] = v16 & 0xFFFFFFFFFFFFFBFFuLL;
  v17 = *(_QWORD *)(v11 + 16);
  HIDWORD(v28[7]) = (v16 >> 5) & 0x1F;
  v18 = v15 & 1;
  LOBYTE(v28[8]) = v15 & 1;
  v28[2] = v17;
  BYTE1(v28[8]) = a4;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v28[7], v12);
  if ( VidMmGlobalAllocFromOwner )
    v13 = (*(_QWORD *)(v22 + 16LL * a6 + 8) << 12) - *(_QWORD *)(VidMmGlobalAllocFromOwner + 128);
  v23 = (v20 & 1) != 0 && !a4;
  PageTable = (struct VIDMM_ALLOC **)CreatePageTable(a2, (v21 >> 7) & 0x1F, v18, v23);
  if ( PageTable )
  {
    v27 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
            (VIDMM_PAGE_TABLE *)PageTable,
            a2,
            (const struct COMMIT_VA_STATE *)v28,
            v13,
            (unsigned __int64)BaseAddress,
            a3[5],
            *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6 + 8) << 12,
            0,
            a7);
    if ( v27 >= 0 )
    {
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 11) + 40256LL),
        *(PVOID *)(*((_QWORD *)this + 6) + 8LL * a6));
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6) = PageTable;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) &= ~0x400uLL;
      VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, a6);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry0(3LL);
      if ( *a7 == PageTable[3] )
        *a7 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 3);
      VIDMM_PAGE_TABLE::DestroyPageTable(PageTable, a2);
      return (unsigned int)v27;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C00768BC);
    WdLogSingleEntry1(6LL, 4993LL);
    DxgkLogInternalTriageEvent(v25, 262145LL);
    return 3221225495LL;
  }
}
