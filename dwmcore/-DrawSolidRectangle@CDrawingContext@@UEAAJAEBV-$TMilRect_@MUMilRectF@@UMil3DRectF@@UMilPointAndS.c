__int64 __fastcall CDrawingContext::DrawSolidRectangle(__int64 a1, float *a2, __int128 *a3)
{
  int v3; // eax
  unsigned int v4; // edi
  float v7; // xmm0_4
  float v8; // xmm6_4
  const struct MilRectF *v9; // rdx
  struct CDrawingContext *v10; // rbx
  int v11; // r8d
  gsl::details *v12; // rcx
  bool v13; // di
  __int64 (__fastcall ***v14)(_QWORD, __int64); // rdx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edi
  char *v18; // rax
  __int64 v19; // rcx
  char *v20; // rsi
  gsl::details *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int128 v25; // xmm1
  int v26; // eax
  __int64 (__fastcall ***v28)(_QWORD, __int64); // [rsp+38h] [rbp-99h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-91h] BYREF
  unsigned __int64 v30[2]; // [rsp+48h] [rbp-89h] BYREF
  char v31; // [rsp+58h] [rbp-79h]
  __int128 v32; // [rsp+60h] [rbp-71h] BYREF
  int v33; // [rsp+70h] [rbp-61h] BYREF
  unsigned int *v34[2]; // [rsp+78h] [rbp-59h] BYREF
  char v35; // [rsp+88h] [rbp-49h]
  _BYTE v36[80]; // [rsp+98h] [rbp-39h] BYREF

  v3 = *(_DWORD *)(a1 + 3232);
  v4 = 0;
  v32 = *a3;
  if ( v3 )
    v7 = *(float *)(*(_QWORD *)(a1 + 3248) + 4LL * (unsigned int)(v3 - 1));
  else
    v7 = *(float *)&FLOAT_1_0;
  v8 = *((float *)&v32 + 3) * v7;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v32 + 3) * v7) & _xmm) >= 0.0000011920929
    && !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v10 = (struct CDrawingContext *)(a1 - 16);
    v33 = *(_DWORD *)(a1 + 324);
    *(_DWORD *)(a1 + 324) = *(_DWORD *)(a1 + 344);
    v34[0] = (unsigned int *)&v33;
    v34[1] = (unsigned int *)(a1 - 16);
    v35 = 1;
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v36, v9);
    v11 = *(_DWORD *)(a1 + 8072);
    v28 = 0LL;
    v30[1] = 0LL;
    v30[0] = (unsigned __int64)&v28;
    v31 = 1;
    v13 = (int)CDrawingContext::GetUnOccludedWorldShape(
                 (CDrawingContext *)(a1 - 16),
                 (const struct CShape *)v36,
                 v11,
                 (struct CShape **)&v30[1]) >= 0;
    if ( v31 )
    {
      v12 = (gsl::details *)v30[0];
      v14 = *(__int64 (__fastcall ****)(_QWORD, __int64))v30[0];
      *(_QWORD *)v30[0] = v30[1];
      if ( v14 )
        std::default_delete<CShape>::operator()((__int64)v12, v14);
    }
    if ( v13 )
    {
      v15 = CDrawingContext::PushTransformInternal(
              (CDrawingContext *)(a1 - 16),
              0LL,
              (const struct CMILMatrix *)&CMILMatrix::Identity,
              0,
              1);
      v4 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2A7u, 0LL);
      }
      else
      {
        (*v28)[8](v28, (__int64)&v29);
        v17 = v29;
        v18 = (char *)DefaultHeap::Alloc(saturated_mul(v29, 0x10uLL));
        v20 = v18;
        if ( v18 )
        {
          `vector constructor iterator'(
            v18,
            16LL,
            v17,
            (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64), char *, _QWORD))(*v28)[10])(v28, v20, v29);
          LODWORD(v30[0]) = v32;
          *((float *)&v30[1] + 1) = v8;
          *(unsigned __int64 *)((char *)v30 + 4) = *(_QWORD *)((char *)&v32 + 4);
          v32 = *(_OWORD *)v30;
          gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v30, v29);
          v30[1] = (unsigned __int64)v20;
          if ( v30[0] == -1LL )
          {
            gsl::details::terminate(v21);
            __debugbreak();
          }
          v22 = CDrawingContext::FillRectanglesWithSolidColor(v10, v30, (__int64)&v32);
          v4 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x2B6u, 0LL);
          operator delete(v20);
        }
        else
        {
          v4 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0x2B1u, 0LL);
        }
        CDrawingContext::PopTransformInternal(v10, 1);
      }
    }
    else
    {
      LODWORD(v30[0]) = v32;
      *((float *)&v30[1] + 1) = v8;
      *(unsigned __int64 *)((char *)v30 + 4) = *(_QWORD *)((char *)&v32 + 4);
      v25 = *(_OWORD *)v30;
      v30[0] = 1LL;
      v30[1] = (unsigned __int64)a2;
      v32 = v25;
      if ( !a2 )
      {
        gsl::details::terminate(v12);
        __debugbreak();
      }
      v26 = CDrawingContext::FillRectanglesWithSolidColor((struct CDrawingContext *)(a1 - 16), v30, (__int64)&v32);
      v4 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v26, 0x2BBu, 0LL);
    }
    if ( v28 )
      std::default_delete<CShape>::operator()(v24, v28);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v36);
    gsl::final_action__lambda_b84a1ee213fa572390f758b550ef68e0___::_final_action__lambda_b84a1ee213fa572390f758b550ef68e0___(v34);
  }
  return v4;
}
