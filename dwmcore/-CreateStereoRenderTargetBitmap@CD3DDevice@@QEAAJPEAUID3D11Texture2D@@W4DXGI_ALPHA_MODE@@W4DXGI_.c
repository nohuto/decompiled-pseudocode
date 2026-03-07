__int64 __fastcall CD3DDevice::CreateStereoRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        struct IStereoRenderTargetBitmap **a7)
{
  int DeviceTextureTarget; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  struct IDeviceTextureTarget *v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v13[0] = 0LL;
  DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(a1, a2, a3, a4, a5, a6, 0, (__int64 *)v13);
  v9 = DeviceTextureTarget;
  if ( DeviceTextureTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DeviceTextureTarget, 0x56Eu, 0LL);
  }
  else
  {
    v10 = CStereoRenderTargetBitmap::Create(v13[0], a7);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x571u, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v13);
  return v9;
}
