/*
 * XREFs of ??1CNineGridDrawListBrush@@UEAA@XZ @ 0x180030930
 * Callers:
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x18002EFD0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x180030960 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??1CoordMap@@QEAA@XZ @ 0x180030A74 (--1CoordMap@@QEAA@XZ.c)
 */

void __fastcall CNineGridDrawListBrush::~CNineGridDrawListBrush(CNineGridDrawListBrush *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  CoordMap::~CoordMap((CNineGridDrawListBrush *)((char *)this + 112));
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
    std::default_delete<CDrawListBrush>::operator()(v2, v3);
}
