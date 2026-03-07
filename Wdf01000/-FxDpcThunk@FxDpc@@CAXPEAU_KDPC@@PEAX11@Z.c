void __fastcall FxDpc::FxDpcThunk(_KDPC *Dpc, FxDpc *DeferredContext, void *SystemArgument1, void *SystemArgument2)
{
  FxDpc::DpcHandler(DeferredContext, (_KDPC *)DeferredContext, SystemArgument1, SystemArgument2);
}
