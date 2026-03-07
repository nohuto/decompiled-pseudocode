CAnimation *__fastcall CAnimation::CAnimation(CAnimation *this, struct CComposition *a2)
{
  __int64 v2; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  *((_QWORD *)this + 8) = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 14) = &CAnimation::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 68) = -1;
  *((_QWORD *)this + 33) = ((unsigned __int64)this + 112) & -(__int64)(this != 0LL);
  v2 = *((_QWORD *)a2 + 76);
  *((_QWORD *)this + 17) = v2;
  *((_QWORD *)this + 24) = v2;
  *((_QWORD *)this + 26) = v2;
  return this;
}
