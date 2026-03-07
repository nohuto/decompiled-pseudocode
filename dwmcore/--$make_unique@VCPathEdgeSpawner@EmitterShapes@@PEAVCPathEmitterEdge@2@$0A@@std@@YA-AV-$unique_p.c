_QWORD *__fastcall std::make_unique<EmitterShapes::CPathEdgeSpawner,EmitterShapes::CPathEmitterEdge *,0>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *result; // rax

  v4 = operator new(0x10uLL);
  if ( v4 )
  {
    v5 = *a2;
    *v4 = &EmitterShapes::CPathEdgeSpawner::`vftable';
    v4[1] = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    v4 = 0LL;
  }
  result = a1;
  *a1 = v4;
  return result;
}
