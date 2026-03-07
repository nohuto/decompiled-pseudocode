__int64 __fastcall CCachedVisualImage::CreateCachedTarget(
        CCachedVisualImage *this,
        struct D2D_SIZE_U a2,
        const struct RenderTargetInfo *a3,
        struct CCachedVisualImage::CCachedTarget **a4)
{
  __int64 v4; // rax
  char *v8; // rcx
  struct _LUID v9; // rdx
  int Device; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  const struct CResourceTag *v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  CCachedVisualImage::CCachedTarget *v16; // rax
  struct IRenderTargetBitmap *v18; // [rsp+40h] [rbp-40h] BYREF
  CD3DDevice *v19; // [rsp+48h] [rbp-38h] BYREF
  struct D2D_SIZE_U v20; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v21[16]; // [rsp+58h] [rbp-28h] BYREF
  int v22; // [rsp+68h] [rbp-18h] BYREF
  int v23; // [rsp+70h] [rbp-10h]

  v4 = *((_QWORD *)this + 8);
  v18 = 0LL;
  v20 = a2;
  v8 = (char *)this + *(int *)(v4 + 8) + 64;
  (**(void (__fastcall ***)(char *, int *))v8)(v8, &v22);
  *a4 = 0LL;
  if ( RenderTargetInfo::IsHDR(a3) )
  {
    v22 = 10;
    v23 = 1;
  }
  else
  {
    v23 = 0;
    v22 = 87;
  }
  v9 = *(struct _LUID *)a3;
  v19 = 0LL;
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v9, &v19);
  v12 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, Device, 0x371u, 0LL);
  }
  else
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v18);
    v13 = (const struct CResourceTag *)(*(__int64 (__fastcall **)(CCachedVisualImage *, _BYTE *))(*(_QWORD *)this + 200LL))(
                                         this,
                                         v21);
    v14 = CD3DDevice::CreateRenderTargetBitmap(v19, v13, &v20, (const struct PixelFormatInfo *)&v22, a3, 0, &v18);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x378u, 0LL);
    }
    else
    {
      v16 = (CCachedVisualImage::CCachedTarget *)DefaultHeap::Alloc(0x40uLL);
      if ( v16 )
        v16 = (CCachedVisualImage::CCachedTarget *)CCachedVisualImage::CCachedTarget::CCachedTarget(v16, this, v18);
      *a4 = v16;
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v18);
  if ( v19 )
    CD3DDevice::Release(v19);
  return v12;
}
