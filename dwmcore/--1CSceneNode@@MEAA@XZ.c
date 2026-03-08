/*
 * XREFs of ??1CSceneNode@@MEAA@XZ @ 0x18024D5FC
 * Callers:
 *     ??_GCSceneNode@@MEAAPEAXI@Z @ 0x18024D6D0 (--_GCSceneNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x18024DCE4 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 */

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
