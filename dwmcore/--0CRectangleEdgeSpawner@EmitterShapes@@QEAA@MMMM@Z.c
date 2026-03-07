// local variable allocation has failed, the output may be wrong!
EmitterShapes::CRectangleEdgeSpawner *__fastcall EmitterShapes::CRectangleEdgeSpawner::CRectangleEdgeSpawner(
        EmitterShapes::CRectangleEdgeSpawner *this,
        double a2,
        double a3,
        double a4,
        unsigned int a5)
{
  EmitterShapes::CRectangleEdgeSpawner *result; // rax

  *(_QWORD *)this = &EmitterShapes::CRectangleEdgeSpawner::`vftable';
  EmitterShapes::CLineSpawner::CLineSpawner(
    (__int64)this + 8,
    _mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_i64[0],
    _mm_unpacklo_ps(*(__m128 *)&a4, *(__m128 *)&a3).m128_i64[0]);
  EmitterShapes::CLineSpawner::CLineSpawner(
    (__int64)this + 40,
    _mm_unpacklo_ps(*(__m128 *)&a4, *(__m128 *)&a3).m128_i64[0],
    _mm_unpacklo_ps(*(__m128 *)&a4, (__m128)a5).m128_i64[0]);
  EmitterShapes::CLineSpawner::CLineSpawner(
    (__int64)this + 72,
    _mm_unpacklo_ps(*(__m128 *)&a4, (__m128)a5).m128_i64[0],
    _mm_unpacklo_ps(*(__m128 *)&a2, (__m128)a5).m128_i64[0]);
  EmitterShapes::CLineSpawner::CLineSpawner(
    (__int64)this + 104,
    _mm_unpacklo_ps(*(__m128 *)&a2, (__m128)a5).m128_i64[0],
    _mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_i64[0]);
  result = this;
  *((float *)this + 34) = *(float *)&a5 - *(float *)&a3;
  *((float *)this + 35) = *(float *)&a4 - *(float *)&a2;
  return result;
}
