void __fastcall CBlurredBackdropCache::UpdateCachedBlur(
        struct CBackdropVisualImage ***this,
        struct CBackdropVisualImage *a2,
        const struct RenderTargetInfo *a3,
        const struct EffectInput *a4)
{
  struct CBackdropVisualImage **v4; // rbx
  struct CBackdropVisualImage **v9; // rsi
  struct CBackdropVisualImage **v10; // rdx
  __int64 v11; // rax
  __int128 v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp+8h]

  v4 = *this;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = this[1];
    if ( v4 == v10 )
      break;
    if ( a2 == *v4 && CanRenderToTargetFromSource(a3, (const struct RenderTargetInfo *)(v4 + 1)) )
    {
      v9 = v4;
      EffectInput::operator=(v4 + 4, a4);
    }
    v4 += 17;
  }
  if ( !v9 )
  {
    v12 = *(_OWORD *)a3;
    v13 = *((_QWORD *)a3 + 2);
    v11 = detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::reserve_region(
            this,
            0xF0F0F0F0F0F0F0F1uLL * (v10 - *this));
    *(_OWORD *)(v11 + 8) = v12;
    *(_QWORD *)v11 = a2;
    *(_QWORD *)(v11 + 24) = v13;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_BYTE *)(v11 + 48) = 0;
    *(_OWORD *)(v11 + 80) = 0LL;
    EffectInput::operator=(this[1] - 13, a4);
    CBackdropVisualImage::RegisterBlurCache(a2, (struct CBlurredBackdropCache *)this);
  }
}
