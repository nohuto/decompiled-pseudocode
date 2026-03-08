/*
 * XREFs of imp_WdfRequestWdmFormatUsingStackLocation @ 0x1C0035F80
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0001F54 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfRequestWdmFormatUsingStackLocation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _IO_STACK_LOCATION *Stack)
{
  FxIrp *p_m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  if ( !Stack )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  p_m_Irp = &pRequest->m_Irp;
  if ( pRequest == (FxRequest *)-152LL )
    FxVerifierBugCheckWorker(MEMORY[0xFFFFFFFFFFFFFF78], WDF_REQUEST_FATAL_ERROR, 2uLL, (unsigned __int64)Request);
  if ( p_m_Irp->m_Irp->CurrentLocation < 2 )
    FxVerifierBugCheckWorker(pRequest->m_Globals, WDF_REQUEST_FATAL_ERROR, 1uLL, (unsigned __int64)&pRequest->m_Irp);
  pRequest->m_NextStackLocationFormatted = 1;
  CurrentStackLocation = p_m_Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&Stack->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&Stack->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&Stack->Parameters.SetQuota + 6);
  CurrentStackLocation[-1].FileObject = Stack->FileObject;
  CurrentStackLocation[-1].Control = 0;
  FxRequestBase::VerifierSetFormatted(pRequest);
}
