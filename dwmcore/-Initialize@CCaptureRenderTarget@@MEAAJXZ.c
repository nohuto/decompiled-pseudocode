__int64 __fastcall CCaptureRenderTarget::Initialize(CCaptureRenderTarget *this)
{
  *((_BYTE *)this + 1756) = 1;
  CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 216LL), this);
  return 0LL;
}
