/*
 * XREFs of ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800640B0
 * Callers:
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800F8330 (-GetDeviceTexture@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDev.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800F8340 (-GetDeviceTexture@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDe.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180263B98 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180064170 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDeviceTexture(
        CDxHandleBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  char *v3; // rsi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebp
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  int BitmapInternal; // eax
  __int64 v13; // rcx
  int v14; // ebx
  struct IDeviceTexture *v15; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = (char *)this - 432;
  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 56LL))(v3);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xAEu, 0LL);
    return v8;
  }
  else
  {
    *a3 = 0LL;
    v9 = *((unsigned __int8 *)a2 + 20);
    v10 = *((unsigned int *)a2 + 2);
    v11 = *(_QWORD *)a2;
    v18 = 0LL;
    BitmapInternal = CD2DBitmapCache::GetBitmapInternal(v3, v11, v10, v9, &v18);
    v14 = BitmapInternal;
    if ( BitmapInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, BitmapInternal, 0x60u, 0LL);
      if ( v18 )
      {
        v17 = *(int *)(*(_QWORD *)(v18 + 8) + 4LL) + v18 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    else
    {
      if ( v18 )
      {
        v13 = *(_QWORD *)(v18 + 8);
        v15 = (struct IDeviceTexture *)(*(int *)(v13 + 20) + v18 + 8);
      }
      else
      {
        v15 = 0LL;
      }
      *a3 = v15;
    }
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, 0xB0u, 0LL);
    return (unsigned int)v14;
  }
}
