__int64 *__fastcall std::make_unique<EmitterShapes::CRectangleEdgeSpawner,float &,float &,float &,float &,0>(
        __int64 *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5)
{
  EmitterShapes::CRectangleEdgeSpawner *v9; // rcx
  __int64 v10; // rax

  v9 = (EmitterShapes::CRectangleEdgeSpawner *)operator new(0x90uLL);
  v10 = 0LL;
  if ( v9 )
    v10 = EmitterShapes::CRectangleEdgeSpawner::CRectangleEdgeSpawner(v9, *a2, *a3, *a4, *a5);
  *a1 = v10;
  return a1;
}
