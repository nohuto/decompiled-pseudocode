/*
 * XREFs of ?FxDpcThunk@FxDpc@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0023310
 * Callers:
 *     <none>
 * Callees:
 *     ?DpcHandler@FxDpc@@QEAAXPEAU_KDPC@@PEAX1@Z @ 0x1C002323C (-DpcHandler@FxDpc@@QEAAXPEAU_KDPC@@PEAX1@Z.c)
 */

void __fastcall FxDpc::FxDpcThunk(_KDPC *Dpc, FxDpc *DeferredContext, void *SystemArgument1, void *SystemArgument2)
{
  FxDpc::DpcHandler(DeferredContext, (_KDPC *)DeferredContext, SystemArgument1, SystemArgument2);
}
