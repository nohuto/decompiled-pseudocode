/*
 * XREFs of ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F3AB4
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800B79B0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180012FEC (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x180067ED0 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C876C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800CC534 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800E5E44 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x180177054 (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackContent(CWindowNode *this, struct CDrawingContext *a2)
{
  struct CShape *v4; // rdx
  int WindowClipShape; // eax
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  struct CShape *v11; // [rsp+30h] [rbp-19h] BYREF
  char v12; // [rsp+38h] [rbp-11h]
  _BYTE v13[80]; // [rsp+40h] [rbp-9h] BYREF

  v11 = 0LL;
  v12 = 0;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v13);
  if ( *((_QWORD *)this + 97) )
  {
    WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v11);
    v7 = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, WindowClipShape, 0x73Fu, 0LL);
      goto LABEL_11;
    }
    v4 = v11;
  }
  else
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v13, (CWindowNode *)((char *)this + 164));
    CShapePtr::Release((CShapePtr *)&v11);
    v4 = (struct CShape *)v13;
    v12 = 0;
    v11 = (struct CShape *)v13;
  }
  v8 = CDrawingContext::FillShapeWithSolidColor(a2, v4, (const __m128i *)&stru_1802F0A50);
  v7 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x727u, 0LL);
  else
    *((_BYTE *)a2 + 5951) = 1;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v7, 0x742u, 0LL);
LABEL_11:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v13);
  CShapePtr::Release((CShapePtr *)&v11);
  return (unsigned int)v7;
}
