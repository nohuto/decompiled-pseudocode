char __fastcall CRectanglesShape::IsRectangles(CRectanglesShape *this, unsigned int *a2)
{
  if ( a2 )
    *a2 = *((_DWORD *)this + 10);
  return 1;
}
