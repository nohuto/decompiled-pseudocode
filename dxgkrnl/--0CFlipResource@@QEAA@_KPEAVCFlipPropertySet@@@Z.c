CFlipResource *__fastcall CFlipResource::CFlipResource(CFlipResource *this, __int64 a2, struct CFlipPropertySet *a3)
{
  CFlipResource *result; // rax
  _QWORD *v4; // rdx

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &CFlipResource::`vftable';
  *((_QWORD *)this + 4) = a3;
  *((_QWORD *)this + 5) = a2;
  if ( a3 )
    ++*((_DWORD *)a3 + 2);
  result = this;
  v4 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v4[1] = v4;
  *v4 = v4;
  return result;
}
