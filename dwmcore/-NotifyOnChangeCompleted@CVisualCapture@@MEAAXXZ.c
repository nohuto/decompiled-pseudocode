void __fastcall CVisualCapture::NotifyOnChangeCompleted(CVisualCapture *this)
{
  struct CVisual *v2; // rdx

  if ( !*((_BYTE *)this + 1912) )
  {
    v2 = (struct CVisual *)*((_QWORD *)this + 234);
    if ( v2 )
    {
      if ( (int)CRenderTarget::SetRootVisual(this, v2) >= 0 )
      {
        CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 216LL), this);
        *((_BYTE *)this + 1912) = 1;
        *((_BYTE *)this + 1756) = 1;
      }
    }
  }
}
