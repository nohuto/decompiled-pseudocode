void __fastcall CFlipResource::~CFlipResource(__int64 this)
{
  CFlipPropertySetBase *v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax

  *(_QWORD *)this = &CFlipResource::`vftable';
  v2 = *(CFlipPropertySetBase **)(this + 32);
  if ( v2 )
    CFlipPropertySetBase::Release(v2);
  v3 = this + 8;
  v4 = -this;
  v5 = v3 & -(__int64)(v4 != 0);
  v6 = *(_QWORD *)v5;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)((v3 & -(__int64)(v4 != 0)) + 8), *v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
}
