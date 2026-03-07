__int64 __fastcall std::vector<CVisualDepthGeometry>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 16 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 4));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 176 * a3;
  result = a2 + 176 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
