void __fastcall CProjectedShadowReceiver::SetReceivingVisual(CVisual **this, struct CVisual *a2)
{
  CProjectedShadowScene **v4; // rbp
  CProjectedShadowScene **i; // rsi
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // rax

  if ( a2 != this[8] )
  {
    if ( this[8] )
    {
      CProjectedShadowReceiver::InvalidateMaskContent((CProjectedShadowReceiver *)this);
      v4 = (CProjectedShadowScene **)this[10];
      for ( i = (CProjectedShadowScene **)this[9]; i != v4; ++i )
      {
        ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(*i, (const struct CProjectedShadowReceiver *)this);
        *((_QWORD *)ReceiverEntry + 3) = 0LL;
        std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear((char *)ReceiverEntry + 8);
      }
      CVisual::RemoveProjectedShadowReceiver(this[8], (struct CProjectedShadowReceiver *)this);
    }
    this[8] = a2;
    if ( a2 )
    {
      CVisual::AddProjectedShadowReceiver(a2, (struct CProjectedShadowReceiver *)this);
      CProjectedShadowReceiver::InvalidateMaskContent((CProjectedShadowReceiver *)this);
    }
  }
}
