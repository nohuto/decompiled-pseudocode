/*
 * XREFs of imp_WdfRegistryClose @ 0x1C0003B90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C002E818 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0059258 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfRegistryClose(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Key)
{
  __int64 Offset; // rcx
  FxRegKey *v3; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *m_Key; // rcx
  unsigned __int8 CurrentIrql; // al
  FxRegKey *pKey; // [rsp+58h] [rbp+10h] BYREF

  pKey = 0LL;
  if ( !Key )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1006uLL);
  LOWORD(Offset) = 0;
  v3 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Key & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxRegKey *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4102 )
  {
    pKey = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pKey, (void *)Key, 0x1006u, Offset);
    v3 = pKey;
  }
  m_Globals = v3->m_Globals;
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    FxVerifierDbgBreakPoint(m_Globals);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    m_Key = v3->m_Key;
    v3->m_Key = 0LL;
    ZwClose(m_Key);
    pKey->DeleteObject(pKey);
  }
}
