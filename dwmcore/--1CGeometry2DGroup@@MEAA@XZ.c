/*
 * XREFs of ??1CGeometry2DGroup@@MEAA@XZ @ 0x18012E0BE
 * Callers:
 *     ??_ECGeometry2DGroup@@MEAAPEAXI@Z @ 0x18012A300 (--_ECGeometry2DGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGeometry2DGroup::~CGeometry2DGroup(CGeometry2DGroup *this)
{
  unsigned __int64 v1; // r8
  __int64 v2; // rdx
  _QWORD *v3; // rax

  *(_QWORD *)this = &CGeometry2DGroup::`vftable'{for `CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>'};
  *((_QWORD *)this + 13) = &CCyclicResourceListEntry::`vftable';
  v1 = ((unsigned __int64)this + 112) & -(__int64)((CGeometry2DGroup *)((char *)this + 104) != 0LL);
  v2 = *(_QWORD *)v1;
  if ( *(_QWORD *)(*(_QWORD *)v1 + 8LL) != v1
    || (v3 = *(_QWORD **)((((unsigned __int64)this + 112) & -(__int64)((CGeometry2DGroup *)((char *)this + 104) != 0LL))
                        + 8),
        *v3 != v1) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>::~CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>(this);
}
