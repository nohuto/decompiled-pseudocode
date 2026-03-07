__int64 *__fastcall std::make_unique<EmitterShapes::CLineSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,0>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  LPVOID v6; // rcx
  __int64 v7; // rax

  v6 = operator new(0x20uLL);
  v7 = 0LL;
  if ( v6 )
    v7 = EmitterShapes::CLineSpawner::CLineSpawner(v6, *a2, *a3);
  *a1 = v7;
  return a1;
}
