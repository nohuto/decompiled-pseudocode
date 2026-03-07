void *__fastcall imp_WdfTimerGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFTIMER__ *Timer)
{
  __int64 v2; // rbx
  FxObject *m_Object; // rcx
  FxTimer *pFxTimer; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  pFxTimer = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Timer, 0x1028u, (void **)&pFxTimer);
  m_Object = pFxTimer->m_Object;
  if ( m_Object )
    return FxObject::GetObjectHandleUnchecked(m_Object);
  return (void *)v2;
}
