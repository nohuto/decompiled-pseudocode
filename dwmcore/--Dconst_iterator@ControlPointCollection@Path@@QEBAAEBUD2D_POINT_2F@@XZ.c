__int64 __fastcall Path::ControlPointCollection::const_iterator::operator*(__int64 a1)
{
  __int64 ControlPoints; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  ControlPoints = Path::Segment::GetControlPoints(*(_QWORD *)a1, v4);
  return gsl::span<D2D_POINT_2F const,-1>::operator[](ControlPoints, *(unsigned int *)(a1 + 16));
}
