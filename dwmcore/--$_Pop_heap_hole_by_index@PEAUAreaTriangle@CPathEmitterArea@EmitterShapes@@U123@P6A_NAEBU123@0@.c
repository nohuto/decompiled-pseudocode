__int64 __fastcall std::_Pop_heap_hole_by_index<EmitterShapes::CPathEmitterArea::AreaTriangle *,EmitterShapes::CPathEmitterArea::AreaTriangle,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64))
{
  __int64 v5; // rbp
  __int64 v8; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+68h] [rbp+10h]

  v5 = (a3 - 1) >> 1;
  v14 = a2;
  v8 = a2;
  v10 = a2;
  if ( a2 < v5 )
  {
    do
    {
      v10 = 2 * v10 + 2;
      if ( a5(a1 + 28 * v10, a1 + 28 * v10 - 28) )
        --v10;
      v11 = 28 * v8;
      v8 = v10;
      *(_OWORD *)(v11 + a1) = *(_OWORD *)(28 * v10 + a1);
      *(_QWORD *)(v11 + a1 + 16) = *(_QWORD *)(28 * v10 + a1 + 16);
      *(_DWORD *)(v11 + a1 + 24) = *(_DWORD *)(28 * v10 + a1 + 24);
    }
    while ( v10 < v5 );
    LODWORD(a2) = v14;
  }
  if ( v10 == v5 && (a3 & 1) == 0 )
  {
    v12 = 28 * v8;
    LODWORD(v8) = a3 - 1;
    *(_OWORD *)(v12 + a1) = *(_OWORD *)(28 * a3 + a1 - 28);
    *(_QWORD *)(v12 + a1 + 16) = *(_QWORD *)(28 * a3 + a1 - 12);
    *(_DWORD *)(v12 + a1 + 24) = *(_DWORD *)(28 * a3 + a1 - 4);
  }
  return std::_Push_heap_by_index<EmitterShapes::CPathEmitterArea::AreaTriangle *,EmitterShapes::CPathEmitterArea::AreaTriangle,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
           a1,
           v8,
           a2,
           a4,
           (__int64)a5);
}
