__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::Release(DXGCOMPOSITIONSURFACEPROXY *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &DXGCOMPOSITIONSURFACEPROXY::`vftable';
    operator delete(this);
  }
  return v1;
}
