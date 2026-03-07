void __fastcall CSceneNode::OnChildrenChanged(CSceneNode *this)
{
  CSceneNode **v1; // rsi
  CSceneNode **i; // rdi

  v1 = (CSceneNode **)*((_QWORD *)this + 10);
  for ( i = (CSceneNode **)*((_QWORD *)this + 9); i != v1; ++i )
    CSceneNode::SetParent(*i, this);
  if ( *((_QWORD *)this + 17) )
    (*(void (__fastcall **)(CSceneNode *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
}
