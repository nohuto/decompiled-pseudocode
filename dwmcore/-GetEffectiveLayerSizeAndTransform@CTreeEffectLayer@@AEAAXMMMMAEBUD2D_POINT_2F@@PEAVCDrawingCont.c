void __fastcall CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
        CTreeEffectLayer *this,
        float a2,
        float a3,
        float a4,
        float a5,
        const struct D2D_POINT_2F *a6,
        struct CDrawingContext *a7,
        struct CMILMatrix *a8,
        struct D2D_SIZE_F *a9)
{
  CMILMatrix *v10; // rcx
  __int64 v11; // rcx
  struct D2D_SIZE_F *v12; // rax
  float v13; // xmm1_4
  CDropShadow *v14; // rcx
  const struct CMILMatrix *v15; // rdx
  _BYTE v16[80]; // [rsp+20h] [rbp-78h] BYREF

  CMILMatrix::SetToIdentity(a8);
  CMILMatrix::Scale(v10, 1.0 / a4, 1.0 / a5, 1.0);
  v11 = *((_QWORD *)this + 32);
  if ( *(_BYTE *)(v11 + 728) )
  {
    if ( *(_BYTE *)(v11 + 729) )
    {
      v14 = *(CDropShadow **)(v11 + 704);
      if ( !v14 || CDropShadow::GetMaskForLayerVisualNoRef(v14) )
      {
        CMILMatrix::Translate(a8, (float)*((int *)this + 4), (float)*((int *)this + 5));
        v15 = (CTreeEffectLayer *)((char *)this + 128);
      }
      else
      {
        CMILMatrix::SetToIdentity((CMILMatrix *)v16);
        CMatrixStack::Top((struct CDrawingContext *)((char *)a7 + 400), (struct CMILMatrix *)v16);
        v15 = (const struct CMILMatrix *)v16;
      }
      CMILMatrix::Multiply(a8, v15);
    }
    else
    {
      CMILMatrix::Translate(a8, *((float *)this + 57) - a6->x, *((float *)this + 58) - a6->y);
    }
    v12 = a9;
    a9->width = *((float *)this + 59) * *((float *)this + 70);
    v13 = *((float *)this + 60) * *((float *)this + 70);
  }
  else
  {
    CMILMatrix::Translate(a8, a2, a3);
    v12 = a9;
    a9->width = *((float *)this + 51) - *((float *)this + 49);
    v13 = *((float *)this + 52) - *((float *)this + 50);
  }
  v12->height = v13;
}
