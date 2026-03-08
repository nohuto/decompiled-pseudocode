/*
 * XREFs of ??1CTransform3DGroup@@MEAA@XZ @ 0x180251998
 * Callers:
 *     ??_ECTransform3DGroup@@MEAAPEAXI@Z @ 0x1801C0A70 (--_ECTransform3DGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18000C0E8 (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 */

void __fastcall CTransform3DGroup::~CTransform3DGroup(CTransform3DGroup *this)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax

  v1 = (__int64)this + 184;
  *(_QWORD *)this = &CTransform3DGroup::`vftable'{for `CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>'};
  *((_QWORD *)this + 23) = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  SAFE_DELETE<CMILMatrix>((void **)this + 26);
  *(_QWORD *)v1 = &CCyclicResourceListEntry::`vftable';
  v3 = v1 + 8;
  v4 = -v1;
  v5 = v3 & -(__int64)(v4 != 0);
  v6 = *(_QWORD *)v5;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD **)((v3 & -(__int64)(v4 != 0)) + 8), *v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::~CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>((struct CResource ***)this);
}
