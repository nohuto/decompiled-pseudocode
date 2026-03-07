bool __fastcall EmitterShapes::SortTriangles(
        EmitterShapes *this,
        const struct EmitterShapes::CPathEmitterArea::AreaTriangle *a2,
        const struct EmitterShapes::CPathEmitterArea::AreaTriangle *a3)
{
  return *((float *)this + 6) > *((float *)a2 + 6);
}
