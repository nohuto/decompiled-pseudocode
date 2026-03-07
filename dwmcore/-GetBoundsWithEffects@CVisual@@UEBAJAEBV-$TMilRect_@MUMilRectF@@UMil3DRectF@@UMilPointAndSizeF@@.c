__int64 __fastcall CVisual::GetBoundsWithEffects(CVisual *this, _OWORD *a2, float *a3)
{
  unsigned int Bounds; // edi
  _DWORD *v7; // r9
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rax
  _BYTE *v11; // rdx
  unsigned int i; // ecx
  __int64 *v13; // rsi
  __int64 v14; // rsi
  char v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rcx
  unsigned int v20; // ebx
  float v21; // [rsp+50h] [rbp+8h] BYREF
  float v22; // [rsp+54h] [rbp+Ch]
  float v23; // [rsp+58h] [rbp+10h] BYREF

  Bounds = 0;
  *(_OWORD *)a3 = *a2;
  v7 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v7 & 0x400000) != 0 )
  {
    v10 = (unsigned int)v7[1];
    v11 = v7 + 2;
    for ( i = 0; i < (unsigned int)v10; ++v11 )
    {
      if ( *v11 == 10 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v10 )
      v13 = 0LL;
    else
      v13 = (__int64 *)((char *)v7 + 8LL * i - (((_BYTE)v10 + 15) & 7) + v10 + 15);
    v14 = *v13;
    v8 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this);
    if ( v14 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 56LL))(v14, 61LL) )
        return Bounds;
      result = CFilterEffect::GetBounds(v14, a2, a3);
      v20 = result;
      if ( (int)result < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, result, 0x185Cu, 0LL);
        return v20;
      }
      return result;
    }
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this);
  }
  if ( !v8 )
    return Bounds;
  if ( CVisual::GetEffectiveSize(this, &v21, &v23) || v15 )
  {
    v16 = *(_QWORD *)this;
    v22 = v23;
    v17 = *(_QWORD *)(*(__int64 (**)(void))(v16 + 216))();
    if ( v17 )
      Bounds = CEffectBrush::GetBounds(v17, a2, (__int64)&v21, a3);
    if ( (Bounds & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, Bounds, 0x1870u, 0LL);
      return Bounds;
    }
  }
  v18 = !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a3);
  result = Bounds;
  if ( !v18 )
    *(_OWORD *)a3 = *a2;
  return result;
}
