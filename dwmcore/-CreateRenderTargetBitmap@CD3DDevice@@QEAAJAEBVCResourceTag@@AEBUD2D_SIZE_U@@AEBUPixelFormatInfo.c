__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        CD3DDevice *a1,
        const struct CResourceTag *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        struct RenderTargetInfo *a5,
        int a6,
        struct IRenderTargetBitmap **a7)
{
  struct IRenderTargetBitmap **v7; // rsi
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  int DeviceTextureTarget; // eax
  unsigned int v14; // ecx
  struct IDeviceTarget *v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx

  v7 = a7;
  *a7 = 0LL;
  v9 = *((_DWORD *)a1 + 272);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, &dword_1802EB290, 2u, v9, 0x40Cu, 0LL);
  }
  else if ( a6 )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CRenderTargetBitmapCache::GetCachedTargetBitmap)(
            (char *)a1 + 464,
            a2,
            *a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802EB290, 2u, v10, 0x415u, 0LL);
  }
  else
  {
    a7 = 0LL;
    DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(a1, a2, a3, a4, a5, (struct IDeviceTextureTarget **)&a7);
    v9 = DeviceTextureTarget;
    if ( DeviceTextureTarget < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802EB290, 2u, DeviceTextureTarget, 0x41Eu, 0LL);
    }
    else
    {
      if ( a7 )
        v15 = (struct IDeviceTarget *)((char *)a7 + *((int *)a7[1] + 6) + 8);
      else
        v15 = 0LL;
      v16 = CRenderTargetBitmap::Create(v15, v7);
      v9 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802EB290, 2u, v16, 0x421u, 0LL);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&a7);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, (unsigned int)v9, 0LL);
}
