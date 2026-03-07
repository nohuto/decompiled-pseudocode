__int64 __fastcall CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
        CMagnifierRenderTarget *this,
        void *a2,
        struct _LUID a3,
        HMONITOR a4,
        struct IRenderTargetBitmap **a5)
{
  struct IRenderTargetBitmap **v5; // r14
  int v6; // esi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  int Device; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  CD3DDevice *v16; // rbx
  int RenderTargetBitmap; // eax
  __int64 v18; // rcx

  v5 = a5;
  v6 = (int)a4;
  *a5 = 0LL;
  if ( a4 )
  {
    v10 = CDisplayManager::ValidateLuidAndMonitor(this, a3, a4);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180383C70, 2u, v10, 0x1D7u, 0LL);
      return v12;
    }
  }
  else
  {
    v6 = DisplayId::None;
  }
  a5 = 0LL;
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, a3, (struct CD3DDevice **)&a5);
  v16 = (CD3DDevice *)a5;
  v12 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_180383C70, 2u, Device, 0x1DFu, 0LL);
  }
  else
  {
    RenderTargetBitmap = CD3DDevice::CreateRenderTargetBitmap(
                           a5,
                           a2,
                           v15,
                           *((unsigned int *)this + 29),
                           *((_DWORD *)this + 30),
                           v6,
                           0,
                           v5);
    v12 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, &dword_180383C70, 2u, RenderTargetBitmap, 0x1E7u, 0LL);
  }
  if ( v16 )
    CD3DDevice::Release(v16);
  return v12;
}
