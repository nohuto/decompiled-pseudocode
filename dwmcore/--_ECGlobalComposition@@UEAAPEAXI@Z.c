/*
 * XREFs of ??_ECGlobalComposition@@UEAAPEAXI@Z @ 0x1801EF4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 */

CGlobalComposition *__fastcall CGlobalComposition::`vector deleting destructor'(CGlobalComposition *this, char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 170);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 172) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 170) = 0LL;
    *((_QWORD *)this + 171) = 0LL;
    *((_QWORD *)this + 172) = 0LL;
  }
  CComposition::~CComposition(this, a2);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
