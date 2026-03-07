__int64 __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::clear_region(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  _QWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-28h] BYREF

  v6 = a2 + a3;
  v7 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::size();
  if ( v6 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v8 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
    v9 = v8 + 8 * v7;
    if ( v6 == v7 )
      return detail::pointer_buffer_impl<CBlurredBackdropCache *>::consume(a1, -a3, v9);
  }
  if ( a2 && (!v8 || a2 < 0 || v7 < a2) )
    _invalid_parameter_noinfo_noreturn();
  v11[0] = v8;
  v11[1] = v7;
  v11[2] = a2;
  ((void (__fastcall *)(_BYTE *, unsigned __int64, unsigned __int64, _QWORD *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
    v12,
    v8 + 8 * v6,
    v9,
    v11);
  return detail::pointer_buffer_impl<CBlurredBackdropCache *>::consume(a1, -a3, v9);
}
