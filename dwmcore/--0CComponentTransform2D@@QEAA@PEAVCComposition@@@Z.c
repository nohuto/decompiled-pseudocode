CComponentTransform2D *__fastcall CComponentTransform2D::CComponentTransform2D(
        CComponentTransform2D *this,
        struct CComposition *a2)
{
  CComponentTransform2D *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CComponentTransform2D::`vftable';
  result = this;
  *((_DWORD *)this + 46) = (_DWORD)FLOAT_1_0;
  *((_DWORD *)this + 47) = (_DWORD)FLOAT_1_0;
  *((_BYTE *)this + 156) = 0;
  *(_OWORD *)((char *)this + 196) = CComponentTransform2D::sc_defaultTransformMatrix;
  *(_QWORD *)((char *)this + 212) = qword_1803E1E80;
  return result;
}
