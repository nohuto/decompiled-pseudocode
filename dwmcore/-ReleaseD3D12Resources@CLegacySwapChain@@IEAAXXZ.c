void __fastcall CLegacySwapChain::ReleaseD3D12Resources(CLegacySwapChain *this)
{
  volatile signed __int32 *v2; // rcx
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 44);
  *((_QWORD *)this + 44) = 0LL;
  if ( v2 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
  v3 = (_QWORD *)*((_QWORD *)this + 32);
  for ( i = (_QWORD *)*((_QWORD *)this + 31); i != v3; ++i )
    wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset(*i + 96LL);
}
