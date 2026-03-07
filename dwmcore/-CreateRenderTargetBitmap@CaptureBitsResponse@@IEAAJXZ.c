__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  int v1; // eax
  enum DXGI_COLOR_SPACE_TYPE v3; // edi
  int v4; // xmm0_4
  int Device; // eax
  unsigned int v6; // ecx
  CD3DDevice *v7; // rdi
  unsigned int v8; // esi
  char *v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  CDeviceManager *v13; // rcx
  int WarpDevice; // eax
  unsigned int v15; // ecx
  CD3DDevice *v16; // rbx
  int v17; // eax
  unsigned int v18; // ecx
  CD3DDevice *v19; // rcx
  char *v20; // [rsp+30h] [rbp-50h]
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v22; // [rsp+48h] [rbp-38h]
  const char *v23; // [rsp+50h] [rbp-30h] BYREF
  int v24; // [rsp+58h] [rbp-28h]
  struct _LUID v25; // [rsp+60h] [rbp-20h] BYREF
  int v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+6Ch] [rbp-14h]
  int v28; // [rsp+70h] [rbp-10h]
  char v29; // [rsp+74h] [rbp-Ch]
  int v30; // [rsp+A0h] [rbp+20h] BYREF
  int v31; // [rsp+A4h] [rbp+24h]
  CD3DDevice *v32; // [rsp+A8h] [rbp+28h] BYREF

  v1 = *((_DWORD *)this + 409);
  v3 = *((_DWORD *)this + 413);
  v21 = *(_QWORD *)((char *)this + 1644);
  v30 = v1;
  v31 = *((_DWORD *)this + 410);
  v22 = v3;
  if ( (_DWORD)v21 == 88 )
    v21 = 0x300000057LL;
  CDisplayManager::GetPrimaryAdapterLuid(this);
  v27 = 0;
  v26 = DisplayId::All;
  if ( IsDXGIColorSpaceHDR(v3) )
    v4 = (int)FLOAT_1_0;
  else
    v4 = 0;
  v32 = 0LL;
  v28 = v4;
  v29 = 0;
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v25, &v32);
  v7 = v32;
  v8 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, Device, 0x13Au, 0LL);
  }
  else
  {
    v9 = (char *)this + 64;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v9);
    v23 = "DWM Scratch Rendertarget (capturebits)";
    v24 = 38;
    v10 = CD3DDevice::CreateRenderTargetBitmap(v7, &v23, &v30, &v21, &v25, 1, v9);
    v8 = v10;
    if ( v10 >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x142u, 0LL);
    v32 = 0LL;
    WarpDevice = CDeviceManager::GetWarpDevice(v13, &v32);
    v8 = WarpDevice;
    if ( WarpDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, WarpDevice, 0x148u, 0LL);
      v19 = v32;
      if ( !v32 )
        goto LABEL_7;
      goto LABEL_17;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v9);
    v20 = v9;
    v16 = v32;
    v23 = "DWM Scratch Rendertarget (capturebits)";
    v24 = 38;
    v17 = CD3DDevice::CreateRenderTargetBitmap(v32, &v23, &v30, &v21, &v25, 1, v20);
    v8 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x14Fu, 0LL);
    if ( v16 )
    {
      v19 = v16;
LABEL_17:
      CD3DDevice::Release(v19);
    }
  }
LABEL_7:
  if ( v7 )
    CD3DDevice::Release(v7);
  return v8;
}
