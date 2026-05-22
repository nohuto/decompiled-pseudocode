/*
 * XREFs of ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x18017076C
 * Callers:
 *     ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x180121910 (-OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     operator___0 @ 0x180170740 (operator___0.c)
 *     ?ClampCursorAttractionDelta@CursorAttraction@@AEAA?AUXMFLOAT2@DirectX@@AEBUtagPOINT@@@Z @ 0x180170914 (-ClampCursorAttractionDelta@CursorAttraction@@AEAA-AUXMFLOAT2@DirectX@@AEBUtagPOINT@@@Z.c)
 *     ?ComputeAverageCursorVelocity@CursorAttraction@@AEAA?AUXMFLOAT2@DirectX@@XZ @ 0x18017099C (-ComputeAverageCursorVelocity@CursorAttraction@@AEAA-AUXMFLOAT2@DirectX@@XZ.c)
 *     ?IsCursorAtRest@CursorAttraction@@AEAA_NXZ @ 0x180170A70 (-IsCursorAtRest@CursorAttraction@@AEAA_NXZ.c)
 *     ?IsPointInRect@CursorAttraction@@AEAA_NAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x180170B04 (-IsPointInRect@CursorAttraction@@AEAA_NAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x180170B30 (-UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z.c)
 */

struct tagPOINT __fastcall CursorAttraction::ApplyCursorAttraction(
        struct tagRECT *this,
        struct tagPOINT *a2,
        const struct tagPOINT *a3,
        _DWORD *a4)
{
  bool v4; // zf
  struct tagPOINT v6; // rcx
  int bottom; // r8d
  int v10; // ecx
  struct tagRECT v11; // xmm1
  CursorAttraction *v12; // rcx
  bool IsPointInRect; // bp
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  __m128 v19; // xmm3
  float v20; // xmm3_4
  struct tagRECT v22; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp+18h] BYREF

  v4 = *a4 == 0;
  v6 = *a3;
  *a2 = *a3;
  if ( !v4 || a4[1] || a4[2] || a4[3] )
  {
    *((struct tagPOINT *)&this[3].top + (unsigned int)this[3].left) = v6;
    bottom = this[2].bottom;
    v10 = bottom;
    v11 = *(struct tagRECT *)a4;
    v22 = *this;
    *this = v11;
    if ( bottom >= (a4[2] - *a4) / 2 )
      v10 = (a4[2] - *a4) / 2;
    if ( bottom >= (a4[3] - a4[1]) / 2 )
      bottom = (a4[3] - a4[1]) / 2;
    this->left += v10;
    this->right -= v10;
    this->top += bottom;
    this->bottom -= bottom;
    if ( operator___0(&v22, this) )
      LOBYTE(this[2].left) = 0;
    CursorAttraction::UpdateAttractionParameters((CursorAttraction *)this, a3);
    IsPointInRect = CursorAttraction::IsPointInRect(v12, a3, this);
    v14 = *(float *)&this[2].right * *(float *)&this[2].right;
    v15 = (float)(a3->x - this[1].left);
    v16 = (float)(a3->y - this[1].top);
    v17 = (float)(v16 * v16) + (float)(v15 * v15);
    if ( IsPointInRect || v14 < v17 )
    {
      if ( LOBYTE(this[2].left) )
      {
        if ( v14 < v17 )
          LOBYTE(this[2].left) = 0;
      }
      else if ( CursorAttraction::IsCursorAtRest((CursorAttraction *)this) && IsPointInRect )
      {
        LOBYTE(this[2].left) = 1;
      }
    }
    else
    {
      CursorAttraction::ClampCursorAttractionDelta(this, &v23, a3);
      CursorAttraction::ComputeAverageCursorVelocity(v18, &v24);
      v19 = _mm_mul_ps((__m128)v24, (__m128)v23);
      v20 = v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
      if ( !LOBYTE(this[2].left) || v20 > 0.0 )
      {
        a2->x += (int)*(float *)&v23;
        a2->y += (int)*((float *)&v23 + 1);
      }
    }
    this[3].left = (this[3].left + 1) % 0xAu;
  }
  return (struct tagPOINT)a2;
}
