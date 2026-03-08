/*
 * XREFs of ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18027CD98
 * Callers:
 *     ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x1801AEB00 (-GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180237740 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x18027CE18 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Attach@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z @ 0x1800AB9BC (-Attach@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPathData::Open(CPathData *this, struct ID2D1SimplifiedGeometrySink **a2)
{
  volatile __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::Attach(&v6, _InterlockedExchange64((volatile __int64 *)this + 8, 0LL));
  *((_QWORD *)this + 3) = *((_QWORD *)this + 2);
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 72) = 0;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v6);
  v4 = *(_QWORD *)this;
  *((_WORD *)this + 24) = 0;
  (*(void (__fastcall **)(CPathData *))(v4 + 8))(this);
  *((_BYTE *)this + 72) = 1;
  *a2 = this;
  return 0LL;
}
