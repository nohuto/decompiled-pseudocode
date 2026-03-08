/*
 * XREFs of ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E06A8
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00FA340 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@EI_K@Z @ 0x1C008AAD8 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C00B5874 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z @ 0x1C00E26AC (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@PEAIPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  int v9; // edi
  __int64 v10; // rcx
  VIDMM_GLOBAL *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_QWORD *)a2 + 30) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      v5 = (_QWORD *)WdLogNewEntry5_WdTrace(v4);
      v5[3] = *((_QWORD *)a2 + 30);
      v5[4] = *((unsigned int *)a2 + 58);
      v5[5] = *((int *)a2 + 59);
    }
    v6 = (_QWORD *)((char *)a2 + 208);
    v7 = *((_QWORD *)a2 + 26);
    if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v7 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 208)
      || (v8 = (_QWORD *)*((_QWORD *)a2 + 27), (_QWORD *)*v8 != v6) )
    {
      __fastfail(3u);
    }
    *v8 = v7;
    v9 = 0;
    *(_QWORD *)(v7 + 8) = v8;
    v10 = *((_QWORD *)a2 + 30);
    *v6 = 0LL;
    *((_QWORD *)a2 + 27) = 0LL;
    (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v10 + 56LL))(v10, a2);
  }
  else
  {
    v9 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, (__int64)a2, 0, 1, 0, -1LL);
    if ( v9 >= 0 )
      goto LABEL_16;
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v11);
    VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)this, 1u, *((_DWORD *)a2 + 17) & 0x3F);
    v9 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, (__int64)a2, 0, 1, 0, -1LL);
    if ( v9 >= 0 )
    {
LABEL_16:
      v16 = 0;
      v17 = 0LL;
      VIDMM_GLOBAL::EvictAllAllocationInList(v11, (struct _LIST_ENTRY *)((char *)this + 3736), &v16, &v17);
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v12);
        v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
        v14[3] = *((_QWORD *)a2 + 30);
        v14[4] = *((unsigned int *)a2 + 58);
        v14[5] = *((int *)a2 + 59);
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v11);
    }
  }
  return (unsigned int)v9;
}
