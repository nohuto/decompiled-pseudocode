__int64 __fastcall std::_Uninitialized_move<CShapeRenderTask *>(__int64 a1, __int64 a2, __int64 a3)
{
  while ( a1 != a2 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(a1 + 48);
    a3 += 56LL;
    a1 += 56LL;
  }
  return a3;
}
