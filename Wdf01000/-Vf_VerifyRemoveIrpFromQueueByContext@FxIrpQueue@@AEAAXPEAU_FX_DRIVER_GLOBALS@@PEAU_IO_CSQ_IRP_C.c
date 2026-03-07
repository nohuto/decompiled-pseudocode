void __fastcall FxIrpQueue::Vf_VerifyRemoveIrpFromQueueByContext(
        FxIrpQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_CSQ_IRP_CONTEXT *Context)
{
  _IO_CSQ *_a3; // rdx
  _FX_DRIVER_GLOBALS *v6; // rcx
  _IRP *_a1; // rax

  if ( FxDriverGlobals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)this, 0xBu)
     || FxDriverGlobals->FxVerifyDownlevel) )
  {
    _a1 = Context->Irp;
    if ( _a1 && (Context->Type != 1 || Context->Csq != _a3) )
    {
      WPP_IFR_SF_qqq(v6, 2u, 0x10u, 0xAu, WPP_FxIrpQueue_cpp_Traceguids, _a1, Context, _a3);
      FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUEST_FATAL_ERROR, 5uLL, (ULONG_PTR)Context);
    }
  }
}
