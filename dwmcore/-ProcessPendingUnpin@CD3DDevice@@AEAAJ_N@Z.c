__int64 __fastcall CD3DDevice::ProcessPendingUnpin(CD3DDevice *this, char a2)
{
  unsigned int v2; // edi
  char *v3; // rsi
  __int64 v4; // rbx
  __int128 v7; // kr00_16
  int v9; // eax
  __int64 v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  char v14; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v3 = (char *)this + 1200;
  v12 = 0LL;
  v4 = *((_QWORD *)this + 150);
  v11 = 0LL;
  while ( v4 != *((_QWORD *)this + 151) )
  {
    if ( !*(_DWORD *)(v4 + 28) || a2 )
    {
      std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>(
        &v11,
        v4);
      v13 = v4;
      v4 = *(_QWORD *)detail::vector_facade<CD3DDevice::CUnpinResource,detail::buffer_impl<CD3DDevice::CUnpinResource,7,1,detail::liberal_expansion_policy>>::erase(
                        v3,
                        &v14,
                        &v13);
    }
    else
    {
      v4 += 32LL;
    }
  }
  v7 = v11;
  if ( (_QWORD)v11 != *((_QWORD *)&v11 + 1) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
      McTemplateU0q_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &Pinning_D3DUnpinStart,
        (__int64)(*((_QWORD *)&v11 + 1) - v11) >> 3);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 68) + 32LL))(
           *((_QWORD *)this + 68),
           v7,
           (unsigned int)((__int64)(*((_QWORD *)&v7 + 1) - v7) >> 3));
    v2 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x3E2u, 0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
      McTemplateU0q_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &Pinning_D3DUnpinStop, v2);
    if ( v2 )
      v2 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v2, 0);
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Tidy(&v11);
  return v2;
}
