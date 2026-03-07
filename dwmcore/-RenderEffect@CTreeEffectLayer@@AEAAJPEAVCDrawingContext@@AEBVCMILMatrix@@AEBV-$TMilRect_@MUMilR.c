__int64 __fastcall CTreeEffectLayer::RenderEffect(
        CTreeEffectLayer *this,
        CDrawingContext *a2,
        struct CMILMatrix *a3,
        __int64 a4,
        unsigned int *a5)
{
  char v8; // r14
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rax
  CDropShadow *v17; // rcx
  unsigned int v18; // xmm1_4
  unsigned int v19; // xmm0_4
  float v20; // xmm2_4
  __int64 v21; // rdx
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  int v25; // edx
  int v26; // eax
  unsigned int v27; // ecx
  char v28; // r9
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // r15
  __int64 v33; // rcx
  int v34; // eax
  unsigned int v35; // ecx
  __int128 v36; // [rsp+40h] [rbp-31h] BYREF
  float v37; // [rsp+50h] [rbp-21h] BYREF
  float v38; // [rsp+54h] [rbp-1Dh]
  float v39; // [rsp+58h] [rbp-19h]
  float v40; // [rsp+5Ch] [rbp-15h]

  v8 = 0;
  v36 = 0LL;
  if ( *((_QWORD *)this + 32) )
  {
    v9 = CDrawingContext::PushGpuClipRectInternal(a2, 0LL, a4, 1LL, 0);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2BDu, 0LL);
    }
    else
    {
      CDrawingContext::GetClipBoundsWorld(a2, &v36);
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v36) )
      {
        v12 = CDrawingContext::PushTransformInternal(a2, 0LL, a3, 0, 1);
        v11 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x2CAu, 0LL);
        }
        else
        {
          v8 = 1;
          v14 = CDrawingContext::PushEffectiveAlphaForNode(a2, 0LL, 1.0, 1);
          v11 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2CDu, 0LL);
          }
          else
          {
            ++*((_DWORD *)a2 + 164);
            if ( g_LockAndReadLayer )
            {
              v30 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
              v31 = v30 + *(int *)(*(_QWORD *)(v30 + 8) + 16LL);
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v31 + 8) + 24LL))(
                v31 + 8,
                ((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
            }
            v16 = *((_QWORD *)this + 32);
            if ( *((_QWORD *)this + 31) )
            {
              v32 = *(_QWORD *)(v16 + 712);
              if ( v32 )
              {
                CTreeEffectLayer::PushLayerTransformOnExplicitSurfaceInput(this);
                *(_QWORD *)(v32 + 8) = this;
                v33 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 31) + 64LL) + 8LL) + *((_QWORD *)this + 31) + 64LL;
                v34 = (*(__int64 (__fastcall **)(__int64, CDrawingContext *, unsigned int *, _QWORD))(*(_QWORD *)v33 + 16LL))(
                        v33,
                        a2,
                        a5,
                        0LL);
                *(_QWORD *)(v32 + 8) = 0LL;
                v11 = v34;
                CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(this);
                if ( v11 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v11, 0x2E9u, 0LL);
              }
            }
            else
            {
              v17 = *(CDropShadow **)(v16 + 704);
              if ( v17 && !CDropShadow::GetMaskForLayerVisualNoRef(v17) )
              {
                v18 = *a5;
                v19 = a5[1];
                v20 = *((float *)this + 58);
                *(_QWORD *)&v36 = 0LL;
                v21 = *((_QWORD *)this + 1);
                *((_QWORD *)&v36 + 1) = __PAIR64__(v19, v18);
                v22 = (float)*((int *)this + 4);
                v23 = *((float *)this + 57);
                v38 = v20 - (float)*((int *)this + 5);
                v37 = v23 - v22;
                v24 = v38 + *((float *)this + 60);
                v39 = (float)(v23 - v22) + *((float *)this + 59);
                v40 = v24;
                v25 = v21 ? *(_DWORD *)(*(_QWORD *)(v21 + 8) + 16LL) + v21 + 8 : 0;
                v26 = CDrawingContext::DrawBitmapRealization(
                        (_DWORD)a2,
                        v25,
                        (unsigned int)&v36,
                        (unsigned int)&v37,
                        0,
                        0,
                        (_DWORD)FLOAT_1_0);
                v11 = v26;
                if ( v26 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x306u, 0LL);
              }
            }
          }
        }
      }
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( v28 )
      {
        --*((_DWORD *)a2 + 164);
        CDrawingContext::PopAlpha(a2, 1);
      }
      if ( v8 )
        CDrawingContext::PopTransformInternal(a2, 1);
    }
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x2BAu, 0LL);
  }
  return (unsigned int)v11;
}
