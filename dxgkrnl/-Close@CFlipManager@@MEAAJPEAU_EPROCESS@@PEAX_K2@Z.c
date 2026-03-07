__int64 __fastcall CFlipManager::Close(CFlipManager *this, struct _EPROCESS *a2, void *a3, __int64 a4)
{
  if ( a4 == 1 && (a2 == *((struct _EPROCESS **)this + 6) || a2 == *((struct _EPROCESS **)this + 5)) )
  {
    CPushLock::AcquireLockExclusive((CFlipManager *)((char *)this + 8));
    if ( a2 == *((struct _EPROCESS **)this + 6) )
      CFlipManager::ProcessConsumerDisconnect(this);
    if ( a2 == *((struct _EPROCESS **)this + 5) )
      CFlipManager::ProcessProducerDisconnect(this);
    CPushLock::ReleaseLock((CFlipManager *)((char *)this + 8));
  }
  return 0LL;
}
