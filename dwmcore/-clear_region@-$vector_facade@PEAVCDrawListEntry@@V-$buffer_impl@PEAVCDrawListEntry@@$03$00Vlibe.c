void __fastcall detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rdi
  __int64 v8[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v9[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v5 = (a1[1] - v4) >> 3;
  v6 = a3 == v5;
  if ( a3 > v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v7 = 8 * a3;
  if ( !v6 )
  {
    v8[2] = 0LL;
    v8[0] = v4;
    v8[1] = v5;
    std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>(
      (__int64)v9,
      (const void *)(v7 + v4),
      v4 + 8 * v5,
      v8);
  }
  a1[1] -= v7;
}
