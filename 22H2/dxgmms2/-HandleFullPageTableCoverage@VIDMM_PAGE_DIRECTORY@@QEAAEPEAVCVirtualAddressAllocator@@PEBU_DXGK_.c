/*
 * XREFs of ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C006011C
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FD20 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     Feature_594580792__private_IsEnabledDeviceUsage @ 0x1C001883C (Feature_594580792__private_IsEnabledDeviceUsage.c)
 *     ?AllocatePteOwnerData@VIDMM_GLOBAL@@QEAAPEAUVIDMM_PTE_OWNER_DATA@@XZ @ 0x1C0025FB4 (-AllocatePteOwnerData@VIDMM_GLOBAL@@QEAAPEAUVIDMM_PTE_OWNER_DATA@@XZ.c)
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C00603AC (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
 */

unsigned __int8 __fastcall VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct _DXGK_GPUMMUCAPS *a3,
        const struct COMMIT_VA_STATE *a4,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int8 *a10,
        unsigned __int8 *a11)
{
  unsigned __int8 v11; // si
  VIDMM_GLOBAL *v12; // rbx
  char v13; // bp
  char v14; // r13
  struct VIDMM_PTE_OWNER_DATA *PteOwnerData; // r14
  struct CVirtualAddressAllocator *v18; // r10
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax

  v11 = 0;
  v12 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v13 = 0;
  v14 = 0;
  PteOwnerData = 0LL;
  v18 = a2;
  if ( (*(_QWORD *)a4 & 1) == 0 )
  {
    v14 = 1;
    goto LABEL_18;
  }
  if ( (*(_QWORD *)a4 & 2) != 0 )
  {
    v11 = *((_BYTE *)v12 + 40936) >> 7;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)this & 0x20) != 0 && *((_BYTE *)a4 + 59) )
  {
    if ( (unsigned int)Feature_594580792__private_IsEnabledDeviceUsage() )
    {
      if ( *((_QWORD *)a4 + 8) )
        goto LABEL_17;
      if ( (a3->Value & 0x100) != 0 )
        goto LABEL_12;
      v20 = (((*((_QWORD *)a5 + 5) << 12) - 1LL) & a9) == 0;
    }
    else
    {
      if ( (a3->Value & 0x100) != 0 )
      {
LABEL_12:
        PteOwnerData = VIDMM_GLOBAL::AllocatePteOwnerData(v12);
        if ( PteOwnerData )
        {
          v13 = 1;
        }
        else
        {
          v23 = WdLogNewEntry5_WdWarning(v22, v21);
          WdLogEvent5_WdWarning(v23);
        }
        goto LABEL_17;
      }
      v20 = (((*((_QWORD *)a5 + 5) << 12) - 1LL) & a9) == 0;
    }
    if ( v20 )
      goto LABEL_12;
LABEL_17:
    v18 = a2;
  }
LABEL_18:
  if ( !(v11 | (unsigned __int8)(v13 | v14)) )
    return 0;
  v24 = a8;
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a6) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, v18, a6, a8);
    v24 = a8;
    *a10 = 1;
    *a11 = 1;
  }
  if ( a7 != a6 && (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a7) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a7, v24);
    *a10 = 1;
    *a11 = 1;
  }
  if ( !v14 )
  {
    v25 = *((_QWORD *)this + 5);
    *a10 = 1;
    *(_QWORD *)(v25 + 16LL * a6) |= 1uLL;
    ++*((_DWORD *)this + 1);
    v26 = *((_QWORD *)this + 5);
    v27 = *(_QWORD *)(v26 + 16LL * a6);
    if ( v11 )
    {
      *(_QWORD *)(v26 + 16LL * a6) = v27 | 2;
    }
    else
    {
      *(_QWORD *)(v26 + 16LL * a6) = v27 | 0x400;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6 + 8) = a9 >> 12;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^ (32 * *((_DWORD *)a4 + 13))) & 0x3E0;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 8;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 0x10;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 4;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 0x1F800;
      *((_DWORD *)PteOwnerData + 2) = *((_DWORD *)a4 + 12);
      *(_QWORD *)PteOwnerData = *((_QWORD *)a4 + 5);
      *((_QWORD *)PteOwnerData + 2) = *((_QWORD *)a4 + 2);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6) = PteOwnerData;
    }
  }
  return 1;
}
