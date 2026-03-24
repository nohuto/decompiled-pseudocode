/*
 * XREFs of ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A1C0
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C008938C (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0060034 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@EI_K@Z @ 0x1C0085BD0 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0086928 (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  VIDMM_GLOBAL *v4; // rcx
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_QWORD *)a2 + 32) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9);
      v10[3] = *((_QWORD *)a2 + 32);
      v10[4] = *((unsigned int *)a2 + 62);
      v10[5] = *((int *)a2 + 63);
    }
    v11 = (_QWORD *)((char *)a2 + 224);
    v12 = *((_QWORD *)a2 + 28);
    if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v12 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 224)
      || (v13 = (_QWORD *)*((_QWORD *)a2 + 29), (_QWORD *)*v13 != v11) )
    {
      __fastfail(3u);
    }
    *v13 = v12;
    v5 = 0;
    *(_QWORD *)(v12 + 8) = v13;
    v14 = *((_QWORD *)a2 + 32);
    *v11 = 0LL;
    *((_QWORD *)a2 + 29) = 0LL;
    (*(void (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v14 + 56LL))(v14, a2);
  }
  else
  {
    v5 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, (__int64)a2, 0, 1, 0, -1LL);
    if ( v5 >= 0 )
      goto LABEL_5;
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v4);
    VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)this, 1u, *((_DWORD *)a2 + 19) & 0x3F);
    v5 = VIDMM_GLOBAL::AcquireGPUResourcesFromSegmentSet(this, (__int64)a2, 0, 1, 0, -1LL);
    if ( v5 >= 0 )
    {
LABEL_5:
      VIDMM_GLOBAL::EvictAllAllocationInList(v4, (struct _LIST_ENTRY *)((char *)this + 3736), v6);
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v7);
        v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
        v16[3] = *((_QWORD *)a2 + 32);
        v16[4] = *((unsigned int *)a2 + 62);
        v16[5] = *((int *)a2 + 63);
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v4);
    }
  }
  return (unsigned int)v5;
}
