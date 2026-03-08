/*
 * XREFs of ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x18025339C
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A040 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180012974 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x180033270 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800457DC (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180095F40 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801D26C0 (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackContent(CWindowNode *this, struct CDrawingContext *a2)
{
  struct CShape *v4; // rdx
  int WindowClipShape; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rcx
  struct CShape *v13; // [rsp+30h] [rbp-29h] BYREF
  char v14; // [rsp+38h] [rbp-21h]
  _BYTE v15[80]; // [rsp+40h] [rbp-19h] BYREF

  v13 = 0LL;
  v14 = 0;
  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v15);
  if ( *((_QWORD *)this + 99) )
  {
    WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v13);
    v7 = WindowClipShape;
    if ( WindowClipShape < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, WindowClipShape, 0x6B0u, 0LL);
      goto LABEL_9;
    }
    v4 = v13;
  }
  else
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v15, (CWindowNode *)((char *)this + 172));
    CShapePtr::Release((CShapePtr *)&v13);
    v4 = (struct CShape *)v15;
    v14 = 0;
    v13 = (struct CShape *)v15;
  }
  v8 = CDrawingContext::FillShapeWithSolidColor(a2, v4, (const __m128i *)&stru_180383220);
  v10 = v8;
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x69Bu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x6B3u, 0LL);
  }
  else
  {
    *((_BYTE *)a2 + 8095) = 1;
  }
LABEL_9:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v15);
  CShapePtr::Release((CShapePtr *)&v13);
  return v7;
}
