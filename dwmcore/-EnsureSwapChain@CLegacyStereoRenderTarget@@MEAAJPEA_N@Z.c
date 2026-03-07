__int64 __fastcall CLegacyStereoRenderTarget::EnsureSwapChain(CLegacyStereoRenderTarget *this, bool *a2)
{
  __int64 *v2; // rbx
  __int64 v4; // r8
  __int64 (__fastcall ***v6)(_QWORD); // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int DXGIOutput; // esi
  __int64 *v10; // rcx
  unsigned int v11; // edx
  __int64 *v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  __int16 v15; // cx
  char v16; // al
  struct IDXGIOutput *v17; // rcx
  int Device; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  CD3DDevice *v22; // rbx
  int LegacyStereoSwapChain; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  CLegacyStereoSwapChain *v27; // rcx
  CD3DDevice *v28; // rcx
  int v29; // r9d
  CResource *v30; // rcx
  unsigned int v32; // [rsp+20h] [rbp-E0h]
  struct IDXGIOutput *v33; // [rsp+40h] [rbp-C0h] BYREF
  CD3DDevice *v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v35; // [rsp+50h] [rbp-B0h]
  struct IDXGIOutputDWM *v36; // [rsp+58h] [rbp-A8h] BYREF
  char v37; // [rsp+60h] [rbp-A0h]
  char v38[28]; // [rsp+70h] [rbp-90h] BYREF
  int v39; // [rsp+8Ch] [rbp-74h]
  int v40; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+DCh] [rbp-24h]

  v2 = (__int64 *)((char *)this + 184);
  *a2 = 0;
  v4 = *((_QWORD *)this + 23);
  if ( v4 )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD))(v4 + 8 + *(int *)(*(_QWORD *)(v4 + 8) + 12LL));
    v7 = (**v6)(v6);
    DXGIOutput = v7;
    if ( v7 >= 0 )
      return DXGIOutput;
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180383C88, 3u, v7, 0x54u, 0LL);
    v10 = (__int64 *)((char *)this + 176);
    goto LABEL_34;
  }
  v11 = *((_DWORD *)this + 4606);
  v12 = (__int64 *)((char *)this + 176);
  v35 = (__int64 *)((char *)this + 176);
  v33 = 0LL;
  v36 = 0LL;
  v37 = 1;
  DXGIOutput = CDisplayManager::GetDXGIOutput(this, v11, &v36);
  if ( v37 )
  {
    v13 = *v35;
    *v35 = (__int64)v36;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( (DXGIOutput & 0x80000000) != 0 )
  {
    v29 = DXGIOutput;
    v32 = 94;
    goto LABEL_32;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v12 + 32LL))(*v12, v38);
  DXGIOutput = v14;
  if ( v14 < 0 )
  {
    v32 = 97;
    goto LABEL_29;
  }
  v15 = v41;
  *((_DWORD *)this + 26) = v39;
  *((_DWORD *)this + 27) = v40;
  v16 = HIBYTE(v15) & 1;
  *((_BYTE *)this + 18697) = (v15 & 8) != 0;
  v17 = v33;
  *((_BYTE *)this + 18696) = v16;
  *((_BYTE *)this + 18698) = 0;
  if ( v17 )
    ((void (__fastcall *)(struct IDXGIOutput *))v17->lpVtbl->Release)(v17);
  v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIOutput **))*v12)(
          *v12,
          &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa,
          &v33);
  DXGIOutput = v14;
  if ( v14 < 0 )
  {
    v32 = 107;
LABEL_29:
    v29 = v14;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180383C88, 3u, v29, v32, 0LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
    goto LABEL_33;
  }
  v34 = 0LL;
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *(struct _LUID *)((char *)this + 18460), &v34);
  DXGIOutput = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180383C88, 3u, Device, 0x6Du, 0LL);
    v28 = v34;
    if ( !v34 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v20 = *((_QWORD *)this + 2338);
  *((_QWORD *)this + 2338) = 0LL;
  if ( v20 )
  {
    v21 = v20 + 8 + *(int *)(*(_QWORD *)(v20 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v34;
  LegacyStereoSwapChain = CD3DDevice::CreateLegacyStereoSwapChain(
                            v34,
                            v33,
                            (const struct D2D_SIZE_U *)this + 13,
                            (CLegacyStereoRenderTarget *)((char *)this + 112),
                            (CLegacyStereoRenderTarget *)((char *)this + 18460),
                            *((_DWORD *)this + 4607),
                            (struct CLegacyStereoSwapChain **)this + 2338);
  DXGIOutput = LegacyStereoSwapChain;
  if ( LegacyStereoSwapChain < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, &dword_180383C88, 3u, LegacyStereoSwapChain, 0x74u, 0LL);
    goto LABEL_21;
  }
  wil::com_ptr_t<ILegacySwapChain,wil::err_returncode_policy>::operator=<CLegacyStereoSwapChain,wil::err_returncode_policy,void>(
    (__int64 *)this + 23,
    (__int64)this + 18704);
  v25 = COverlayContext::OnSwapChainCreated((CLegacyStereoRenderTarget *)((char *)this + 200));
  DXGIOutput = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_180383C88, 3u, v25, 0x78u, 0LL);
LABEL_21:
    if ( !v22 )
    {
LABEL_24:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
      v2 = (__int64 *)((char *)this + 184);
LABEL_33:
      v10 = v12;
LABEL_34:
      if ( DXGIOutput == -2003304306 && *((_BYTE *)this + 18698) )
        *((_BYTE *)this + 18698) = 0;
      wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(v10);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v2);
      v30 = (CResource *)*((_QWORD *)this + 24);
      *((_QWORD *)this + 24) = 0LL;
      if ( v30 )
        CResource::InternalRelease(v30);
      *((_BYTE *)this + 18702) = 0;
      return DXGIOutput;
    }
    v28 = v22;
LABEL_23:
    CD3DDevice::Release(v28);
    goto LABEL_24;
  }
  v27 = (CLegacyStereoSwapChain *)*((_QWORD *)this + 2338);
  *((_BYTE *)this + 141) = 1;
  *((_BYTE *)this + 18701) = 1;
  *((_BYTE *)this + 18712) = CLegacyStereoSwapChain::SupportsTemporaryMono(v27);
  *a2 = 1;
  if ( v22 )
    CD3DDevice::Release(v22);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
  return DXGIOutput;
}
