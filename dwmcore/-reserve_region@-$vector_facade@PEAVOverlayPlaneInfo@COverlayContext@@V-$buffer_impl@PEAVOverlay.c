__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  _QWORD *v8; // r11
  __int64 v9; // rax
  _QWORD *v10; // r9
  _QWORD *v11; // rdx
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  char v14[32]; // [rsp+40h] [rbp-28h] BYREF

  detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v4 = *a1;
  v5 = (_QWORD *)a1[1];
  v6 = ((__int64)v5 - *a1) >> 3;
  v7 = v6 - a2;
  v8 = (_QWORD *)(*a1 + 8 * v6);
  if ( !v8 )
    goto LABEL_6;
  v9 = ((a1[1] - *a1) >> 3) - a2;
  if ( v7 > 1 )
    v9 = 1LL;
  v10 = &v5[-v9];
  if ( v5 != v10 )
  {
    v11 = v5 - 1;
    *v8 = *v11;
    if ( v11 != v10 )
LABEL_6:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v7 > 1 )
  {
    if ( v6 && (!v4 || v6 < 0) )
      goto LABEL_6;
    v13[1] = v6;
    v13[2] = v6;
    v13[0] = v4;
    ((void (__fastcall *)(char *, __int64, __int64, _QWORD *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      v14,
      v4 + 8 * a2,
      v4 + 8 * (v6 - 1),
      v13);
  }
  a1[1] += 8LL;
  return v4 + 8 * a2;
}
