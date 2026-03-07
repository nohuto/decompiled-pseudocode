void __fastcall CHolographicManager::ResizeWin32kInteropTexture(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  CHolographicInteropTaskQueue *Ptr; // rcx

  AcquireSRWLockExclusive(this + 13);
  Ptr = (CHolographicInteropTaskQueue *)this[6].Ptr;
  if ( Ptr && LOBYTE(this[30].Ptr) )
    CHolographicInteropTaskQueue::PostMessageW(Ptr, 0x21u, a2, 0LL, 0LL, 0LL, 0LL);
  ReleaseSRWLockExclusive(this + 13);
}
