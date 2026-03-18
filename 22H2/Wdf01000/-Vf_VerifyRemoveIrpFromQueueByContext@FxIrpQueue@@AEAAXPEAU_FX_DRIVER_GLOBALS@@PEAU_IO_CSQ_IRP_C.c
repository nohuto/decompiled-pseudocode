/*
 * XREFs of ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00C6C40
 * Callers:
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0016BC8 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00150E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C0032C78 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0059258 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

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
