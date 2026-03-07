void __fastcall CHolographicExclusiveView::ReleaseSwapChain(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rbx
  struct CResource *Ptr; // rdx
  PVOID v4; // rax
  CHolographicInteropTaskQueue *v5; // rcx

  v1 = this + 51;
  AcquireSRWLockExclusive(this + 51);
  Ptr = (struct CResource *)this[11].Ptr;
  if ( Ptr )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, Ptr);
    this[11].Ptr = 0LL;
    ReleaseSRWLockExclusive(v1);
    v4 = this[8].Ptr;
    if ( v4 )
    {
      v5 = (CHolographicInteropTaskQueue *)*((_QWORD *)v4 + 6);
      if ( v5 )
      {
        if ( *((_BYTE *)v4 + 240) )
          CHolographicInteropTaskQueue::PostMessageW(v5, 0xFu, (struct IUnknown *)this, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  else
  {
    ReleaseSRWLockExclusive(v1);
  }
}
