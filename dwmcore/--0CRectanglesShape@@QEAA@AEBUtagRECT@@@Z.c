/*
 * XREFs of ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z @ 0x1800128E8
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x18007A8C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180012974 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$00$0A@@@QEAA@XZ @ 0x18009226C (--0-$DynArrayIA@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::CRectanglesShape(CRectanglesShape *this, const struct tagRECT *a2)
{
  __int64 v2; // rbx
  float v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CRectanglesShape::`vftable';
  DynArrayIA<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,1,0>::DynArrayIA<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,1,0>((char *)this + 16);
  *((_QWORD *)this + 8) = 0LL;
  do
  {
    v6[v2] = (float)*(&a2->left + v2);
    ++v2;
  }
  while ( v2 < 4 );
  CRectanglesShape::SetSingleRect(this, (const struct MilRectF *)v6);
  return this;
}
