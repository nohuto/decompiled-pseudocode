unsigned __int64 __fastcall detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  const void *v9; // rax
  __int64 v10; // r8
  const void *v11; // rdx
  const void *v12; // rbx
  void *v13; // rcx
  bool v14; // zf
  const void *v15; // rcx
  __int64 v16[4]; // [rsp+20h] [rbp-48h] BYREF
  char v17[32]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  result = (v3 - v4) >> 3;
  if ( result < a2 )
  {
    v6 = (v4 - (_BYTE *)*a1) >> 3;
    v7 = v6 + a2;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v3 - (_BYTE *)*a1) >> 3),
           (v3 - (_BYTE *)*a1) >> 3,
           v7);
    v9 = operator new(saturated_mul(v8, 8uLL));
    v10 = (__int64)a1[1];
    v11 = *a1;
    v16[0] = (__int64)v9;
    v16[2] = 0LL;
    v12 = v9;
    v16[1] = v6;
    std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>(
      (__int64)v17,
      v11,
      v10,
      v16);
    v13 = (void *)*a1;
    v14 = *a1 == a1 + 3;
    *a1 = v12;
    if ( v14 )
      v13 = 0LL;
    operator delete(v13);
    v15 = *a1;
    a1[1] = (char *)*a1 + 8 * v6;
    result = (unsigned __int64)v15 + 8 * v8;
    a1[2] = (const void *)result;
  }
  return result;
}
