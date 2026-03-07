__int64 __fastcall CDirtyRegion::Add(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  CDirtyRegion *v5; // r10
  int v6; // eax
  unsigned int v7; // ecx

  v4 = 0;
  if ( !*(_BYTE *)(a1 + 4420) )
  {
    if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a4) )
    {
      CDirtyRegion::SetFullDirty(v5);
    }
    else
    {
      v6 = CDirtyRegion::_Add(v5);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1B8u, 0LL);
    }
  }
  return v4;
}
