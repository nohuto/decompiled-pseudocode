CGeometry2DGroup *__fastcall CGeometry2DGroup::CGeometry2DGroup(
        CGeometry2DGroup *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  CGeometry2DGroup *v3; // r11
  CGeometry2DGroup *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CGeometry2D::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  CCyclicResourceListEntry::CCyclicResourceListEntry((CGeometry2DGroup *)((char *)this + 104), a3[4]);
  *((_QWORD *)v3 + 17) = 0LL;
  *(_QWORD *)v3 = &CGeometry2DGroup::`vftable'{for `CGeometry2DGroupGeneratedT<CGeometry2DGroup,CGeometry2D>'};
  *((_QWORD *)v3 + 13) = &CGeometry2DGroup::`vftable'{for `CCyclicResourceListEntry'};
  result = v3;
  *((_QWORD *)v3 + 18) = 0LL;
  *((_QWORD *)v3 + 19) = 0LL;
  *((_QWORD *)v3 + 20) = 0LL;
  return result;
}
