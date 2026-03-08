/*
 * XREFs of ??1CBlurredBackdropCache@@QEAA@XZ @ 0x1800D11C8
 * Callers:
 *     ??1CExternalEffectGraph@@MEAA@XZ @ 0x1800D12A4 (--1CExternalEffectGraph@@MEAA@XZ.c)
 * Callees:
 *     ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x18002DD30 (-erase@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCac.c)
 *     ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180030F7C (-last@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180030FB4 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ?clear_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180039864 (-clear_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CBlu.c)
 */

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
