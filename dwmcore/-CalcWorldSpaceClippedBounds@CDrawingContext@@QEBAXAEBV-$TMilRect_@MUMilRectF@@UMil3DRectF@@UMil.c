__int64 __fastcall CDrawingContext::CalcWorldSpaceClippedBounds(__int64 a1, __int64 a2, float *a3)
{
  CMILMatrix *TopByReference; // rax
  struct MilRectF *v6; // r9
  __int64 result; // rax
  float v8; // xmm4_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF

  v16 = 0LL;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 400));
  CMILMatrix::Transform2DBoundsHelper<1>(TopByReference, v6);
  result = CDrawingContext::GetClipBoundsWorld(a1, &v16);
  v8 = *a3;
  v9 = *(float *)&v16;
  if ( *(float *)&v16 > *a3 )
  {
    *(_DWORD *)a3 = v16;
    v8 = v9;
  }
  v10 = a3[1];
  v11 = *((float *)&v16 + 1);
  if ( *((float *)&v16 + 1) > v10 )
  {
    a3[1] = *((float *)&v16 + 1);
    v10 = v11;
  }
  v12 = a3[2];
  v13 = *((float *)&v16 + 2);
  if ( v12 > *((float *)&v16 + 2) )
  {
    a3[2] = *((float *)&v16 + 2);
    v12 = v13;
  }
  v14 = a3[3];
  v15 = *((float *)&v16 + 3);
  if ( v14 > *((float *)&v16 + 3) )
  {
    a3[3] = *((float *)&v16 + 3);
    v14 = v15;
  }
  if ( v12 <= v8 || v14 <= v10 )
  {
    result = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
    *(_QWORD *)a3 = 0LL;
  }
  return result;
}
