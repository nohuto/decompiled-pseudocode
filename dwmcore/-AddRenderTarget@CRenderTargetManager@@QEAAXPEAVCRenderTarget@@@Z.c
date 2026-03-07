void __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rdx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  struct CRenderTarget *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( *((_BYTE *)this + 576) || *((_QWORD *)this + 71) == GetCurrentFrameId() )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 5);
    if ( v5 == *((_QWORD **)this + 6) )
    {
      std::vector<CRenderTarget *>::_Emplace_reallocate<CRenderTarget * const &>((char *)this + 32, v5, &v7);
    }
    else
    {
      *v5 = a2;
      *((_QWORD *)this + 5) += 8LL;
    }
  }
  else
  {
    v6 = 0LL;
    if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(
                (__int64)a2,
                &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
                &v6) >= 0 )
    {
      *((_BYTE *)this + 578) = 1;
      *((_BYTE *)this + 580) = 1;
    }
    v4 = (_QWORD *)*((_QWORD *)this + 2);
    if ( v4 == *((_QWORD **)this + 3) )
    {
      std::vector<CRenderTarget *>::_Emplace_reallocate<CRenderTarget * const &>((char *)this + 8, v4, &v7);
    }
    else
    {
      *v4 = a2;
      *((_QWORD *)this + 2) += 8LL;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v6);
  }
}
