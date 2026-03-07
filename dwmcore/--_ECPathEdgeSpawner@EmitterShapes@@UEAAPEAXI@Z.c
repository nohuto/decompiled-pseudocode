EmitterShapes::CPathEdgeSpawner *__fastcall EmitterShapes::CPathEdgeSpawner::`vector deleting destructor'(
        EmitterShapes::CPathEdgeSpawner *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
