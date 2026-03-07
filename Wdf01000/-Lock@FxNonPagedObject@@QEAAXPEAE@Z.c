void __fastcall FxNonPagedObject::Lock(FxNonPagedObject *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && this[-1].m_ChildEntry.Blink )
    FxVerifierLock::Lock((FxVerifierLock *)this[-1].m_ChildEntry.Blink, PreviousIrql, a3);
  else
    *PreviousIrql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
}
