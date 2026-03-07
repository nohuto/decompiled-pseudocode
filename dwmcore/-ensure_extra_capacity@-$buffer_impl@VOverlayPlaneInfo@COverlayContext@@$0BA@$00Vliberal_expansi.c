unsigned __int64 __fastcall detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  LPVOID v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rbx
  COverlayContext::OverlayPlaneInfo *v14; // rcx
  bool v15; // zf
  _QWORD v16[4]; // [rsp+20h] [rbp-48h] BYREF
  char v17[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0x6DB6DB6DB6DB6DB7LL;
  v4 = a1[2];
  v5 = a1[1];
  result = 0x6DB6DB6DB6DB6DB7LL * ((v4 - v5) >> 5);
  if ( result < a2 )
  {
    v7 = 0x6DB6DB6DB6DB6DB7LL * ((v5 - *a1) >> 5);
    v8 = v7 + a2;
    if ( v7 + a2 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v9 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(v3 * ((v4 - *a1) >> 5)),
           v3 * ((v4 - *a1) >> 5),
           v8);
    v10 = operator new(saturated_mul(v9, 0xE0uLL));
    v11 = a1[1];
    v12 = *a1;
    v16[0] = v10;
    v16[2] = 0LL;
    v13 = (__int64)v10;
    v16[1] = v7;
    std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo *>>(
      (__int64)v17,
      v12,
      v11,
      v16);
    detail::destruct_range<COverlayContext::OverlayPlaneInfo>(
      (COverlayContext::OverlayPlaneInfo *)*a1,
      (COverlayContext::OverlayPlaneInfo *)a1[1]);
    v14 = (COverlayContext::OverlayPlaneInfo *)*a1;
    v15 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v13;
    if ( v15 )
      v14 = 0LL;
    operator delete(v14);
    a1[1] = *a1 + 224 * v7;
    result = *a1 + 224 * v9;
    a1[2] = result;
  }
  return result;
}
