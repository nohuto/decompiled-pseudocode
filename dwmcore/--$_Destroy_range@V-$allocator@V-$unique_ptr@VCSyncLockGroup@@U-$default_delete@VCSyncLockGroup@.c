void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CSyncLockGroup>>>(void ***a1, void ***a2)
{
  void ***v3; // rbx
  void **v4; // rdi
  void **v5; // rsi
  __int64 v6; // r8
  void *v7; // rcx
  bool v8; // zf

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = v4 + 2;
        *v4 = &CSyncLockGroup::`vftable';
        v6 = ((_BYTE *)v4[3] - (_BYTE *)v4[2]) >> 3;
        if ( v6 )
          detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
            (__int64 *)v4 + 2,
            0LL,
            v6);
        v7 = *v5;
        v8 = v4[2] == v4 + 5;
        *v5 = 0LL;
        if ( v8 )
          v7 = 0LL;
        operator delete(v7);
        operator delete(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
