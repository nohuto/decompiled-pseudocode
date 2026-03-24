/*
 * XREFs of ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180011EF8
 * Callers:
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x180011F8C (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800C058C (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 * Callees:
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListEntryBatch@@AEBV?$span@PEAVCBaseDrawListEntry@@$0?0@gsl@@@Z @ 0x1800122F4 (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListEntryBatch@@AEBV-$span@PEAVCBaseDrawListEntry@@.c)
 *     memmove_0 @ 0x1800F4017 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBatchOptimizer::PurgeStateSettingEntriesFromLayer(CBatchOptimizer *this, int a2)
{
  __int64 v2; // rdx
  _DWORD *v3; // rbx
  int v4; // eax
  __int64 v5; // rdi
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((int *)this + a2 + 12);
  v3 = (_DWORD *)((char *)this + 520 * v2);
  v4 = v3[24] - v3[25];
  if ( v4 )
  {
    v5 = v4;
    v6[0] = v4;
    if ( v4 < 0 || (v6[1] = v3 + 30, v3 == (_DWORD *)-120LL) )
    {
      ((void (__fastcall *)(CBatchOptimizer *, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(this, v2);
      __debugbreak();
    }
    CBatchOptimizer::DiscardEntries(*(_QWORD *)(*((_QWORD *)this + 1) + 168LL), v6);
    memmove_0(v3 + 30, &v3[2 * v5 + 30], 8LL * (unsigned int)v3[25]);
    v3[24] = v3[25];
  }
}
