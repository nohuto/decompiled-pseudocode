CMesh2DEffect *__fastcall CMesh2DEffect::CMesh2DEffect(CMesh2DEffect *this)
{
  CMesh2DEffect *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &CMesh2DEffect::`vftable'{for `ID2D1EffectImpl'};
  *((_OWORD *)this + 2) = _xmm;
  *((_QWORD *)this + 1) = &CMesh2DEffect::`vftable'{for `ID2D1DrawTransform'};
  *((_OWORD *)this + 3) = _xmm;
  *((_QWORD *)this + 2) = &CMesh2DEffect::`vftable'{for `CMILRefCountBaseT<IMILRefCount>'};
  result = this;
  *((_OWORD *)this + 4) = _xmm;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_OWORD *)this + 5) = _xmm;
  *((_QWORD *)this + 12) = 1065353216LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)((char *)this + 116) = 1065353216LL;
  *((_DWORD *)this + 31) = 0;
  return result;
}
