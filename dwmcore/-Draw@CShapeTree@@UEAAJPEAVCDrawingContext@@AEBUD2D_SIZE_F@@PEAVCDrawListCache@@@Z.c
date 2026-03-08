/*
 * XREFs of ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180091148
 * Callers:
 *     ?Draw@CShapeTree@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A170 (-Draw@CShapeTree@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180090F1C (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x1800911EC (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShapeTree::Draw(
        CShapeTree *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v12; // eax
  unsigned int v13; // ecx

  if ( (**((unsigned __int8 (__fastcall ***)(char *))a2 + 3))((char *)a2 + 24)
    || !*((_DWORD *)a2 + 164) && *((_DWORD *)a2 + 146)
    || CDrawingContext::IsHDRTarget(a2) )
  {
    v12 = CContent::Draw((CShapeTree *)((char *)this - 56), a2, a3, a4);
    v10 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x16u, 0LL);
  }
  else
  {
    v8 = CShapeTree::DrawShapes((CShapeTree *)((char *)this - 152), a2, a3);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1Au, 0LL);
  }
  return v10;
}
