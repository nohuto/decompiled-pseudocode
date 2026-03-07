void __fastcall imp_WdfSpinLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 SpinLock)
{
  void *v2; // rbp
  __int64 Offset; // rcx
  FxSpinLock *v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _QWORD *v7; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxSpinLock *pLock; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  pLock = 0LL;
  if ( !SpinLock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1024uLL);
  LOWORD(Offset) = 0;
  v5 = (FxSpinLock *)(~SpinLock & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (SpinLock & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxSpinLock *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4132 )
  {
    pLock = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pLock, (void *)SpinLock, 0x1024u, Offset);
    v5 = pLock;
  }
  m_Globals = v5->m_Globals;
  if ( v5->m_InterruptLock )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 2u, 0xAu, WPP_FxSpinLockAPI_cpp_Traceguids, (const void *)SpinLock);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    if ( m_Globals->FxVerifierLock )
      v2 = retaddr;
    v5->m_Irql = KeAcquireSpinLockRaiseToDpc(&v5->m_SpinLock.m_Lock);
    if ( v5->m_ObjectSize != 128 && v5 != (FxSpinLock *)-128LL )
    {
      v5[1].__vftable = (FxSpinLock_vtbl *)KeGetCurrentThread();
      v7 = *(_QWORD **)&v5[1].m_Type;
      v7[1] = MEMORY[0xFFFFF78000000320];
      *v7 = v2;
    }
  }
}
