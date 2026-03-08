/*
 * XREFs of imp_WdfIoTargetCloseForQueryRemove @ 0x1C00510F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0054BC8 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 */

void __fastcall imp_WdfIoTargetCloseForQueryRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  _FX_DRIVER_GLOBALS *v2; // rbx
  FxIoTargetRemote *pTarget; // [rsp+40h] [rbp+8h] BYREF

  pTarget = 0LL;
  v2 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)IoTarget, 0x1201u, (void **)&pTarget);
  if ( v2->FxVerboseOn )
    WPP_IFR_SF_q(v2, 5u, 0xEu, 0x17u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget);
  if ( (int)FxVerifierCheckIrqlLevel(v2, 0) >= 0 )
    FxIoTargetRemote::Close(pTarget, FxIoTargetRemoteCloseReasonQueryRemove);
}
