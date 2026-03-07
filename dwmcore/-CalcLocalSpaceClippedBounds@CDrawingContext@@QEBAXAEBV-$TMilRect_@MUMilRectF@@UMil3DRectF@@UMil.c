char __fastcall CDrawingContext::CalcLocalSpaceClippedBounds(__int64 a1, _OWORD *a2, float *a3)
{
  CMILMatrix *TopByReference; // rax
  char result; // al
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  *(_OWORD *)a3 = *a2;
  v11 = 0LL;
  CDrawingContext::GetClipBoundsWorld(a1, (float *)&v11);
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 400));
  result = CMILMatrix::Get2DBoundsUsing2DInverse(TopByReference, (float *)&v11);
  if ( result )
  {
    v7 = *a3;
    if ( *a3 < 0.0 )
    {
      *a3 = 0.0;
      v7 = 0.0;
    }
    v8 = a3[1];
    if ( v8 < 0.0 )
    {
      a3[1] = 0.0;
      v8 = 0.0;
    }
    v9 = a3[2];
    if ( v9 > 0.0 )
    {
      a3[2] = 0.0;
      v9 = 0.0;
    }
    v10 = a3[3];
    if ( v10 > 0.0 )
    {
      a3[3] = 0.0;
      v10 = 0.0;
    }
    if ( v9 <= v7 || v10 <= v8 )
    {
      *((_QWORD *)a3 + 1) = 0LL;
      *(_QWORD *)a3 = 0LL;
    }
  }
  return result;
}
