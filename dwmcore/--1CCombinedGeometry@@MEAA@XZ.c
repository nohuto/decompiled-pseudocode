/*
 * XREFs of ??1CCombinedGeometry@@MEAA@XZ @ 0x18000BF18
 * Callers:
 *     ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x18000BE50 (--_ECCombinedGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x18000C1F0 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 */

void __fastcall CCombinedGeometry::~CCombinedGeometry(CCombinedGeometry *this)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax

  *(_QWORD *)this = &CCombinedGeometry::`vftable'{for `CGeometry'};
  v2 = (__int64)this + 144;
  *((_QWORD *)this + 18) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  CCombinedGeometry::UnRegisterNotifiers(this);
  *(_QWORD *)v2 = &CCyclicResourceListEntry::`vftable';
  v3 = v2 + 8;
  v4 = -v2;
  v5 = v3 & -(__int64)(v4 != 0);
  v6 = *(_QWORD *)v5;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)((v3 & -(__int64)(v4 != 0)) + 8), *v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  CGeometry::~CGeometry(this);
}
