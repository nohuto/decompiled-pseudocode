__int64 __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::reserve_region(
        _DWORD *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rsi
  _QWORD *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  void *v19; // rax
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-30h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]

  v4 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::size();
  if ( (*a1 & 3) != 0 )
  {
    if ( (*a1 & 3) == 1 )
    {
      v5 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 8);
      goto LABEL_5;
    }
    if ( (*a1 & 3) == 2 )
    {
      v5 = 0LL;
      goto LABEL_5;
    }
    if ( (*a1 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v5 = 1LL;
LABEL_5:
  if ( v5 == v4 )
  {
    v6 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    else if ( !v4 )
    {
      *(_QWORD *)a1 = 3LL;
      goto LABEL_9;
    }
    v16 = operator new(8 * v6 + 16);
    *v16 = 0LL;
    v17 = (unsigned __int64)(v16 + 2);
    v16[1] = 0LL;
    v18 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
    *(_QWORD *)&v20 = v17;
    *((_QWORD *)&v20 + 1) = v4;
    v21 = 0LL;
    v22 = v20;
    v23 = 0LL;
    ((void (__fastcall *)(__int128 *, __int64, unsigned __int64, __int128 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
      &v20,
      v18,
      v18 + 8 * v4,
      &v22);
    if ( (*a1 & 3) != 0 )
    {
      if ( (*a1 & 3) == 1 )
      {
        v19 = (void *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 16);
LABEL_26:
        *(_QWORD *)a1 = v17 | 1;
        operator delete(v19);
        *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 16) = v4;
        *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 8) = v6;
        goto LABEL_9;
      }
      if ( (*a1 & 3u) - 2 >= 2 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    v19 = 0LL;
    goto LABEL_26;
  }
LABEL_9:
  v7 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::size(a1);
  v8 = v7 - a2;
  v9 = v7;
  v10 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(a1);
  v11 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
  v12 = (_QWORD *)(v11 + 8 * v9);
  if ( !v12 )
    goto LABEL_28;
  v13 = v8;
  if ( v8 > 1 )
    v13 = 1LL;
  v14 = v10 - 8 * v13;
  if ( v10 != v14 )
  {
    *v12 = *(_QWORD *)(v10 - 8);
    if ( v10 - 8 != v14 )
LABEL_28:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v8 > 1 )
  {
    if ( v9 && (!v11 || v9 < 0) )
      goto LABEL_28;
    *(_QWORD *)&v20 = v11;
    *((_QWORD *)&v20 + 1) = v9;
    v21 = v9;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v22,
      v11 + 8 * a2,
      v11 + 8 * (v9 - 1),
      &v20);
  }
  detail::pointer_buffer_impl<CBlurredBackdropCache *>::consume(a1, 1LL);
  return v11 + 8 * a2;
}
