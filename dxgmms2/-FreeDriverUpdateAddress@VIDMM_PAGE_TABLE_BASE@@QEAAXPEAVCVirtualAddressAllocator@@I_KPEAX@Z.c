/*
 * XREFs of ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C0092CC0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0093288 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0095AF0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00F3B98 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C0092D04 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        void *a4,
        void *a5)
{
  __int64 v5; // r10
  unsigned __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 **v12; // rax

  v5 = *((_QWORD *)a2 + 11);
  if ( (*(_BYTE *)(v5 + 40936) & 0x40) == 0 && (v6 = *(unsigned int *)this, (v7 = (__int16)v6 >> 13) != 0) )
  {
    if ( v7 == 1 && *(struct CVirtualAddressAllocator **)(v5 + 8 * ((v6 >> 7) & 0x1F) + 40416) != a2 )
    {
      v8 = *((_QWORD *)this + 3) + 128LL;
      v9 = *(__int64 **)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8
        || (v10 = *v9, *(__int64 **)(*v9 + 8) != v9)
        || (*(_QWORD *)v8 = v10,
            *(_QWORD *)(v10 + 8) = v8,
            v9[2] = *(_QWORD *)(v5 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4968),
            v11 = 1616LL * ((*(_DWORD *)this >> 7) & 0x1F) + *(_QWORD *)(v5 + 40224) + 472LL,
            v12 = *(__int64 ***)(v11 + 8),
            *v12 != (__int64 *)v11) )
      {
        __fastfail(3u);
      }
      *v9 = v11;
      v9[1] = (__int64)v12;
      *v12 = v9;
      *(_QWORD *)(v11 + 8) = v9;
    }
  }
  else
  {
    VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, *((struct VIDMM_GLOBAL **)a2 + 11), a4, a5);
  }
}
