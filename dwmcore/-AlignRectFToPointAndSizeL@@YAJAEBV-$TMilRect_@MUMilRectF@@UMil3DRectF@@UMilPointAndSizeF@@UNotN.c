__int64 __fastcall AlignRectFToPointAndSizeL(float *a1, _DWORD *a2)
{
  unsigned int v4; // ebp
  float *v5; // rcx
  float v6; // xmm0_4
  float v7; // xmm6_4
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  float v11; // xmm0_4
  int v12; // edi
  int v13; // eax
  float v14; // xmm0_4

  v4 = 0;
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a1)
    && (v6 = *v5, *v5 >= -2147483600.0)
    && v6 <= 2147483600.0
    && (v7 = v5[1], v7 >= -2147483600.0)
    && v7 <= 2147483600.0
    && v5[2] <= 2147483600.0
    && v5[3] <= 2147483600.0 )
  {
    v8 = PixelAlign(v6, 0);
    *a2 = v8;
    v9 = v8;
    v10 = PixelAlign(v7, 0);
    v11 = a1[2];
    v12 = v10;
    a2[1] = v10;
    v13 = PixelAlign(v11, 1);
    v14 = a1[3];
    a2[2] = v13 - v9;
    a2[3] = PixelAlign(v14, 1) - v12;
  }
  else
  {
    v4 = -2003304438;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, 0LL, 0, -2003304438, 0xE2u, 0LL);
  }
  return v4;
}
