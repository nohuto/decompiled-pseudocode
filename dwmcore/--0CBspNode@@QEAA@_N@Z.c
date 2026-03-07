CBspNode *__fastcall CBspNode::CBspNode(CBspNode *this, char a2)
{
  CMILRefCountImpl *v3; // rcx

  v3 = (CBspNode *)((char *)this + 8);
  *(_QWORD *)this = &CBspNode::`vftable';
  *(_DWORD *)v3 = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = a2;
  CMILRefCountImpl::AddReference(v3);
  return this;
}
