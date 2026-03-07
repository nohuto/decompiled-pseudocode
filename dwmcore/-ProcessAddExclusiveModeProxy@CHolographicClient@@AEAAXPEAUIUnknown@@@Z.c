void __fastcall CHolographicClient::ProcessAddExclusiveModeProxy(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  wil::try_com_query_nothrow<IHolographicExclusiveModeManagerProxy,IUnknown * &>(&v6, &v5);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 152LL))(*((_QWORD *)this + 3));
    v3 = (__int64 *)*((_QWORD *)this + 14);
    if ( v3 == *((__int64 **)this + 15) )
    {
      std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>(
        (__int64 **)this + 13,
        v3,
        &v6);
    }
    else
    {
      v4 = v6;
      v6 = 0LL;
      *v3 = v4;
      *((_QWORD *)this + 14) += 8LL;
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v6);
}
