void __fastcall CRectanglesShape::~CRectanglesShape(CRectanglesShape *this)
{
  *(_QWORD *)this = &CRectanglesShape::`vftable';
  CRectanglesShape::Reset(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 16);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((char *)this + 8);
}
