__int64 __fastcall CRemoteAppRenderTarget::SendMetaData(
        CRemoteAppRenderTarget *this,
        const struct _DWMIndirectMetaData *a2)
{
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, CRemoteAppRenderTarget **); // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  CRemoteAppRenderTarget *v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  v13 = this;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 27));
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    &v15,
    (__int64)PrimaryMonitorTarget);
  if ( v15 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 144LL))(v15);
    wil::com_ptr_t<ISwapChain,wil::err_returncode_policy>::com_ptr_t<ISwapChain,wil::err_returncode_policy>(&v14, v4);
    if ( v14 )
    {
      v13 = 0LL;
      v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, CRemoteAppRenderTarget **))(*(int *)(*(_QWORD *)(v14 + 8) + 4LL)
                                                                               + v14
                                                                               + 8);
      v7 = (**v6)(v6, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v13);
      v9 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2E5u, 0LL);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(CRemoteAppRenderTarget *, const struct _DWMIndirectMetaData *))(*(_QWORD *)v13 + 64LL))(
                v13,
                a2);
        v9 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2E7u, 0LL);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13);
    }
    else
    {
      v9 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003304307, 0x2EBu, 0LL);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v14);
  }
  else
  {
    v9 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003304442, 0x2F0u, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
  return v9;
}
