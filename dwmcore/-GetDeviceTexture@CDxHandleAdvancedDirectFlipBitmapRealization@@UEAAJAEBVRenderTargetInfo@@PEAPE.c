/*
 * XREFs of ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AEBF4
 * Callers:
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011E8D0 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTarge.c)
 * Callees:
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033AC4 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033CD0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AF138 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

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
