/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C02E3D84
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C02E9F40 (DxgkCheckMultiPlaneOverlaySupport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C017DA78 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E3050 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *a3,
        bool a4,
        int *a5)
{
  unsigned int v9; // r8d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *p_VidPnSourceId; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v11; // rsi
  char *v12; // rcx
  char *v13; // r9
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v14; // r10
  char *v15; // r11
  int v16; // eax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v19; // eax
  __int128 v20; // xmm0
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v21; // eax
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v23; // [rsp+40h] [rbp-448h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v24[8]; // [rsp+50h] [rbp-438h] BYREF
  char v25; // [rsp+90h] [rbp-3F8h] BYREF
  char v26; // [rsp+94h] [rbp-3F4h] BYREF
  char v27; // [rsp+190h] [rbp-2F8h] BYREF
  char v28; // [rsp+194h] [rbp-2F4h] BYREF

  *a5 = 0;
  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(this[2]) && *(_QWORD *)(*((_QWORD *)this[2] + 2) + 896LL) )
  {
    memset(v24, 0, sizeof(v24));
    v9 = 0;
    if ( a2 )
    {
      p_VidPnSourceId = &a3->VidPnSourceId;
      v11 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v25;
      v12 = &v28;
      v13 = &v26;
      v14 = v24;
      v15 = &v27;
      do
      {
        v16 = *(p_VidPnSourceId - 3);
        v17 = *(_OWORD *)(p_VidPnSourceId + 2);
        *((_DWORD *)v12 + 14) = 0;
        v18 = *(_OWORD *)(p_VidPnSourceId + 6);
        *(_QWORD *)(v12 + 60) = 0LL;
        *(_DWORD *)v13 = v16;
        *(_QWORD *)(v13 + 4) = *((_QWORD *)p_VidPnSourceId - 1);
        *((_DWORD *)v13 + 3) = *p_VidPnSourceId;
        *((_DWORD *)v12 - 1) = p_VidPnSourceId[1];
        *((_DWORD *)v12 + 12) = p_VidPnSourceId[14];
        *((_DWORD *)v12 + 13) = p_VidPnSourceId[15];
        v19 = p_VidPnSourceId[25];
        *(_OWORD *)v12 = v17;
        *((_DWORD *)v12 + 18) = v19;
        v20 = *(_OWORD *)(p_VidPnSourceId + 10);
        v21 = p_VidPnSourceId[20];
        *v14 = v11;
        *((_DWORD *)v13 - 1) = v9;
        *(_QWORD *)(v13 + 20) = v15;
        *((_OWORD *)v12 + 1) = v18;
        *((_OWORD *)v12 + 2) = v20;
        if ( v21 )
        {
          if ( (v21 & 1) != 0 )
            *((_DWORD *)v12 + 17) = (v21 & 2) != 0 ? 8 : 6;
        }
        else
        {
          *((_DWORD *)v12 + 17) = 0;
        }
        ++v9;
        ++v11;
        v15 += 88;
        ++v14;
        v13 += 32;
        p_VidPnSourceId += 30;
        v12 += 88;
      }
      while ( v9 < a2 );
    }
    v23.0 = 0;
    return DXGDEVICE::CheckMultiPlaneOverlaySupport3((DXGDEVICE *)this, a2, v24, 0, 0LL, a4, a5, &v23);
  }
  else
  {
    WdLogSingleEntry1(3LL, 0LL);
    return 0LL;
  }
}
