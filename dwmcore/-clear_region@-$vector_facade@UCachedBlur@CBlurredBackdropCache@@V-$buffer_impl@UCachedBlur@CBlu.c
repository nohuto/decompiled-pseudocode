void *__fastcall detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  CBlurredBackdropCache::CachedBlur *v3; // rdi
  __int64 v4; // r11
  __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rbx
  void *result; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v14[40]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *a1;
  v6 = a1[1] - *a1;
  v7 = a2 + a3;
  v9 = 0xF0F0F0F0F0F0F0F1uLL * (v6 >> 3);
  v10 = a2;
  if ( a2 + a3 > v9 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = (CBlurredBackdropCache::CachedBlur *)(v4 + 136 * v9);
    if ( v7 == v9 )
      goto LABEL_3;
  }
  if ( v10 && (!v4 || v10 < 0 || v9 < v10) )
    _invalid_parameter_noinfo_noreturn();
  v13[2] = v10;
  v13[0] = v4;
  v13[1] = v9;
  ((void (__fastcall *)(_BYTE *, __int64, CBlurredBackdropCache::CachedBlur *, _QWORD *))std::move<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>)(
    v14,
    v4 + 136 * v7,
    v3,
    v13);
LABEL_3:
  v11 = 136 * a3;
  result = detail::destruct_range<CBlurredBackdropCache::CachedBlur>(
             (CBlurredBackdropCache::CachedBlur *)((char *)v3 - v11),
             v3);
  a1[1] -= v11;
  return result;
}
