/*
 * XREFs of ?Update@CMeshGeometry2dProxy@@QEAAJPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x1800BE840
 * Callers:
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800A4348 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 *     ?UpdateInstructions@CTetherVisual@@IEAAJXZ @ 0x1800A5834 (-UpdateInstructions@CTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeshGeometry2dProxy::Update(
        CMeshGeometry2dProxy *this,
        const struct MilPoint3F *a2,
        unsigned int a3,
        const struct MilPoint2D *a4,
        unsigned int a5,
        const unsigned int *a6,
        unsigned int a7,
        const unsigned int *a8,
        unsigned int a9)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MilPoint3F *, _QWORD, const struct MilPoint2D *, unsigned int, const unsigned int *, unsigned int, const unsigned int *, unsigned int))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 904LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9);
}
