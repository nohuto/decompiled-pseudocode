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
