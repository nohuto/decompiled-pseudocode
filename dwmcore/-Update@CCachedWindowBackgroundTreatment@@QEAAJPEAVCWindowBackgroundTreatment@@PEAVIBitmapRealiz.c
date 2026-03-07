__int64 __fastcall CCachedWindowBackgroundTreatment::Update(
        struct CCachedWindowBackgroundTreatment *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        float *a5,
        __int128 *a6)
{
  float *v6; // rbp
  unsigned int v7; // esi
  float v12; // xmm0_4
  unsigned int v13; // ecx
  unsigned int v14; // eax
  CWindowBackgroundTreatment *v15; // rcx
  __int128 *v16; // rcx
  __int64 v17; // xmm1_8
  __int128 v18; // xmm0
  _QWORD *v20; // rdx
  struct CCachedWindowBackgroundTreatment *v21; // [rsp+70h] [rbp+18h] BYREF

  v6 = a5;
  v7 = 0;
  if ( !a3 )
    goto LABEL_8;
  v12 = a5[5];
  v13 = (v12 <= a5[4]) + 1;
  if ( a5[2] > *a5 )
    v13 = v12 <= a5[4];
  v14 = v13 + 1;
  if ( a5[3] > a5[1] )
    v14 = v13;
  if ( v14 > 1
    || (unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a5) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024809, 0x1E5u, 0LL);
  }
  else
  {
LABEL_8:
    v15 = (CWindowBackgroundTreatment *)*((_QWORD *)a1 + 2);
    if ( (CWindowBackgroundTreatment *)a2 != v15 )
    {
      if ( v15 )
        CWindowBackgroundTreatment::RemoveDependentCachedTreatment(v15, a1);
      if ( a2 )
      {
        v20 = *(_QWORD **)(a2 + 336);
        v21 = a1;
        if ( v20 == *(_QWORD **)(a2 + 344) )
        {
          std::vector<CCachedWindowBackgroundTreatment *>::_Emplace_reallocate<CCachedWindowBackgroundTreatment * const &>(
            a2 + 328,
            v20,
            &v21);
        }
        else
        {
          *v20 = a1;
          *(_QWORD *)(a2 + 336) += 8LL;
        }
      }
      Microsoft::WRL::ComPtr<CWindowBackgroundTreatment>::operator=((char *)a1 + 16, a2);
    }
    Microsoft::WRL::ComPtr<IBitmapRealization>::operator=((char *)a1 + 24, a3);
    *((_OWORD *)a1 + 2) = *(_OWORD *)a4;
    *((_OWORD *)a1 + 3) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)a1 + 4) = *(_OWORD *)(a4 + 32);
    *((_OWORD *)a1 + 5) = *(_OWORD *)(a4 + 48);
    *((_DWORD *)a1 + 24) = *(_DWORD *)(a4 + 64);
    v16 = a6;
    *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)v6;
    v17 = *((_QWORD *)v6 + 2);
    v18 = *v16;
    *((_BYTE *)a1 + 140) = 0;
    *(_QWORD *)((char *)a1 + 116) = v17;
    *(_OWORD *)((char *)a1 + 124) = v18;
  }
  return v7;
}
