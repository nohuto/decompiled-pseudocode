void __fastcall CHolographicExclusiveView::DeactivateView(
        CHolographicExclusiveView *this,
        struct CHolographicClient *a2)
{
  if ( !*((_BYTE *)this + 80) || *((_BYTE *)this + 83) )
  {
    *((_BYTE *)this + 80) = 0;
  }
  else
  {
    CHolographicClient::OnExclusiveViewDeactivate(a2, this);
    CHolographicExclusiveView::DeactivateSwapChain(this);
  }
}
