void __fastcall std::_Destroy_range<std::allocator<EmitterShapes::CPathEmitterEdge::Figure>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      std::vector<float>::_Tidy(v3 + 24);
      std::vector<CDataSourceReader *>::_Tidy(v3);
      v3 += 56LL;
    }
    while ( v3 != a2 );
  }
}
