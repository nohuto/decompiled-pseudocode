__int64 __fastcall detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::emplace_back<EffectInput>(
        _QWORD *a1,
        const struct EffectInput *a2)
{
  const struct EffectInput *v4; // rdi
  EffectInput *v5; // rax
  _BYTE v7[112]; // [rsp+20h] [rbp-78h] BYREF

  v4 = EffectInput::EffectInput((EffectInput *)v7, a2);
  v5 = (EffectInput *)detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::reserve_region(
                        a1,
                        0x4EC4EC4EC4EC4EC5LL * ((__int64)(a1[1] - *a1) >> 3));
  EffectInput::EffectInput(v5, v4);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v4 + 8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v4);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)a2 + 8);
  return wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)a2);
}
