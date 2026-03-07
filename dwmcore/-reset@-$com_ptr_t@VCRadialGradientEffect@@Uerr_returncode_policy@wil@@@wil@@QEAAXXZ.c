volatile signed __int32 *__fastcall wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(result);
  return result;
}
