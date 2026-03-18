/*
 * XREFs of ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1800EB170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E247C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x1800EB234 (--1CGeometry@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801051B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CRegionGeometry *__fastcall CRegionGeometry::`scalar deleting destructor'(CRegionGeometry *this, char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 20) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xB0uLL);
    else
      operator delete(this);
  }
  return this;
}
