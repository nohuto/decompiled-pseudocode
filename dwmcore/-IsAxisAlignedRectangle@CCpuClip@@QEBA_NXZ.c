char __fastcall CCpuClip::IsAxisAlignedRectangle(CShape **this)
{
  char v2; // bl
  CShape **v3; // rcx

  v2 = 0;
  v3 = this + 10;
  if ( *v3 )
    return CShapePtr::IsAxisAlignedRectangle(v3);
  if ( (!*this || CShape::IsAxisAlignedRectangle(*this))
    && CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(this + 1)) )
  {
    return 1;
  }
  return v2;
}
