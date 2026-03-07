CSceneNode *__fastcall CSceneNode::CSceneNode(CSceneNode *this, struct CComposition *a2)
{
  CSceneNode *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *(_QWORD *)this = &CSceneNode::`vftable';
  result = this;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}
