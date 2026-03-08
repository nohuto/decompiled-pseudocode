/*
 * XREFs of ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x18008F5E0
 * Callers:
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18000D6F0 (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18008F1F0 (-AddRenderingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x180207270 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

bool __fastcall CBatchCommand::ApplyRenderState(CBatchCommand *this, struct IDrawListStateSink *a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  switch ( *(_DWORD *)this )
  {
    case 1:
      return CRenderingBatchCommand::ApplyRenderState(this, a2);
    case 2:
      (**(void (__fastcall ***)(struct IDrawListStateSink *, _QWORD))a2)(a2, *((_QWORD *)this + 1));
      return 0;
    case 3:
      return CGroupBatchCommand::ApplyRenderState(this, a2);
    default:
      if ( (unsigned int)(*(_DWORD *)this - 4) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      return CRenderingBatchCommand::ApplyRenderState(this, a2);
  }
}
