bool __fastcall CDirtyRegion::IsEmpty(CDirtyRegion *this)
{
  char v1; // r10
  CDirtyRegion *v2; // r8
  int v3; // edx
  unsigned int v5; // r9d
  int v6; // r9d

  v1 = 0;
  v2 = this;
  if ( !*((_BYTE *)this + 4420) )
  {
    if ( *((_BYTE *)this + 4422) )
    {
      LOBYTE(v3) = *((_DWORD *)this + 705) == 0;
      return v3;
    }
    v5 = 0;
    while ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v2 + 4 * v5 + 392) )
    {
      v5 = v3 + v6;
      if ( v5 >= 8 )
        return v3;
    }
  }
  LOBYTE(v3) = v1;
  return v3;
}
