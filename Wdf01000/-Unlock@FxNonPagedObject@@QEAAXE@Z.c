void __fastcall FxNonPagedObject::Unlock(FxNonPagedObject *this, unsigned __int8 PreviousIrql, unsigned __int8 a3)
{
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && this[-1].m_ChildEntry.Blink )
    FxVerifierLock::Unlock((FxVerifierLock *)this[-1].m_ChildEntry.Blink, PreviousIrql, a3);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, PreviousIrql);
}
