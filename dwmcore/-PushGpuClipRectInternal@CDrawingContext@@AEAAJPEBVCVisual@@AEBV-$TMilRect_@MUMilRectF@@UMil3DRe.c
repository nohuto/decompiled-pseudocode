__int64 __fastcall CDrawingContext::PushGpuClipRectInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        enum D2D1_ANTIALIAS_MODE a4,
        char a5)
{
  char v5; // r15
  float v9; // xmm6_4
  float v10; // xmm6_4
  int v11; // ebx
  int v12; // eax
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm11_4
  int v17; // eax
  float v18; // xmm0_4
  float v19; // xmm8_4
  float v20; // xmm0_4
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // ebx
  unsigned int v24; // edi
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // r8
  __int128 v32; // [rsp+30h] [rbp-98h] BYREF

  v5 = 0;
  if ( a2 )
  {
    *((_QWORD *)&v32 + 1) = a2;
    LODWORD(v32) = 1;
    v28 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)(a1 + 368), &v32);
    v23 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xBBFu, 0LL);
      return v23;
    }
    v5 = 1;
  }
  if ( !a5 && CScopedClipStack::HasGpuClipsInScope((CScopedClipStack *)(a1 + 896)) )
  {
    v26 = CD2DClipStack::Push((CD2DClipStack *)(a1 + 3184), (const struct MilRectF *)a3, a4);
    v23 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xD2u, 0LL);
      v24 = v23;
      goto LABEL_35;
    }
LABEL_18:
    ++*(_QWORD *)(*(_QWORD *)(a1 + 904) - 184LL);
    *(_BYTE *)(a1 + 8169) = 1;
    return v23;
  }
  v9 = *(float *)a3;
  if ( a4 == D2D1_ANTIALIAS_MODE_ALIASED )
  {
    v10 = v9 - 0.5;
    v11 = 0x7FFFFFFF;
    if ( v10 < -2147483600.0 )
    {
      v12 = 0x80000000;
    }
    else if ( v10 >= 2147483600.0 )
    {
      v12 = 0x7FFFFFFF;
    }
    else
    {
      v12 = (int)ceilf_0(v10);
    }
    v13 = *(float *)(a3 + 4) - 0.5;
    v9 = (float)v12;
    if ( v13 < -2147483600.0 )
    {
      v14 = 0x80000000;
    }
    else if ( v13 >= 2147483600.0 )
    {
      v14 = 0x7FFFFFFF;
    }
    else
    {
      v14 = (int)ceilf_0(v13);
    }
    v15 = *(float *)(a3 + 8) - 0.5;
    v16 = (float)v14;
    if ( v15 < -2147483600.0 )
    {
      v17 = 0x80000000;
    }
    else if ( v15 >= 2147483600.0 )
    {
      v17 = 0x7FFFFFFF;
    }
    else
    {
      v17 = (int)ceilf_0(v15);
    }
    v18 = *(float *)(a3 + 12) - 0.5;
    v19 = (float)v17;
    if ( v18 < -2147483600.0 )
    {
      v11 = 0x80000000;
    }
    else if ( v18 < 2147483600.0 )
    {
      v11 = (int)ceilf_0(v18);
    }
    v20 = (float)v11;
  }
  else
  {
    v16 = *(float *)(a3 + 4);
    v19 = *(float *)(a3 + 8);
    v20 = *(float *)(a3 + 12);
  }
  *(_QWORD *)&v32 = __PAIR64__(LODWORD(v16), LODWORD(v9));
  *((_QWORD *)&v32 + 1) = __PAIR64__(LODWORD(v20), LODWORD(v19));
  v21 = CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
          a1 + 3184,
          &v32);
  v23 = v21;
  v24 = v21;
  if ( v21 >= 0 )
    goto LABEL_18;
  MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xCEu, 0LL);
LABEL_35:
  MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v23, 0xBC4u, 0LL);
  v23 = v24;
  if ( v5 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(a1 + 368, 0LL, v31);
  return v23;
}
