/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F978
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C00238F4 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005F7B8 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F978 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FD20 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0001074 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ExFreeToPagedLookasideList @ 0x1C0026078 (ExFreeToPagedLookasideList.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F978 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0061240 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0062FB0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C006FB5C (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0071370 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C00721CC (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  unsigned __int64 v5; // r12
  int *v8; // rcx
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // r14d
  unsigned __int64 v15; // r15
  char *v16; // rdx
  __int64 v17; // r12
  unsigned int v18; // r10d
  struct VIDMM_ALLOC *v19; // rax
  struct VIDMM_ALLOC *v20; // rax
  __int64 v21; // rdx
  int v22; // r8d
  struct VIDMM_ALLOC *v23; // rax
  __int64 v24; // r8
  VIDMM_PAGE_TABLE *v25; // r10
  enum _DXGK_PAGETABLEUPDATEMODE v27; // eax
  unsigned __int64 v28; // rbx
  unsigned int v29; // r8d
  VIDMM_PAGE_DIRECTORY *v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // [rsp+90h] [rbp-68h] BYREF
  void *v33; // [rsp+98h] [rbp-60h] BYREF
  unsigned __int64 v34; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-50h]
  __int64 v36; // [rsp+B0h] [rbp-48h]
  __int64 v37; // [rsp+B8h] [rbp-40h]

  v5 = a3;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
    return 0LL;
  v9 = *v8;
  v10 = *((_QWORD *)a2 + 11);
  v11 = ((unsigned int)*v8 >> 7) & 0x1F;
  v12 = *v8 & 7;
  v13 = *(_QWORD *)(v10 + 40216) + 1584 * v11;
  v37 = v13;
  if ( (v9 & 0x10) != 0 )
    v14 = *(_DWORD *)(32 * v11 + *((_QWORD *)a2 + 15) + 16);
  else
    v14 = *(_DWORD *)(v13 + 48 * v12 + 88);
  v15 = v5;
  v36 = *(_QWORD *)(v13 + 48 * v12 + 128);
  if ( v14 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v33 = 0LL;
    v18 = v14;
    v34 = v14;
    v32 = v14;
    while ( !a4 )
    {
LABEL_13:
      *(_QWORD *)((char *)this[5] + (_QWORD)v16) = 0LL;
      if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
        *((_QWORD *)this[5] + 2 * v18) = 0LL;
      v15 += v36;
      ++v18;
      v16 += 16;
      v32 = v18;
      v17 += 8LL;
      v33 = v16;
      if ( !--v34 )
      {
        v13 = v37;
        v5 = a3;
        goto LABEL_17;
      }
    }
    if ( (*(_DWORD *)this & 0x20) != 0 )
    {
      v19 = this[6];
      if ( *(_QWORD *)((char *)v19 + v17) )
      {
        if ( (*(_DWORD *)((_BYTE *)this[5] + (_QWORD)v16) & 0x400) != 0 )
        {
          ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v10 + 40256), *(PVOID *)((char *)v19 + v17));
          *(_QWORD *)((char *)this[6] + v17) = 0LL;
        }
        else
        {
          VIDMM_PAGE_TABLE::EvictPageTable(*(VIDMM_PAGE_TABLE **)((char *)v19 + v17), a2, v15, a5);
        }
        v16 = (char *)v33;
      }
      if ( (*(_DWORD *)this & 0x1000) == 0 )
        goto LABEL_12;
      v20 = this[5];
      v21 = 8LL * v32;
      v35 = v21;
      v22 = *((_DWORD *)v20 + 4 * v32);
      v23 = this[6];
      v24 = v22 & 0x400;
      v25 = *(VIDMM_PAGE_TABLE **)((char *)v23 + v21);
      if ( v25 )
      {
        if ( v24 )
        {
          ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v10 + 40256), *(PVOID *)((char *)v23 + v21));
          *(_QWORD *)((char *)this[6] + v35) = 0LL;
        }
        else
        {
          VIDMM_PAGE_TABLE::EvictPageTable(v25, a2, v15, a5);
        }
      }
    }
    else
    {
      v30 = *(VIDMM_PAGE_DIRECTORY **)((char *)this[6] + v17);
      if ( !v30 )
        goto LABEL_13;
      VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v30, a2, v15, a4, a5);
    }
    v16 = (char *)v33;
LABEL_12:
    v18 = v32;
    goto LABEL_13;
  }
LABEL_17:
  if ( (**(_DWORD **)(v13 + 440) & 8) == 0 || !a5 )
  {
LABEL_18:
    *((_DWORD *)this[2] + 19) |= 0x100000u;
    *((_BYTE *)this[2] + 89) = 0;
    VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)v10, this[3], 0);
    *((_DWORD *)this[2] + 19) &= ~0x100000u;
    return 0LL;
  }
  v32 = 0;
  v34 = 0LL;
  v33 = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, a2, &v32, &v34, &v33) >= 0 )
  {
    if ( (*(_BYTE *)(v10 + 40936) & 0x10) != 0 )
      v27 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v27 = (__int16)*(_DWORD *)this >> 13;
    v28 = v34;
    VIDMM_GLOBAL::UpdatePageTable(
      (VIDMM_GLOBAL *)v10,
      *(_DWORD *)this & 7,
      *((struct VIDMM_PROCESS **)a2 + 12),
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      v14,
      0LL,
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      v32,
      v34,
      v27,
      v5,
      (struct _DXGK_UPDATEPAGETABLEFLAGS)4,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, a2, v29, v28, v33);
    goto LABEL_18;
  }
  v31 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v31 + 24) = 6381LL;
  WdLogEvent5_WdError(v31);
  return 3221225473LL;
}
