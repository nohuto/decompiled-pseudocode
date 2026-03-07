__int64 __fastcall CLayerVisual::GetBoundsWithLayerEffect(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rsi
  int Bounds; // ebx
  __int64 v6; // rcx
  __int64 *v7; // r9
  __int64 v8; // rcx
  float v9; // [rsp+40h] [rbp+8h] BYREF
  float v10; // [rsp+44h] [rbp+Ch]
  float v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = (_OWORD *)(a1 + 172);
  Bounds = 0;
  *a2 = *(_OWORD *)(a1 + 172);
  if ( *(_QWORD *)(a1 + 712) && (CVisual::GetEffectiveSize((CVisual *)a1, &v9, &v11) || *(_BYTE *)(v6 + 728)) )
  {
    v10 = v11;
    v8 = *v7;
    if ( *v7 )
      Bounds = CEffectBrush::GetBounds(v8, v2, &v9, a2);
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Bounds, 0x1C7u, 0LL);
    }
    else if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a2) )
    {
      *a2 = *v2;
    }
  }
  return (unsigned int)Bounds;
}
