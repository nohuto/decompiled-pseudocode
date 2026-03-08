/*
 * XREFs of imp_WdfRegistryClose @ 0x1C0001590
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfRegistryClose(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFKEY__ *Key)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *m_Key; // rcx
  FxRegKey *pKey; // [rsp+30h] [rbp+8h] BYREF

  pKey = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Key, 0x1006u, (void **)&pKey);
  m_Globals = pKey->m_Globals;
  if ( FxVerifierCheckIrqlLevel(m_Globals, 0) < 0 )
  {
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    m_Key = pKey->m_Key;
    pKey->m_Key = 0LL;
    ZwClose(m_Key);
    pKey->DeleteObject(pKey);
  }
}
