__int64 __fastcall std::_Push_heap_by_index<EmitterShapes::CPathEmitterArea::AreaTriangle *,EmitterShapes::CPathEmitterArea::AreaTriangle,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64))
{
  __int64 v7; // rdi
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax

  v7 = a2;
  if ( a3 < a2 )
  {
    do
    {
      v9 = (v7 - 1) >> 1;
      v10 = a1 + 28 * v9;
      if ( !a5(v10, a4) )
        break;
      v11 = 28 * v7;
      v7 = (v7 - 1) >> 1;
      *(_OWORD *)(v11 + a1) = *(_OWORD *)v10;
      *(_QWORD *)(v11 + a1 + 16) = *(_QWORD *)(v10 + 16);
      *(_DWORD *)(v11 + a1 + 24) = *(_DWORD *)(v10 + 24);
    }
    while ( a3 < v9 );
  }
  v12 = 28 * v7;
  *(_OWORD *)(v12 + a1) = *(_OWORD *)a4;
  *(_QWORD *)(v12 + a1 + 16) = *(_QWORD *)(a4 + 16);
  result = *(unsigned int *)(a4 + 24);
  *(_DWORD *)(v12 + a1 + 24) = result;
  return result;
}
