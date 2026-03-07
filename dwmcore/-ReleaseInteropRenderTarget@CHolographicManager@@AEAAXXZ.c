void __fastcall CHolographicManager::ReleaseInteropRenderTarget(CHolographicManager *this)
{
  struct CRenderTarget *v1; // rdx
  CHolographicInteropTaskQueue *v3; // rcx
  CResource *v4; // rcx

  v1 = (struct CRenderTarget *)*((_QWORD *)this + 4);
  if ( v1 )
  {
    CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 3) + 216LL), v1);
    v3 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    if ( v3 )
      CHolographicInteropTaskQueue::PostMessageW(v3, 0x15u, 0LL, 0LL, 0LL, 0LL, 0LL);
    v4 = (CResource *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      CResource::InternalRelease(v4);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
}
