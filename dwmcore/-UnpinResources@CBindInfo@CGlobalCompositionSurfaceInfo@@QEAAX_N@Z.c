void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        char a2)
{
  __int64 **v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 *v7; // rsi
  gsl::details *v8; // rcx
  int v9; // r9d
  __int64 v10; // r8
  _QWORD *v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 **)((char *)this + 112);
  if ( (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 3 )
  {
    v5 = **((_QWORD **)this + 9) + 8LL + *(int *)(*(_QWORD *)(**((_QWORD **)this + 9) + 8LL) + 8LL);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      McTemplateU0xx_EventWriteTransfer(
        *(_QWORD *)this,
        (__int64)&Pinning_CompSurfInfoUnpin,
        *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32),
        v2[1] - *v2);
    if ( !v6 || a2 )
    {
      v12 = (__int64 *)**v2;
      v13 = *v12;
      v16 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64 *))(v13 + 56))(
             v12,
             &GUID_fef19e0a_40c0_472b_ae40_59ef97af3529,
             &v16) >= 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
          McTemplateU0q_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&Pinning_D3DUnpinStart,
            v2[1] - *v2);
        v14 = (*(__int64 (__fastcall **)(__int64, __int64 *, signed __int64))(*(_QWORD *)v16 + 32LL))(
                v16,
                *v2,
                v2[1] - *v2);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
          McTemplateU0q_EventWriteTransfer(
            (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (__int64)&Pinning_D3DUnpinStop,
            v14);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
    }
    else
    {
      v7 = *v2;
      gsl::details::extent_type<-1>::extent_type<-1>(
        (gsl::details *)v15,
        (__int64)(*((_QWORD *)this + 15) - (_QWORD)*v2) >> 3);
      if ( v15[0] == -1LL || !v7 && v15[0] )
      {
        gsl::details::terminate(v8);
        __debugbreak();
      }
      v9 = *((_DWORD *)this + 54);
      v10 = *((_QWORD *)this + 26);
      v11 = *(_QWORD **)this;
      v15[1] = v7;
      CD3DDevice::DelayUnpinResources(v6, (_DWORD)v11, v10, v9, (__int64)v15);
    }
  }
  std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::clear(v2);
}
