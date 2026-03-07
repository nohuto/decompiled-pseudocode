__int64 __fastcall CDDARenderTarget::EnsureSwapChain(CDDARenderTarget *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  unsigned int v4; // edi
  int (__fastcall ***v5)(_QWORD); // rcx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, struct IDXGIOutput **); // rcx
  int v7; // eax
  __int64 v8; // rcx
  const struct RenderTargetInfo *v9; // r14
  int Device; // eax
  __int64 v11; // rcx
  const struct PixelFormatInfo *v12; // r9
  const struct D2D_SIZE_U *v13; // r8
  CD3DDevice *v14; // rbx
  int DDASwapChain; // eax
  __int64 v16; // rcx
  CD3DDevice *v17; // rcx
  struct IDXGIOutput *v19; // [rsp+50h] [rbp+8h] BYREF
  CD3DDevice *v20; // [rsp+58h] [rbp+10h] BYREF

  v1 = (__int64 *)((char *)this + 160);
  v3 = *((_QWORD *)this + 20);
  v4 = 0;
  if ( !v3 || (v5 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v3 + 8) + 12LL) + v3 + 8), (**v5)(v5) < 0) )
  {
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v1);
    if ( *((_DWORD *)this + 26) )
    {
      if ( *((_DWORD *)this + 27) )
      {
        v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IDXGIOutput **))*((_QWORD *)this + 19);
        v19 = 0LL;
        v7 = (**v6)(v6, &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa, &v19);
        v4 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x7Fu, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
          return v4;
        }
        v20 = 0LL;
        v9 = (CDDARenderTarget *)((char *)this + 176);
        Device = CDeviceManager::GetDevice(
                   (CDeviceManager *)&g_DeviceManager,
                   *(struct _LUID *)((char *)this + 176),
                   &v20);
        v4 = Device;
        if ( Device < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, Device, 0x81u, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
          v17 = v20;
          if ( v20 )
            goto LABEL_12;
        }
        else
        {
          wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v1);
          v12 = (CDDARenderTarget *)((char *)this + 112);
          v13 = (const struct D2D_SIZE_U *)((char *)this + 104);
          v14 = v20;
          DDASwapChain = CD3DDevice::CreateDDASwapChain(v20, v19, v13, v12, v9, (struct IDDASwapChain **)v1);
          v4 = DDASwapChain;
          if ( DDASwapChain < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, DDASwapChain, 0x87u, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v19);
          if ( v14 )
          {
            v17 = v14;
LABEL_12:
            CD3DDevice::Release(v17);
          }
        }
      }
    }
  }
  return v4;
}
