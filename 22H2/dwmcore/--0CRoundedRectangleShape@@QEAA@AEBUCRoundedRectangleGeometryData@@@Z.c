/*
 * XREFs of ??0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800D3694
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800629A0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800D33A0 (-GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x1800D35F0 (-FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18007F2DC (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F2B9C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CRoundedRectangleShape *__fastcall CRoundedRectangleShape::CRoundedRectangleShape(
        CRoundedRectangleShape *this,
        const struct CRoundedRectangleGeometryData *a2)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CRoundedRectangleShape::`vftable';
  *((_QWORD *)this + 2) = CRoundedRectangleShape::SharedData::Create(a2);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((char *)this + 16);
  return this;
}
