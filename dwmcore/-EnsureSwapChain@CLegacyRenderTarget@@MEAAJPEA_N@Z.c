__int64 __fastcall CLegacyRenderTarget::EnsureSwapChain(CLegacyRenderTarget *this, bool *a2)
{
  struct ILegacySwapChain **v2; // r14
  __int64 v4; // rcx
  unsigned int v6; // esi
  int (__fastcall ***v7)(_QWORD); // rcx
  __int64 v8; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  struct _LUID v14; // rdx
  int Device; // eax
  __int64 v16; // rcx
  CD3DDevice *v17; // rbx
  int LegacySwapChain; // eax
  __int64 v19; // rcx
  int v20; // eax
  struct ILegacySwapChain *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  CD3DDevice *v25; // rcx
  int ConversionSwapChain; // eax
  __int64 v27; // rcx
  struct IDXGIOutput *v28; // [rsp+90h] [rbp+40h] BYREF
  CD3DDevice *v29; // [rsp+98h] [rbp+48h] BYREF

  v2 = (struct ILegacySwapChain **)((char *)this + 184);
  *a2 = 0;
  v4 = *((_QWORD *)this + 23);
  v6 = 0;
  if ( !v4 )
  {
    v28 = 0LL;
    *((_QWORD *)this + 2305) = *(_QWORD *)((char *)this + 18460);
    *((_DWORD *)this + 4614) = *((_DWORD *)this + 4606);
    v10 = CLegacyRenderTarget::EnsureDXGIOutput(this);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180353B08, 4u, v10, 0x466u, 0LL);
      goto LABEL_18;
    }
    CMonitorTransform::Initialize((char *)this + 18168, (char *)this + 104, (char *)this + 18172);
    if ( v28 )
      ((void (__fastcall *)(struct IDXGIOutput *))v28->lpVtbl->Release)(v28);
    v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIOutput **))this + 22))(
            *((_QWORD *)this + 22),
            &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa,
            &v28);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180353B08, 4u, v12, 0x471u, 0LL);
      goto LABEL_18;
    }
    v14 = *(struct _LUID *)((char *)this + 18460);
    v29 = 0LL;
    Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v14, &v29);
    v6 = Device;
    if ( Device < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_180353B08, 4u, Device, 0x473u, 0LL);
      v25 = v29;
      if ( !v29 )
        goto LABEL_18;
      goto LABEL_17;
    }
    if ( *((_DWORD *)this + 30) > 1u )
    {
      *((_BYTE *)this + 18698) = 0;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v2);
      v17 = v29;
      ConversionSwapChain = CD3DDevice::CreateConversionSwapChain(
                              v29,
                              v28,
                              (const struct D2D_SIZE_U *)this + 13,
                              (CLegacyRenderTarget *)((char *)this + 112),
                              (CLegacyRenderTarget *)((char *)this + 18460),
                              *((_DWORD *)this + 4607),
                              v2);
      v6 = ConversionSwapChain;
      if ( ConversionSwapChain >= 0 )
      {
LABEL_11:
        *((_QWORD *)this + 2304) = *(_QWORD *)(*(__int64 (__fastcall **)(struct ILegacySwapChain *, CD3DDevice **))(*(_QWORD *)*v2 + 48LL))(
                                                *v2,
                                                &v29);
        v20 = (*(__int64 (__fastcall **)(struct ILegacySwapChain *))(*(_QWORD *)*v2 + 56LL))(*v2);
        v21 = *v2;
        *((_DWORD *)this + 4612) = v20;
        *((_DWORD *)this + 4613) = (*(__int64 (__fastcall **)(struct ILegacySwapChain *))(*(_QWORD *)v21 + 64LL))(v21);
        v22 = COverlayContext::OnSwapChainCreated((CLegacyRenderTarget *)((char *)this + 200));
        v6 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, &dword_180353B08, 4u, v22, 0x496u, 0LL);
        }
        else
        {
          CLegacyRenderTarget::CheckForceParallelMode(this);
          if ( CComposition::GetCompositorClockBoost(*((CComposition **)this + 2)) )
          {
            LOBYTE(v24) = 1;
            (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 18) + 112LL))((char *)this + 144, v24);
          }
          *((_BYTE *)this + 141) = 1;
          *(_WORD *)((char *)this + 18701) = 1;
          *a2 = 1;
        }
        goto LABEL_15;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_180353B08, 4u, ConversionSwapChain, 0x48Fu, 0LL);
    }
    else
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v2);
      v17 = v29;
      LegacySwapChain = CD3DDevice::CreateLegacySwapChain(
                          v29,
                          v28,
                          (const struct D2D_SIZE_U *)this + 13,
                          (CLegacyRenderTarget *)((char *)this + 112),
                          (CLegacyRenderTarget *)((char *)this + 18460),
                          *((_DWORD *)this + 4607),
                          *((_BYTE *)this + 18698),
                          v2);
      v6 = LegacySwapChain;
      if ( LegacySwapChain >= 0 )
        goto LABEL_11;
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180353B08, 4u, LegacySwapChain, 0x482u, 0LL);
    }
LABEL_15:
    if ( !v17 )
    {
LABEL_18:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
      if ( (v6 & 0x80000000) == 0 )
        return v6;
      if ( v6 == -2003304306 && *((_BYTE *)this + 18698) )
        *((_BYTE *)this + 18698) = 0;
LABEL_32:
      CLegacyRenderTarget::ReleaseSwapChain(this);
      return v6;
    }
    v25 = v17;
LABEL_17:
    CD3DDevice::Release(v25);
    goto LABEL_18;
  }
  v7 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v4 + 8) + 12LL) + v4 + 8);
  if ( (**v7)(v7) < 0 )
  {
    v6 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180353B08, 4u, -2003304442, 0x45Bu, 0LL);
    goto LABEL_32;
  }
  return v6;
}
