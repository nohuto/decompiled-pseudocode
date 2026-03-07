CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CWindowNode::`vftable';
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_DWORD *)this + 200) = 1065353216;
  *((_DWORD *)this + 201) = 1065353216;
  *((_DWORD *)this + 202) = 1065353216;
  *(_QWORD *)((char *)this + 812) = 1065353216LL;
  result = this;
  *(_QWORD *)((char *)this + 820) = 0LL;
  *((_DWORD *)this + 207) = 0;
  *((_BYTE *)this + 832) = 0;
  return result;
}
