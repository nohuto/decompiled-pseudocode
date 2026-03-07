void __fastcall FxSpinLock::FxSpinLock(
        FxSpinLock *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 ExtraSize)
{
  FX_SPIN_LOCK_HISTORY *History; // rax
  int v5; // edx
  FX_SPIN_LOCK_HISTORY *v6; // rbx

  FxObject::FxObject(this, 0x1024u, ((ExtraSize + 15) & 0xFFF0) + 128, FxDriverGlobals);
  this->__vftable = (FxSpinLock_vtbl *)FxSpinLock::`vftable';
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  *(_WORD *)&this->m_Irql = 0;
  History = FxSpinLock::GetHistory(this);
  v6 = History;
  if ( History )
  {
    memset(History, v5, sizeof(FX_SPIN_LOCK_HISTORY));
    v6->CurrentHistory = v6->History;
  }
}
