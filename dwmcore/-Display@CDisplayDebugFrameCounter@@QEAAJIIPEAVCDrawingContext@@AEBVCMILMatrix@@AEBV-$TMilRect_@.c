__int64 __fastcall CDisplayDebugFrameCounter::Display(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        CDrawingContext *a4,
        __int64 a5,
        __int128 *a6,
        void *a7,
        _OWORD *a8)
{
  CMILMatrix *v11; // rsi
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  struct MilRectF *v17; // r9
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+4Ch] [rbp-B4h]
  __int128 v29; // [rsp+5Ch] [rbp-A4h]
  int v30; // [rsp+6Ch] [rbp-94h]
  _OWORD v31[4]; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+B0h] [rbp-50h]
  _BYTE v33[64]; // [rsp+C0h] [rbp-40h] BYREF
  int v34; // [rsp+100h] [rbp+0h]
  __int64 v35[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v36[2]; // [rsp+120h] [rbp+20h] BYREF

  v34 = 0;
  v11 = 0LL;
  v12 = *(_OWORD *)(a5 + 16);
  v31[0] = *(_OWORD *)a5;
  v13 = *(_OWORD *)(a5 + 32);
  v31[1] = v12;
  v14 = *(_OWORD *)(a5 + 48);
  v15 = *(_DWORD *)(a5 + 64);
  v31[2] = v13;
  v16 = *a6;
  v32 = v15;
  v31[3] = v14;
  *(_OWORD *)v36 = v16;
  if ( !CMILMatrix::IsIdentity<0>((__int64)v31) )
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v31, v17, (float *)v36);
  if ( (_DWORD)a7 == 1 )
  {
    CMILMatrix::SetToIdentity((CMILMatrix *)v33);
    CMILMatrix::Rotate90((CMILMatrix *)v33);
    CMILMatrix::Translate((CMILMatrix *)v33, *(float *)&v36[1], 0.0);
    CMILMatrix::Multiply((CMILMatrix *)v31, (const struct CMILMatrix *)v33);
    v11 = (CMILMatrix *)v33;
  }
  v35[1] = 0LL;
  v35[0] = 0LL;
  v28 = 0LL;
  LODWORD(v28) = 0;
  v30 = 0;
  v29 = 0LL;
  v27 = 2;
  v18 = CDrawingContext::PushRenderOptionsInternal((__int64)a4, 0LL, (const struct MilRenderOptions *)&v27, 1);
  v20 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3Eu, 0LL);
  }
  else
  {
    v21 = CDrawingContext::PushTransformInternal(a4, 0LL, (const struct CMILMatrix *)v31, 0, 1);
    v20 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x41u, 0LL);
    }
    else
    {
      v23 = CDisplayDebugFrameCounter::DisplayText(this, a2, a3, a4, (__int64)v36, (int)a7, (__int64)v35);
      v20 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x44u, 0LL);
      }
      else if ( v11 )
      {
        *(_OWORD *)v36 = *(_OWORD *)v35;
        CMILMatrix::Transform2DBoundsHelper<0>(v11, (struct MilRectF *)v36, (float *)v35);
      }
      CDrawingContext::PopTransformInternal(a4, 1);
    }
    CDrawingContext::PopRenderOptionsInternal(a4, 1);
  }
  if ( a8 )
    *a8 = *(_OWORD *)v35;
  return v20;
}
