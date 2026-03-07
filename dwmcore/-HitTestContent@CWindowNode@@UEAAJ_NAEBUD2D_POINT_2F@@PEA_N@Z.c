__int64 __fastcall CWindowNode::HitTestContent(CWindowNode *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // r14d
  float v11; // xmm4_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  bool v14; // al
  float x; // xmm2_4
  float y; // xmm3_4
  float a; // xmm0_4
  __m128i *TouchTargetBounds; // rax
  float v20; // xmm4_4
  float v21; // xmm5_4
  UINT32 v22; // eax
  int v23; // eax
  float v24; // xmm1_4
  __m128 v25; // xmm2
  UINT32 v26; // eax
  __m128 v27; // xmm2
  unsigned __int64 *v28; // rax
  CGeometry *v29; // rcx
  float v30; // [rsp+38h] [rbp-29h]
  float v31; // [rsp+38h] [rbp-29h]
  D2D_POINT_2U v32[2]; // [rsp+40h] [rbp-21h] BYREF
  struct _D3DCOLORVALUE v33; // [rsp+50h] [rbp-11h] BYREF
  float v34[4]; // [rsp+60h] [rbp-1h] BYREF

  v8 = CVisual::HitTestContent(this, 0, a3, a4);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x43Cu, 0LL);
  }
  else if ( !*a4 && CWindowNode::ShouldHitTest(this) )
  {
    v11 = (float)*((int *)this + 183);
    v12 = (float)*((int *)this + 184);
    v13 = (float)*((int *)this + 185);
    v34[0] = (float)*((int *)this + 182);
    v34[1] = v11;
    v34[2] = v12;
    v34[3] = v13;
    v14 = IsPointInRect(a3, (const struct MilRectF *)v34);
    *a4 = v14;
    x = a3->x;
    y = a3->y;
    if ( !v14 )
    {
      if ( a2 )
      {
        TouchTargetBounds = CVisual::GetTouchTargetBounds((__int64)this, (__m128i *)&v33);
        if ( IsPointInRect(a3, (const struct MilRectF *)TouchTargetBounds) )
        {
          *a4 = 1;
          if ( v21 <= x )
          {
            if ( x >= v12 )
              x = v12 - 1.0;
          }
          else
          {
            x = v21;
          }
          if ( v20 <= y )
          {
            if ( y >= v13 )
              y = v13 - 1.0;
          }
          else
          {
            y = v20;
          }
        }
      }
    }
    if ( !*a4 )
      goto LABEL_43;
    if ( *((_BYTE *)this + 895) && (*((_BYTE *)this + 852) & 0xA) != 0 )
    {
      if ( (LODWORD(x) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v23 = (int)x;
        v24 = x;
        v25 = 0LL;
        v25.m128_f32[0] = (float)v23 - v24;
        v22 = v23 - _mm_cmple_ss(v25, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      }
      else
      {
        v30 = x + 6291456.25;
        v22 = (int)(LODWORD(v30) << 10) >> 11;
      }
      v32[0].x = v22;
      if ( (LODWORD(y) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v27 = 0LL;
        v27.m128_f32[0] = (float)(int)y - y;
        v26 = (int)y - _mm_cmple_ss(v27, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      }
      else
      {
        v31 = y + 6291456.25;
        v26 = (int)(LODWORD(v31) << 10) >> 11;
      }
      v32[0].y = v26;
      v28 = CPtrArrayBase::operator[]((__int64 *)this + 97, 0LL);
      CGdiSpriteBitmap::GetPixelColor((CGdiSpriteBitmap *)v28, &v33, v32);
      if ( (*((_BYTE *)this + 852) & 2) != 0 )
      {
        if ( *((_BYTE *)this + 893) )
        {
          v32[0].x = LODWORD(v33.b);
          v32[0].y = LODWORD(v33.g);
          v32[1].x = LODWORD(v33.r);
          v32[1].y = LODWORD(v33.a);
          v33.r = v33.b;
          LODWORD(v33.a) = _mm_shuffle_ps(*(__m128 *)&v32[0].x, *(__m128 *)&v32[0].x, 255).m128_u32[0];
          LODWORD(v33.g) = _mm_shuffle_ps(*(__m128 *)&v32[0].x, *(__m128 *)&v32[0].x, 85).m128_u32[0];
          LODWORD(v33.b) = _mm_shuffle_ps(*(__m128 *)&v32[0].x, *(__m128 *)&v32[0].x, 170).m128_u32[0];
        }
        *a4 = !CColorKey::IsColorKey((CWindowNode *)((char *)this + 800), &v33);
      }
      if ( !*a4 || (*((_BYTE *)this + 852) & 8) != 0 && (a = v33.a, *a4 = v33.a > 0.0, a <= 0.0) )
      {
LABEL_43:
        if ( *((_BYTE *)this + 896) )
        {
          *(_QWORD *)&v33.r = 0LL;
          v29 = (CGeometry *)*((_QWORD *)this + 109);
          LOBYTE(v33.b) = 0;
          if ( v29
            && (CGeometry::GetShapeData(v29, (const struct D2D_SIZE_F *)((char *)this + 140), (struct CShapePtr *)&v33),
                *(_QWORD *)&v33.r) )
          {
            CShapePtr::FillContainsPoint((CShape **)&v33, a3, a4);
          }
          else
          {
            *a4 = IsPointInRect(a3, (const struct MilRectF *)v34);
          }
          CShapePtr::Release((CShapePtr *)&v33);
        }
      }
    }
  }
  return v10;
}
