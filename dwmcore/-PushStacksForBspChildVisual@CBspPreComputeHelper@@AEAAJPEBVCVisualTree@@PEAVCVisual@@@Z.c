__int64 __fastcall CBspPreComputeHelper::PushStacksForBspChildVisual(
        CBspPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct CVisual *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  float OpacityInternal; // xmm0_4
  unsigned int *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v24; // [rsp+50h] [rbp+20h] BYREF

  CBspPreComputeHelper::PushTransformForChildVisual(this, a2, a3);
  if ( (*((_BYTE *)a3 + 104) & 0x40) != 0
    && (v24 = *((int *)a3 + 52),
        v5 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push((unsigned int *)this + 32, &v24),
        v7 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x9Du, 0LL);
  }
  else
  {
    v8 = *((_DWORD *)a3 + 26);
    if ( (v8 & 2) != 0
      && (v24 = v8 << 18 >> 28,
          v9 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v24),
          v7 = v9,
          v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA3u, 0LL);
    }
    else if ( (*((_BYTE *)a3 + 104) & 8) != 0
           && (v24 = *((int *)a3 + 49),
               v11 = CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Push((unsigned int *)this + 48, &v24),
               v7 = v11,
               v11 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA9u, 0LL);
    }
    else if ( (*((_BYTE *)a3 + 104) & 0x10) != 0
           && (v24 = *((int *)a3 + 50),
               v13 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v24),
               v7 = v13,
               v13 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xAFu, 0LL);
    }
    else
    {
      OpacityInternal = CVisual::GetOpacityInternal(a3);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(OpacityInternal - 1.0) & _xmm) < 0.0000011920929
        || (*(float *)&v24 = fminf(1.0, fmaxf(OpacityInternal, 0.0))
                           * *(float *)CWatermarkStack<float,64,2,10>::GetTopByReference((__int64)this + 256),
            v17 = CWatermarkStack<float,64,2,10>::Push(v16, &v24),
            v7 = v17,
            v17 >= 0) )
      {
        if ( (*((_BYTE *)a3 + 101) & 0x20) != 0
          && (LOBYTE(v24) = 1,
              v19 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 36, &v24),
              v7 = v19,
              v19 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xBEu, 0LL);
        }
        else
        {
          v21 = CWatermarkStack<unsigned int,64,2,10>::Push((unsigned int *)this + 80, (_DWORD *)this + 88);
          v7 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xC2u, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xB8u, 0LL);
      }
    }
  }
  return v7;
}
