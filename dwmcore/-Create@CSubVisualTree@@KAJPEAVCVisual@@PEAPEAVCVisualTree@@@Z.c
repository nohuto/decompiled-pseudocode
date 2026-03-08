/*
 * XREFs of ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x180020FD0
 * Callers:
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180020F00 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1801D05E8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x18003A08C (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ??2CVisualTree@@KAPEAX_K@Z @ 0x18003A3FC (--2CVisualTree@@KAPEAX_K@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18003A504 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C2D30 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubVisualTree::Create(struct CVisual *a1, struct CVisualTree **a2)
{
  unsigned __int64 v4; // rcx
  CVisualTree *v6; // rax
  CVisualTree *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (int)CVisual::GetVisualTree(a1, a2, 0) >= 0 )
    return 0LL;
  v6 = (CVisualTree *)CVisualTree::operator new(v4);
  v7 = v6;
  if ( v6 )
  {
    CVisualTree::CVisualTree(v6, g_pComposition, a1);
    ++CSubVisualTree::s_cSubTrees;
    *(_QWORD *)v7 = &CSubVisualTree::`vftable';
    *((_DWORD *)v7 + 1151) = 0;
    *((_DWORD *)v7 + 1150) = 0;
    *((_DWORD *)v7 + 1149) = 0;
    *((_DWORD *)v7 + 1148) = 0;
    *((_BYTE *)v7 + 4712) = 0;
    CMILRefCountImpl::AddReference((CVisualTree *)((char *)v7 + 8));
  }
  else
  {
    v7 = 0LL;
  }
  v8 = CVisual::CalcRootBounds(*((CLayerVisual **)v7 + 8));
  v9 = v8;
  if ( v8 >= 0 )
  {
    *a2 = v7;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\subvisualtree.cpp",
    (const char *)(unsigned int)v8,
    v10);
  CResource::InternalRelease(v7);
  return v9;
}
