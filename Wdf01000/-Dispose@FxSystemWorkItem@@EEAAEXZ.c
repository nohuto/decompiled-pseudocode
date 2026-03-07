unsigned __int8 __fastcall FxSystemWorkItem::Dispose(FxSystemWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  v4 = irql;
  this->m_RunningDown = 1;
  FxNonPagedObject::Unlock(this, v4, v5);
  FxSystemWorkItem::DecrementWorkItemQueued(this);
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&this->m_RemoveEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
  return 1;
}
