bool __fastcall CHolographicExclusiveView::ActivateView(CHolographicExclusiveView *this, struct CHolographicClient *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *((_BYTE *)this + 83) )
  {
    *((_BYTE *)this + 80) = 1;
    return *((_BYTE *)this + 80);
  }
  v4 = CHolographicExclusiveView::ActivateSwapChain(this, (__int64)a2);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xD2u, 0LL);
    goto LABEL_6;
  }
  if ( !CHolographicClient::OnExclusiveViewActivate(a2, this) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147467259, 0xD5u, 0LL);
LABEL_6:
    CHolographicExclusiveView::DeactivateSwapChain(this);
  }
  return *((_BYTE *)this + 80);
}
