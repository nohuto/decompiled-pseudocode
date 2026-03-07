void __fastcall CGeometryGroup::~CGeometryGroup(CGeometryGroup *this)
{
  __int64 v2; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax

  *(_QWORD *)this = &CGeometryGroup::`vftable'{for `CGeometry'};
  v2 = (__int64)this + 144;
  *((_QWORD *)this + 18) = &CGeometryGroup::`vftable'{for `CCyclicResourceListEntry'};
  CGeometryGroup::UnRegisterNotifiers(this);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 23);
  if ( v3 )
    (**v3)(v3, 1LL);
  *(_QWORD *)v2 = &CCyclicResourceListEntry::`vftable';
  v4 = v2 + 8;
  v5 = -v2;
  v6 = v4 & -(__int64)(v5 != 0);
  v7 = *(_QWORD *)v6;
  if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *(_QWORD **)((v4 & -(__int64)(v5 != 0)) + 8), *v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  CGeometry::~CGeometry((struct CResource **)this);
}
