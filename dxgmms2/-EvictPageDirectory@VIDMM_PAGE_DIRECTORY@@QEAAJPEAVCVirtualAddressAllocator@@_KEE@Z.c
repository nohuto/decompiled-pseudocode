/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0095AF0
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C002DE60 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C00958F0 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0095AF0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0001A10 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0091950 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00920C0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C0092CC0 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C00936BC (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0093850 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0095AF0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        __int64 ***this,
        struct VIDMM_PROCESS **a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  unsigned __int64 v5; // rdi
  int *v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int8 v9; // r10
  struct VIDMM_PROCESS **v10; // r11
  int v11; // eax
  unsigned __int64 v12; // rsi
  unsigned int v13; // r9d
  __int64 v14; // rcx
  _DWORD **v15; // rdx
  unsigned int v16; // r14d
  unsigned __int64 v17; // r15
  _DWORD *v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r12
  unsigned int v22; // ebp
  __int64 **v23; // rcx
  __int64 **v24; // r8
  struct VIDMM_ALLOC **v25; // rax
  VIDMM_PAGE_DIRECTORY *v27; // rcx
  __int64 *v28; // rdx
  struct VIDMM_ALLOC **v29; // r10
  enum _DXGK_PAGETABLEUPDATEMODE v30; // eax
  void *v31; // rdi
  __int64 v32; // r8
  unsigned __int64 v33; // [rsp+78h] [rbp-70h]
  unsigned int v34; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+98h] [rbp-50h] BYREF
  void *v36; // [rsp+A0h] [rbp-48h] BYREF

  v5 = a3;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
    return 0LL;
  v11 = *v7;
  v12 = (unsigned __int64)v10[11];
  v13 = ((unsigned int)*v7 >> 7) & 0x1F;
  v14 = *v7 & 7;
  v15 = (_DWORD **)(*(_QWORD *)(v12 + 40224) + 1616LL * v13);
  v35 = v12;
  v36 = v15;
  if ( (v11 & 0x10) != 0 )
    v16 = *((_DWORD *)v10[15] + 8 * v13 + 4);
  else
    v16 = (unsigned int)v15[6 * v14 + 12];
  v34 = v16;
  v17 = v8;
  v18 = v15[6 * v14 + 17];
  if ( v16 )
  {
    v19 = 0LL;
    v20 = 0LL;
    v21 = v16;
    v22 = v16;
    while ( 1 )
    {
      if ( !v9 )
        goto LABEL_11;
      if ( (*(_DWORD *)this & 0x20) != 0 )
        break;
      v27 = (VIDMM_PAGE_DIRECTORY *)this[6][v20];
      if ( v27 )
      {
        VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v27, (struct CVirtualAddressAllocator *)v10, v17, v9, a5);
        v10 = a2;
LABEL_21:
        v9 = a4;
      }
LABEL_11:
      this[5][v19] = 0LL;
      if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
        this[5][2 * v22] = 0LL;
      v17 += (unsigned __int64)v18;
      ++v22;
      ++v20;
      v19 += 2LL;
      if ( !--v21 )
      {
        v15 = (_DWORD **)v36;
        v16 = v34;
        v12 = v35;
        v5 = a3;
        goto LABEL_15;
      }
    }
    v23 = this[5];
    v24 = this[6];
    if ( ((__int64)v23[v19] & 0x400LL) != 0 )
    {
      v28 = v24[v20];
      if ( !v28 )
        goto LABEL_10;
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v35 + 40256), v28);
      this[6][v20] = 0LL;
    }
    else
    {
      v25 = (struct VIDMM_ALLOC **)v24[v20];
      if ( !v25 )
        goto LABEL_10;
      VIDMM_PAGE_TABLE::EvictPageTable(v25, (struct CVirtualAddressAllocator *)v10);
    }
    v10 = a2;
    v9 = a4;
    v23 = this[5];
    v24 = this[6];
LABEL_10:
    if ( (*(_DWORD *)this & 0x1000) != 0 )
    {
      v29 = (struct VIDMM_ALLOC **)v24[v22];
      if ( ((__int64)v23[2 * v22] & 0x400LL) != 0 )
      {
        if ( !v29 )
          goto LABEL_21;
        ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v35 + 40256), v24[v22]);
        this[6][v22] = 0LL;
      }
      else
      {
        if ( !v29 )
          goto LABEL_21;
        VIDMM_PAGE_TABLE::EvictPageTable(v29, (struct CVirtualAddressAllocator *)v10);
      }
      v10 = a2;
      goto LABEL_21;
    }
    goto LABEL_11;
  }
LABEL_15:
  if ( (*v15[56] & 8) == 0 || !a5 )
  {
LABEL_16:
    *((_DWORD *)this[2] + 17) |= 0x200000u;
    *((_BYTE *)this[2] + 82) = 0;
    VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)v12, this[3], 0LL);
    *((_DWORD *)this[2] + 17) &= ~0x200000u;
    return 0LL;
  }
  v34 = 0;
  v35 = 0LL;
  v36 = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
              (VIDMM_PAGE_TABLE_BASE *)this,
              (struct CVirtualAddressAllocator *)v10,
              &v34,
              &v35,
              &v36) >= 0 )
  {
    if ( (*(_BYTE *)(v12 + 40936) & 0x40) != 0 )
      v30 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v30 = (int)(*(_DWORD *)this << 16) >> 29;
    v33 = v5;
    v31 = (void *)v35;
    VIDMM_GLOBAL::UpdatePageTable(
      (VIDMM_GLOBAL *)v12,
      *(_DWORD *)this & 7,
      a2[12],
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      v16,
      0LL,
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      v34,
      v35,
      v30,
      v33,
      4,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
      (VIDMM_PAGE_TABLE_BASE *)this,
      (struct CVirtualAddressAllocator *)a2,
      v32,
      v31,
      v36);
    goto LABEL_16;
  }
  WdLogSingleEntry1(2LL, 6653LL);
  return 3221225473LL;
}
