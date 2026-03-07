COverlayContext::OverlayPlaneInfo *__fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // r11
  __int64 v17; // rsi
  COverlayContext::OverlayPlaneInfo *v18; // rdx
  COverlayContext::OverlayPlaneInfo *v19; // rbx
  COverlayContext::OverlayPlaneInfo *result; // rax
  _QWORD v21[4]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v22[32]; // [rsp+40h] [rbp-38h] BYREF

  detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v6 = *a1;
  v7 = a1[1];
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((v7 - *a1) >> 5);
  v9 = *a1 + 32 * ((v7 - *a1) >> 5);
  v10 = v8 - a2;
  if ( a3 && (!v9 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_16;
  v11 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 5) - a2;
  if ( a3 < v10 )
    v11 = a3;
  if ( v7 != v7 - 224 * v11 )
  {
    v12 = v7 - 224;
    v13 = a3;
    if ( v9 )
    {
      while ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 >= a3 )
          break;
        COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v9 + 224 * v14, v12);
        if ( v15 == v16 )
          goto LABEL_12;
        v12 = v15 - 224;
      }
    }
LABEL_16:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_12:
  if ( v10 <= a3 )
  {
    v17 = 224 * a2;
  }
  else
  {
    if ( v8 && (!v6 || v8 < 0) )
      goto LABEL_16;
    v21[1] = v8;
    v17 = 224 * a2;
    v21[2] = v8;
    v21[0] = v6;
    std::move_backward<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
      (__int64)v22,
      224 * a2 + v6,
      v6 + 224 * (v8 - a3),
      v21);
  }
  v18 = (COverlayContext::OverlayPlaneInfo *)(v6 + 224 * (a2 + a3));
  if ( v9 < (unsigned __int64)v18 )
    v18 = (COverlayContext::OverlayPlaneInfo *)v9;
  v19 = (COverlayContext::OverlayPlaneInfo *)(v17 + v6);
  detail::destruct_range<COverlayContext::OverlayPlaneInfo>(v19, v18);
  result = v19;
  a1[1] += 224 * a3;
  return result;
}
