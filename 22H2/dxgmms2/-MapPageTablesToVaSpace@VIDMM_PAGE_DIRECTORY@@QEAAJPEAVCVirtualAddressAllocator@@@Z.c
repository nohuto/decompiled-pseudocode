/*
 * XREFs of ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BC2A0
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00967D0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BC2A0 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0001008 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C0025FD0 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C0026008 (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C005EDB4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006F458 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C0086618 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BC2A0 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  unsigned int NumPde; // eax
  unsigned int v5; // ebp
  int v6; // r12d
  __int64 i; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // ebx
  __int64 SegmentOffsetInPages; // rax
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  struct VIDMM_ALLOC *v27; // [rsp+A0h] [rbp+8h] BYREF

  NumPde = CVirtualAddressAllocator::GetNumPde(a2, this);
  v5 = 2 * NumPde;
  if ( (*(_DWORD *)this & 0x1020) != 0x1020 )
    v5 = NumPde;
  v6 = 0;
  if ( !v5 )
    return 0LL;
  for ( i = 0LL; ; i += 8LL )
  {
    v8 = *((_QWORD *)this + 6);
    v9 = *(_QWORD *)(i + v8);
    if ( v9 )
    {
      if ( (*(_DWORD *)this & 0x20) == 0 )
      {
        VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(*(VIDMM_PAGE_DIRECTORY **)(i + v8), a2);
        goto LABEL_12;
      }
      if ( !VIDMM_ALLOC::GetGpuVirtualAddress(*(VIDMM_ALLOC **)(v9 + 24), (*(_DWORD *)this >> 7) & 0x1F)
        && !CVirtualAddressAllocator::MapVirtualAddressRange(
              a2,
              v9,
              0LL,
              5u,
              *(unsigned int *)(*(_QWORD *)(v9 + 16) + 16LL),
              0LL,
              *(_QWORD *)(*((_QWORD *)a2 + 11) + 40944LL),
              *(_QWORD *)(*((_QWORD *)a2 + 11) + 40952LL),
              0x1000u,
              (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)1LL,
              0LL,
              v10,
              0LL,
              0) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v12, v11, v13);
        *(_QWORD *)(v25 + 24) = 3011LL;
        WdLogEvent5_WdAssertion(v25);
        return 3221225473LL;
      }
      v14 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 128LL);
      v15 = *((_QWORD *)a2 + 15);
      v16 = 32LL * ((*(_DWORD *)this >> 7) & 0x1F);
      v27 = 0LL;
      v17 = *(_DWORD *)(v16 + v15 + 28);
      VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl((VIDMM_PAGE_TABLE_BASE *)v9);
      SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages((VIDMM_PAGE_TABLE_BASE *)v9);
      v22 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              (__int64)a2,
              v14 - 24,
              (*(_DWORD *)this >> 7) & 0x1F,
              v17,
              SegmentOffsetInPages << 12,
              v19,
              0,
              &v27,
              0LL);
      if ( v22 < 0 )
        break;
    }
LABEL_12:
    if ( ++v6 >= v5 )
      return 0LL;
  }
  v26 = WdLogNewEntry5_WdAssertion(v21, v20, v23);
  *(_QWORD *)(v26 + 24) = 3037LL;
  WdLogEvent5_WdAssertion(v26);
  return (unsigned int)v22;
}
