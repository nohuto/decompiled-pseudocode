__int64 __fastcall CDxHandleYUVBitmapRealization::GetDeviceTexture(
        CDxHandleYUVBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int DeviceTexture; // ebx
  __int64 v10; // rcx

  *a3 = 0LL;
  v6 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 456));
  DeviceTexture = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x11Eu, 0LL);
    return DeviceTexture;
  }
  v10 = *((_QWORD *)this - 21);
  if ( !*(_BYTE *)(v10 + 152) )
  {
    *a3 = 0LL;
    DeviceTexture = -2003292412;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, DeviceTexture, 0x120u, 0LL);
    return DeviceTexture;
  }
  DeviceTexture = CRenderTargetBitmap::GetDeviceTexture((CRenderTargetBitmap *)(v10 + 240), a2, a3, v8);
  if ( (DeviceTexture & 0x80000000) != 0 )
    goto LABEL_6;
  return DeviceTexture;
}
