bool __fastcall CHolographicManager::AddWin32kInteropTexture(RTL_SRWLOCK *this, struct IUnknown *a2, void *a3)
{
  bool v5; // di
  CHolographicInteropTaskQueue *Ptr; // rcx

  v5 = 0;
  AcquireSRWLockExclusive(this + 13);
  Ptr = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( Ptr && LOBYTE(this[30].Ptr) )
    v5 = CHolographicInteropTaskQueue::PostMessageW(Ptr, 0x1Fu, a2, 0LL, 0LL, 0LL, 0LL);
  ReleaseSRWLockExclusive(this + 13);
  return v5;
}
