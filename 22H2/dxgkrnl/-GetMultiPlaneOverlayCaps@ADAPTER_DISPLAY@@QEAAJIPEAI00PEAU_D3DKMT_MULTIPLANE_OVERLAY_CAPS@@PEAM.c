/*
 * XREFs of ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C01763EC
 * Callers:
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C01787D0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01E9A00 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     ?SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ @ 0x1C0002AA8 (-SupportGetMultiPlaneOverlayCaps@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002AE8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z @ 0x1C017360C (-DdiGetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETMULTIPLANEOVERLAYCAPS@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C0176618 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS *a6,
        float *a7,
        float *a8)
{
  __int64 v11; // rdi
  __int64 v12; // r15
  ADAPTER_RENDER *v13; // rcx
  __int64 v14; // r8
  int MultiPlaneOverlayCaps; // eax
  UINT MaxRGBPlanes; // eax
  float MaxStretchFactor; // xmm0_4
  float MaxShrinkFactor; // xmm1_4
  _DXGKARG_GETMULTIPLANEOVERLAYCAPS v20; // [rsp+68h] [rbp-21h] BYREF

  v11 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry2(2LL, a2, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    *a3 = 1;
    LODWORD(v12) = 0;
    *a4 = 0;
    *a5 = 0;
    a6->Value = 0;
    *a7 = 1.0;
    *a8 = 1.0;
    v13 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 2928LL);
    if ( v13
      && ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13)
      && DXGADAPTER::SupportGetMultiPlaneOverlayCaps(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 2928LL) + 16LL))
      && ADAPTER_DISPLAY::IsVidPnSourceActive(this, v11) )
    {
      v20.VidPnSourceId = v11;
      memset(&v20.MaxPlanes, 0, 24);
      MultiPlaneOverlayCaps = ADAPTER_DISPLAY::DdiGetMultiPlaneOverlayCaps(this, &v20, v14);
      v12 = MultiPlaneOverlayCaps;
      if ( MultiPlaneOverlayCaps < 0 )
      {
        WdLogSingleEntry3(2LL, MultiPlaneOverlayCaps, *(_QWORD *)(*((_QWORD *)this + 2) + 280LL), v11);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned error (0x%I64x) from GetMultiPlaneOverlayCaps: Adapter (0x%I64x), VidPnSourceId (0x%I64x)",
          v12,
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          v11,
          0LL,
          0LL);
      }
      else
      {
        if ( v20.MaxPlanes )
        {
          MaxRGBPlanes = v20.MaxRGBPlanes;
          MaxStretchFactor = v20.MaxStretchFactor;
          MaxShrinkFactor = v20.MaxShrinkFactor;
          *a3 = v20.MaxPlanes;
          *a4 = MaxRGBPlanes;
          *a5 = v20.MaxYUVPlanes;
          *a7 = MaxStretchFactor;
          *a8 = MaxShrinkFactor;
          a6->Value ^= (a6->Value ^ v20.OverlayCaps.Value) & 0x7FF;
        }
        else
        {
          *a3 = 1;
          *a4 = 0;
          *a5 = 0;
          a6->Value = 0;
          *a7 = 1.0;
          *a8 = 1.0;
        }
        a6->Value |= 0x800u;
      }
    }
    return (unsigned int)v12;
  }
}
