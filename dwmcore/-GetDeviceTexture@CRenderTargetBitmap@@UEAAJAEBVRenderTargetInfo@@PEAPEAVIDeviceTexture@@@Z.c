/*
 * XREFs of ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180033AC4
 * Callers:
 *     ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011E650 (-GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceText.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011F7F0 (-GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18011FB50 (-GetDeviceTexture@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180131A7A (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 *     ?GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AEBD4 (-GetDeviceTexture@CDecodeBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802AEBF4 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z @ 0x180033DA0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceTexture(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3,
        __int64 a4)
{
  char *v4; // rdi
  __int64 v8; // r8
  __int64 v9; // rdx
  int BitmapInternal; // eax
  unsigned int v11; // ecx
  int v12; // ebx
  __int64 v13; // rax
  struct IDeviceTexture *v14; // rcx
  char *v16; // rcx
  unsigned int *v17; // rax
  unsigned int v18; // ecx
  int v19; // ebx
  char *v20; // rcx
  unsigned int *v21; // rax
  char *v22; // rcx
  unsigned int v23; // ecx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, struct IDeviceTexture **); // rcx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // edi
  unsigned int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // [rsp+60h] [rbp+8h] BYREF
  char v31; // [rsp+70h] [rbp+18h] BYREF

  v4 = (char *)this - 240;
  *a3 = 0LL;
  if ( !*((_QWORD *)this - 13) )
  {
    v27 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292412, 0x1A4u, 0LL);
    goto LABEL_21;
  }
  if ( !v4[144] )
    goto LABEL_3;
  v16 = &v4[*(int *)(*((_QWORD *)v4 + 2) + 12LL) + 16];
  v17 = (unsigned int *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v16 + 32LL))(v16, &v31);
  v18 = *v17;
  if ( *(_DWORD *)a2 != *v17
    || *((_DWORD *)a2 + 1) != v17[1]
    || (v19 = *((_DWORD *)a2 + 2),
        v20 = &v4[*(int *)(*((_QWORD *)v4 + 2) + 20LL) + 16],
        v21 = (unsigned int *)(*(__int64 (__fastcall **)(char *, __int64 *))(*(_QWORD *)v20 + 16LL))(v20, &v30),
        v18 = *v21,
        *v21 != DisplayId::None)
    && v18 != v19
    && v19 != DisplayId::All )
  {
    v27 = -2003304287;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2003304287, 0x199u, 0LL);
LABEL_21:
    v12 = v27;
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x8Au, 0LL);
    return (unsigned int)v12;
  }
  v22 = &v4[*(int *)(*((_QWORD *)v4 + 2) + 12LL) + 16];
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v22 + 24LL))(v22) && !*((_BYTE *)a2 + 20) )
  {
    v27 = -2147024891;
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2147024891, 0x19Eu, 0LL);
    goto LABEL_21;
  }
LABEL_3:
  if ( *((_BYTE *)this - 96) )
  {
    v24 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IDeviceTexture **))(*((_QWORD *)this - 13)
                                                                             + 8LL
                                                                             + *(int *)(*(_QWORD *)(*((_QWORD *)this - 13)
                                                                                                  + 8LL)
                                                                                      + 4LL));
    v25 = (**v24)(v24, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, a3);
    v12 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x92u, 0LL);
  }
  else
  {
    *a3 = 0LL;
    LOBYTE(a4) = *((_BYTE *)a2 + 20);
    v8 = *((unsigned int *)a2 + 2);
    v9 = *(_QWORD *)a2;
    v30 = 0LL;
    BitmapInternal = CD2DBitmapCache::GetBitmapInternal(v4, v9, v8, a4, &v30);
    v12 = BitmapInternal;
    if ( BitmapInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, BitmapInternal, 0x60u, 0LL);
      v13 = v30;
    }
    else
    {
      v13 = 0LL;
      if ( v30 )
        v14 = (struct IDeviceTexture *)(*(int *)(*(_QWORD *)(v30 + 8) + 20LL) + v30 + 8);
      else
        v14 = 0LL;
      *a3 = v14;
    }
    if ( v13 )
    {
      v29 = *(int *)(*(_QWORD *)(v13 + 8) + 4LL) + v13 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v14, 0LL, 0, v12, 0x8Eu, 0LL);
  }
  return (unsigned int)v12;
}
