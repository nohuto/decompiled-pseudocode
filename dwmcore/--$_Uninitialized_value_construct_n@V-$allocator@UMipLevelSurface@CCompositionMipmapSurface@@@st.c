_OWORD *__fastcall std::_Uninitialized_value_construct_n<std::allocator<CCompositionMipmapSurface::MipLevelSurface>>(
        _OWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rax

  if ( a2 )
  {
    v2 = a1 + 1;
    do
    {
      *a1 = 0LL;
      a1[1] = 0LL;
      a1 += 2;
      *(v2 - 1) = 0LL;
      *v2 = 0LL;
      v2 += 4;
      --a2;
    }
    while ( a2 );
  }
  return a1;
}
