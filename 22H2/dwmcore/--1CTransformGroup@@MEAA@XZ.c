/*
 * XREFs of ??1CTransformGroup@@MEAA@XZ @ 0x18001B0F4
 * Callers:
 *     ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x18001B0B0 (--_GCTransformGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x1800CB1FC (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 */

void __fastcall CTransformGroup::~CTransformGroup(CTransformGroup *this)
{
  CTransformGroup **v2; // rdx
  CTransformGroup **v3; // rax

  *(_QWORD *)this = &CTransformGroup::`vftable'{for `CTransformGroupGeneratedT<CTransformGroup,CTransform>'};
  *((_QWORD *)this + 22) = &CTransformGroup::`vftable'{for `CCyclicResourceListEntry'};
  SAFE_DELETE<CMILMatrix>((char *)this + 200);
  *((_QWORD *)this + 22) = &CCyclicResourceListEntry::`vftable';
  v2 = (CTransformGroup **)*((_QWORD *)this + 23);
  if ( v2[1] != (CTransformGroup *)((char *)this + 184)
    || (v3 = (CTransformGroup **)*((_QWORD *)this + 24), *v3 != (CTransformGroup *)((char *)this + 184)) )
  {
    __fastfail(3u);
  }
  *v3 = (CTransformGroup *)v2;
  v2[1] = (CTransformGroup *)v3;
  CTransformGroupGeneratedT<CTransformGroup,CTransform>::~CTransformGroupGeneratedT<CTransformGroup,CTransform>(this);
}
