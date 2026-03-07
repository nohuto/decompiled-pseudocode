__int64 __fastcall FlipManagerObject::ConsumerQueryBufferInfo(
        FlipManagerObject *this,
        unsigned __int64 a2,
        struct _LUID *a3,
        void **a4)
{
  CPushLock *v4; // rsi
  CEndpointResourceStateManager *v9; // rcx
  int DxSharedSurfaceHandle; // ebx
  struct CFlipResourceState *ResourceState; // rax
  struct CFlipResourceState *v12; // rdi

  v4 = (FlipManagerObject *)((char *)this + 40);
  DxSharedSurfaceHandle = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( DxSharedSurfaceHandle >= 0 )
  {
    ResourceState = CEndpointResourceStateManager::FindResourceState(v9, a2, (struct _LIST_ENTRY *)((char *)this + 136));
    v12 = ResourceState;
    if ( ResourceState )
    {
      DxSharedSurfaceHandle = CPoolBufferResource::CreateDxSharedSurfaceHandle(
                                *((CPoolBufferResource **)ResourceState + 3),
                                a4);
      if ( DxSharedSurfaceHandle >= 0 )
        *a3 = *(struct _LUID *)(*((_QWORD *)v12 + 3) + 80LL);
    }
    else
    {
      DxSharedSurfaceHandle = -1073741811;
    }
    CPushLock::ReleaseLock(v4);
  }
  return (unsigned int)DxSharedSurfaceHandle;
}
