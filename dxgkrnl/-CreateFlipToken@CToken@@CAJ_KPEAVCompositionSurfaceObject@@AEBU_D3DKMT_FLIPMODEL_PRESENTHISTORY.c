__int64 __fastcall CToken::CreateFlipToken(
        unsigned __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CToken **a4)
{
  int v8; // ebp
  struct CFlipToken *v10; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v10 = 0LL;
  v8 = CFlipToken::CreateCompleted(a1, this, a3, &v10);
  if ( v8 < 0 )
  {
    CompositionSurfaceObject::SignalGpuFence(this, a1, a3->FenceValue, 1);
    if ( a3->PresentLimitSemaphoreId )
      CompositionSurfaceObject::SignalPresentLimitSemaphore(this, a1);
  }
  else
  {
    *a4 = v10;
  }
  return (unsigned int)v8;
}
