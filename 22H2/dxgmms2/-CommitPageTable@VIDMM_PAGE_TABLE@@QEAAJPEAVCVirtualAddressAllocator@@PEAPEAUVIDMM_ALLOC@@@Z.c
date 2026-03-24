/*
 * XREFs of ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0060C48
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00723E8 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0001074 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006E840 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitPageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  bool v9; // cf
  int v10; // eax
  __int64 v11; // rdx
  char v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  *a3 = 0LL;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    v7 = *(_QWORD *)(v5 + 88);
    *(_BYTE *)(*((_QWORD *)this + 2) + 89LL) = 0;
    v8 = *((_QWORD *)this + 3);
    v9 = (*(_DWORD *)(v5 + 144) & 4) != 0;
    v13 = 0;
    v10 = VIDMM_GLOBAL::PageInOneAllocation(v7, v8, v9 ? 0 : 7, 0LL, &v13, v6, 0, -1LL);
    v4 = v10;
    if ( v13 )
    {
      return (unsigned int)-1073741267;
    }
    else if ( v10 >= 0 )
    {
      v11 = *((_QWORD *)this + 2);
      if ( (*(_DWORD *)(*(_QWORD *)(v11 + 128) + 80LL) & 0x1000) != 0 )
        *(_QWORD *)(*((_QWORD *)this + 2) + 136LL) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 8LL) + 24LL)
                                                                                               + 104LL))(
                                                       *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 8LL) + 24LL),
                                                       *(_QWORD *)(*(_QWORD *)(v11 + 96) + 24LL));
    }
  }
  return v4;
}
