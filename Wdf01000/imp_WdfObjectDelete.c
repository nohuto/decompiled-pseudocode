void __fastcall imp_WdfObjectDelete(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxObject *pObject; // [rsp+50h] [rbp+8h] BYREF

  pObject = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Object, 0x1000u, (void **)&pObject);
  m_Globals = pObject->m_Globals;
  if ( (pObject->m_ObjectFlags & 2) != 0 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxObjectAPI_cpp_Traceguids, Object, -1073741535);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    pObject->DeleteObject(pObject);
  }
}
