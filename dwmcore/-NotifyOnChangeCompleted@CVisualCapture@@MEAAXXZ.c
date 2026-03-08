/*
 * XREFs of ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x180252A70
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6314 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801E3CBC (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 */

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
