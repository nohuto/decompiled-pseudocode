__int64 __fastcall CDirtyRegion::Add(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  CDirtyRegion *v3; // r10
  int v4; // eax
  unsigned int v5; // ecx

  v2 = 0;
  if ( !*(_BYTE *)(a1 + 4420) )
  {
    if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a2) )
    {
      CDirtyRegion::SetFullDirty(v3);
    }
    else
    {
      v4 = CDirtyRegion::_Add(v3);
      v2 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x19Du, 0LL);
    }
  }
  return v2;
}
