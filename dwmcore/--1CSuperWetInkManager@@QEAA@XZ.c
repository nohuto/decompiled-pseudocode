/*
 * XREFs of ??1CSuperWetInkManager@@QEAA@XZ @ 0x1801B1210
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B0AEC (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetStroke@CSuperWetInkManager@@QEAU12@AEAV?$allocator@USuperWetStroke@CSuperWetInkManager@@@0@@Z @ 0x1801B06C0 (--$_Destroy_range@V-$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@YAXPEAUSuperWetS.c)
 */

void __fastcall CSuperWetInkManager::~CSuperWetInkManager(CSuperWetInkManager *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((__int64)(*((_QWORD *)this + 10) - (_QWORD)v2) >> 3));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<CSuperWetInkManager::SuperWetStroke>>(v3, *((_QWORD *)this + 6));
    std::_Deallocate<16,0>(*((void **)this + 5), 8 * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 5)) >> 3));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 4) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
}
