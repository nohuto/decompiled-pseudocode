void __fastcall CSceneNode::OnComponentsChanged(CSceneNode *this)
{
  CSceneComponent **v2; // rsi
  CSceneComponent **i; // rdi

  if ( *((_QWORD *)this + 17) )
  {
    v2 = (CSceneComponent **)*((_QWORD *)this + 13);
    for ( i = (CSceneComponent **)*((_QWORD *)this + 12); i != v2; ++i )
      CSceneComponent::HydrateSpectreResources(*i, this);
    (*(void (__fastcall **)(CSceneNode *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  }
}
