/*
 * XREFs of imp_WdfFdoLockStaticChildListForIteration @ 0x1C0022150
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C00239A8 (-BeginIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 */

void __fastcall imp_WdfFdoLockStaticChildListForIteration(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxPkgPnp *m_PkgPnp; // rcx
  FxChildList *v5; // rcx
  _WDF_CHILD_LIST_ITERATOR iterator; // [rsp+30h] [rbp-38h] BYREF
  FxDevice *pDevice; // [rsp+70h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Fdo, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( pDevice->m_Legacy || (m_PkgPnp = pDevice->m_PkgPnp, m_PkgPnp->m_Type != 4353) )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxDeviceFdoAPI_cpp_Traceguids, Fdo);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    v5 = *(FxChildList **)&m_PkgPnp[1].m_Type;
    iterator.Size = 40;
    iterator.Flags = 7;
    memset(iterator.Reserved, 0, sizeof(iterator.Reserved));
    FxChildList::BeginIteration(v5, &iterator);
  }
}
