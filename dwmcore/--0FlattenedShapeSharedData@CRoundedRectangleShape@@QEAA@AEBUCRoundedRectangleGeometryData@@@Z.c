CRoundedRectangleShape::FlattenedShapeSharedData *__fastcall CRoundedRectangleShape::FlattenedShapeSharedData::FlattenedShapeSharedData(
        CRoundedRectangleShape::FlattenedShapeSharedData *this,
        const struct CRoundedRectangleGeometryData *a2)
{
  CRoundedRectangleShape::SharedData::SharedData(this, a2);
  *(_QWORD *)this = &CRoundedRectangleShape::FlattenedShapeSharedData::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  return this;
}
