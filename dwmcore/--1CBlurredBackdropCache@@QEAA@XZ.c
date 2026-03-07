void __fastcall CBlurredBackdropCache::~CBlurredBackdropCache(CBlurredBackdropCache *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // r15
  __int64 v4; // r8
  void *v5; // rcx
  bool v6; // zf
  _QWORD *v7; // rbp
  __int64 v8; // rsi
  CBlurredBackdropCache **v9; // rax
  __int64 v10; // rdi
  CBlurredBackdropCache **i; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD **)this;
  v3 = (_QWORD *)*((_QWORD *)this + 1);
  while ( v1 != v3 )
  {
    v7 = (_QWORD *)(*v1 + 1904LL);
    v8 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::last((__int64)v7);
    v9 = (CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(v7);
    v10 = (__int64)v9;
    for ( i = v9; i != (CBlurredBackdropCache **)v8 && *v9 != this; i = ++v9 )
      v10 = (__int64)(v9 + 1);
    if ( v10 != detail::pointer_buffer_impl<CBlurredBackdropCache *>::last((__int64)v7) )
    {
      v12 = v10;
      detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::erase(
        (__int64)v7,
        &v13,
        &v12);
    }
    v1 += 17;
  }
  v4 = 0xF0F0F0F0F0F0F0F1uLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3);
  if ( v4 )
    detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this,
      0LL,
      v4);
  v5 = *(void **)this;
  v6 = *(_QWORD *)this == (_QWORD)this + 24;
  *(_QWORD *)this = 0LL;
  if ( v6 )
    v5 = 0LL;
  operator delete(v5);
}
