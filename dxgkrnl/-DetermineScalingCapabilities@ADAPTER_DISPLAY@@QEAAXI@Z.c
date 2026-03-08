/*
 * XREFs of ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01DCBBC
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C017D84C (-GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM.c)
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C017D9A0 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DetermineScalingCapabilities(ADAPTER_DISPLAY *this, unsigned int a2)
{
  bool v2; // bl
  __int64 v3; // rdi
  unsigned int v5; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v6[3]; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int v7; // [rsp+80h] [rbp+30h] BYREF
  float v8; // [rsp+88h] [rbp+38h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS v9; // [rsp+90h] [rbp+40h] BYREF
  float v10; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0;
  v3 = a2;
  v10 = 0.0;
  v8 = 0.0;
  v6[0] = 0;
  v7 = 0;
  v5 = 0;
  v9.0 = 0;
  if ( ((int)ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(this, a2, v6, &v7, &v5, &v9, &v8, &v10) < 0
     || v7 == 1
     || (*(_BYTE *)&v9.0 & 0x10) == 0
     || v8 == 1.0)
    && (int)ADAPTER_DISPLAY::GetPostCompositionCaps(this, v3, &v8, &v10) >= 0 )
  {
    v2 = v8 > 1.0;
  }
  *(_BYTE *)(4000 * v3 + *((_QWORD *)this + 16) + 1141) = v2;
}
