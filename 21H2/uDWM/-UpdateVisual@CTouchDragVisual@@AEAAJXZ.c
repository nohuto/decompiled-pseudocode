/*
 * XREFs of ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x1800A4CB0
 * Callers:
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x1800A4E10 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800251AC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x1800A35A4 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x1800A4158 (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 *     ??1Mesh2D@@QEAA@XZ @ 0x1800A42BC (--1Mesh2D@@QEAA@XZ.c)
 *     ?CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800A4348 (-CreateDrawMesh2DInstruction@CTouchDragVisual@@AEAAJPEBUMesh2D@@PEAPEAVCGeometry2dGroupProxy@@PE.c)
 */

__int64 __fastcall CTouchDragVisual::UpdateVisual(CTouchDragVisual *this)
{
  struct CMeshGeometry2dProxy **v1; // r14
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  int v5; // eax
  const struct tagRECT *v6; // rdx
  unsigned int v7; // ebx
  const struct tagRECT *v8; // rdx
  int v9; // eax
  int DrawMesh2DInstruction; // eax
  _QWORD v12[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v13[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v14[32]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v15[48]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v16[144]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = (struct CMeshGeometry2dProxy **)((char *)this + 432);
  v3 = (CBaseObject *)*((_QWORD *)this + 54);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *v1 = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 53);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 53) = 0LL;
  }
  v5 = CRenderDataVisual::ClearInstructions(this);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)this + 94) > 1u )
    {
      Mesh2D::Mesh2D((Mesh2D *)v12, v6);
      Mesh2D::Mesh2D((Mesh2D *)v16, v8);
      v9 = CTouchDragVisualHelper::TriangulatePathGeometry(
             *((float *)this + 75),
             (__int64)this + 352,
             (int *)this + 98,
             v12,
             (__int64)v13,
             (__int64)v14,
             (__int64)v15);
      v7 = v9;
      if ( v9 >= 0 )
      {
        DrawMesh2DInstruction = CTouchDragVisual::CreateDrawMesh2DInstruction(
                                  this,
                                  (const struct Mesh2D *)v12,
                                  (struct CGeometry2dGroupProxy **)this + 53,
                                  v1);
        v7 = DrawMesh2DInstruction;
        if ( DrawMesh2DInstruction < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DrawMesh2DInstruction, 0xE7u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xE4u);
      }
      Mesh2D::~Mesh2D((Mesh2D *)v16);
      Mesh2D::~Mesh2D((Mesh2D *)v12);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xD4u);
  }
  return v7;
}
