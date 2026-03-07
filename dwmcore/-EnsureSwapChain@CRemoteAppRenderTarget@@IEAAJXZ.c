__int64 __fastcall CRemoteAppRenderTarget::EnsureSwapChain(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // edi
  __int64 *v3; // r14
  __int64 v4; // rdx
  int (__fastcall ***v5)(_QWORD); // rcx
  CDisplayManager *v6; // rcx
  int Device; // eax
  __int64 v8; // rcx
  int CompositionSwapChain; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  CD3DDevice *v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-38h]
  struct _LUID v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+3Ch] [rbp-1Ch]
  int v18; // [rsp+40h] [rbp-18h]
  char v19; // [rsp+44h] [rbp-14h]
  CD3DDevice *v20; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1104LL) == 6 )
  {
    v3 = (__int64 *)((char *)this + 168);
    v4 = *((_QWORD *)this + 21);
    if ( !v4 || (v5 = (int (__fastcall ***)(_QWORD))(v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 12LL)), (**v5)(v5) < 0) )
    {
      CRemoteAppRenderTarget::ReleaseSwapChain(this);
      CDisplayManager::GetPrimaryAdapterLuid(v6, &v15);
      v17 = 0;
      v20 = 0LL;
      v18 = 0;
      v16 = DisplayId::None;
      v19 = 0;
      Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v15, &v20);
      v1 = Device;
      if ( Device < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, Device, 0x1FEu, 0LL);
        v12 = v20;
        if ( v20 )
          goto LABEL_11;
      }
      else
      {
        wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v3);
        CompositionSwapChain = CD3DDevice::CreateCompositionSwapChain(
                                 v20,
                                 (const struct D2D_SIZE_U *)this + 13,
                                 (CRemoteAppRenderTarget *)((char *)this + 112),
                                 (const struct RenderTargetInfo *)&v15,
                                 v14,
                                 (struct ICompositionSwapChain **)v3);
        v1 = CompositionSwapChain;
        if ( CompositionSwapChain < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, CompositionSwapChain, 0x204u, 0LL);
        }
        else
        {
          v11 = *v3 + 8 + *(int *)(*(_QWORD *)(*v3 + 8) + 12LL);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 40LL))(
            v11,
            ((unsigned __int64)this + 144) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
          *((_QWORD *)this + 22) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 72LL))(*v3);
          *((_BYTE *)this + 293) = 1;
          *((_BYTE *)this + 141) = 1;
        }
        if ( v20 )
        {
          v12 = v20;
LABEL_11:
          CD3DDevice::Release(v12);
        }
      }
    }
  }
  return v1;
}
