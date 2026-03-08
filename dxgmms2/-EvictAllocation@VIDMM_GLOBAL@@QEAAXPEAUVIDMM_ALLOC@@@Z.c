/*
 * XREFs of ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00E2980
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C008B300 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002124 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C009391C (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00E6338 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllocation(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // r15
  _QWORD **v6; // r15
  _QWORD *v7; // rdi
  VIDMM_DEVICE **v8; // rdx

  v3 = **a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v3 + 296));
  v4 = *(_QWORD **)(v3 + 272);
  while ( v4 != (_QWORD *)(v3 + 272) )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    v6 = (_QWORD **)(v5 - 2);
    v7 = *v6;
    while ( v7 != v6 )
    {
      v8 = (VIDMM_DEVICE **)(v7 - 5);
      v7 = (_QWORD *)*v7;
      if ( (*((_BYTE *)v8 + 28) & 3) == 2 )
        VIDMM_GLOBAL::NotifyAllocationEviction(this, v8, 0, 0LL, 0LL);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v3 + 296));
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(v3 + 120) + 24LL))(
    *(_QWORD *)(v3 + 120),
    v3,
    *(_QWORD *)(v3 + 136),
    *(_QWORD *)(v3 + 16),
    **(_QWORD **)(v3 + 512));
  *(_QWORD *)(v3 + 136) = 0LL;
  *(_DWORD *)(v3 + 112) = 1;
  VIDMM_GLOBAL::NotifyAllocationReclaimed(this, (struct _VIDMM_GLOBAL_ALLOC *)v3, 0);
}
