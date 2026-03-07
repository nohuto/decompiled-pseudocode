unsigned __int64 __fastcall imp_WdfDpcGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  __int64 v2; // rbx
  FxObject *m_Object; // rcx
  FxDpc *pFxDpc; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  pFxDpc = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Dpc, 0x1015u, (void **)&pFxDpc);
  m_Object = pFxDpc->m_Object;
  if ( m_Object )
    return FxObject::GetObjectHandleUnchecked(m_Object);
  return v2;
}
