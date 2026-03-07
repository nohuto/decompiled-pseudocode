unsigned __int8 __fastcall FxObject::DeleteWorkerAndUnlock(FxObject *this, unsigned __int8 OldIrql, unsigned __int8 a3)
{
  unsigned __int8 PreviousIrql; // [rsp+38h] [rbp+10h] BYREF

  PreviousIrql = OldIrql;
  if ( FxObject::ShouldDeferDisposeLocked(this, &PreviousIrql) )
  {
    FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  }
  else
  {
    FxObject::SetObjectStateLocked(this, FxObjectStateDeletedDisposing);
    if ( FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDeleting, OldIrql, 1u) )
    {
      FxObject::DeletedAndDisposedWorkerLocked(this, OldIrql, 0);
      return 1;
    }
  }
  return 0;
}
