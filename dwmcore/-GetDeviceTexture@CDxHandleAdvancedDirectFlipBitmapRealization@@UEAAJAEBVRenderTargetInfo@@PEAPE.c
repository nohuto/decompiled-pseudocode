__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetDeviceTexture(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int updated; // eax
  __int64 v7; // rcx
  unsigned int DeviceTexture; // ebx
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  if ( (**((unsigned __int8 (__fastcall ***)(char *))this - 14))((char *)this - 112) )
  {
    updated = CDxHandleAdvancedDirectFlipBitmapRealization::UpdateDecodeBitmap((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 512));
    DeviceTexture = updated;
    if ( updated < 0 )
    {
      v12 = 89;
      goto LABEL_11;
    }
    v10 = *((_QWORD *)this - 28);
    if ( *(_BYTE *)(v10 + 152) )
    {
      DeviceTexture = CRenderTargetBitmap::GetDeviceTexture((CRenderTargetBitmap *)(v10 + 240), a2, a3, v9);
      if ( (DeviceTexture & 0x80000000) == 0 )
        return DeviceTexture;
    }
    else
    {
      *a3 = 0LL;
      DeviceTexture = -2003292412;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, DeviceTexture, 0x5Cu, 0LL);
    return DeviceTexture;
  }
  updated = CDxHandleBitmapRealization::GetDeviceTexture(
              (CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 48),
              a2,
              a3);
  DeviceTexture = updated;
  if ( updated < 0 )
  {
    v12 = 85;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, updated, v12, 0LL);
  }
  return DeviceTexture;
}
