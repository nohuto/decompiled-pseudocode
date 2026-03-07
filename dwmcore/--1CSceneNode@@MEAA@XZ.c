void __fastcall CSceneNode::~CSceneNode(CSceneNode *this)
{
  CSceneNode **v2; // rsi
  CSceneNode **i; // rdi

  *(_QWORD *)this = &CSceneNode::`vftable';
  v2 = (CSceneNode **)*((_QWORD *)this + 10);
  for ( i = (CSceneNode **)*((_QWORD *)this + 9); i != v2; ++i )
  {
    if ( *((CSceneNode **)*i + 16) == this )
      CSceneNode::SetParent(*i, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 17);
  CSceneNodeGeneratedT<CSceneNode,CSceneObject>::~CSceneNodeGeneratedT<CSceneNode,CSceneObject>(this);
}
