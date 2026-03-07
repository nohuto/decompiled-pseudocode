char __fastcall CRenderDataBounds::AddBounds(__int64 a1, struct MilRectF *a2)
{
  int v3; // ecx
  char result; // al
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 96) )
  {
    v3 = *(_DWORD *)(a1 + 92);
    v5 = 0LL;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        result = (unsigned __int8)CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)(a1 + 24), a2, (float *)&v5);
      }
      else
      {
        *(_BYTE *)(a1 + 96) = 1;
        *(_OWORD *)(a1 + 8) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
    }
    else
    {
      v5 = *(_OWORD *)a2;
    }
    if ( !*(_BYTE *)(a1 + 96) )
      return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)(a1 + 8), (float *)&v5);
  }
  return result;
}
