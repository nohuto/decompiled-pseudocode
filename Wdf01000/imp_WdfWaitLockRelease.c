void __fastcall imp_WdfWaitLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWAITLOCK__ *Lock)
{
  FxWaitLockInternal *v2; // rcx
  FxWaitLock *pLock; // [rsp+30h] [rbp+8h] BYREF

  pLock = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Lock, 0x1023u, (void **)&pLock);
  v2 = &pLock->FxWaitLockInternal;
  pLock->m_OwningThread = 0LL;
  KeSetEvent(&v2->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
