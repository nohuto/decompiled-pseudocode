__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CPathData>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
