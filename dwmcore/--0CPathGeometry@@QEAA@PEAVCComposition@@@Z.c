CPathGeometry *__fastcall CPathGeometry::CPathGeometry(CPathGeometry *this, struct CComposition *a2)
{
  CPathGeometry *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 128) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CPathGeometry::`vftable';
  result = this;
  *((_DWORD *)this + 23) = 1065353216;
  *((_QWORD *)this + 18) = 0LL;
  return result;
}
