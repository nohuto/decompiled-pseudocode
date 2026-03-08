/*
 * XREFs of ??1CEmptyRegionDrawListBrush@@UEAA@XZ @ 0x180013B18
 * Callers:
 *     ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x1800136D0 (--_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030870 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CEmptyRegionDrawListBrush::~CEmptyRegionDrawListBrush(CEmptyRegionDrawListBrush *this)
{
  FastRegion::CRegion::FreeMemory((CEmptyRegionDrawListBrush *)((char *)this + 88));
  if ( *((_QWORD *)this + 10) )
    std::default_delete<CDrawListBrush>::operator()();
  if ( *((_QWORD *)this + 9) )
    std::default_delete<CDrawListBrush>::operator()();
}
