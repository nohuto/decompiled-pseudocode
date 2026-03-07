__int64 *__fastcall std::vector<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>::clear(__int64 **a1)
{
  __int64 *v1; // rsi
  __int64 *i; // rbx
  __int64 *result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; ++i )
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(i);
  result = *a1;
  a1[1] = *a1;
  return result;
}
