/*
 * XREFs of ?SortTriangles@EmitterShapes@@YA_NAEBUAreaTriangle@CPathEmitterArea@1@0@Z @ 0x180266FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall EmitterShapes::SortTriangles(
        EmitterShapes *this,
        const struct EmitterShapes::CPathEmitterArea::AreaTriangle *a2,
        const struct EmitterShapes::CPathEmitterArea::AreaTriangle *a3)
{
  return *((float *)this + 6) > *((float *)a2 + 6);
}
