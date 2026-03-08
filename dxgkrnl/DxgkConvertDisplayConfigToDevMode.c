/*
 * XREFs of DxgkConvertDisplayConfigToDevMode @ 0x1C016B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C016B650 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C016CB80 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C0172AAC (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigToDevMode(__int64 a1, struct _devicemodeW *a2, __int64 a3)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v5; // edi
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v6; // r12d
  unsigned int v7; // r15d
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  bool v11; // r9
  int v12; // ecx
  int *v13; // rax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // ecx
  int v19; // ecx
  int v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  char v22; // [rsp+60h] [rbp-10h]
  struct _D3DDDI_RATIONAL v23; // [rsp+A0h] [rbp+30h] BYREF

  v20 = -1;
  v21 = 0LL;
  v5 = D3DKMDT_VPPR_IDENTITY;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2178;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2178);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2178);
  if ( (*(_QWORD *)a1 & 0x100001030387LL) == 0x100001030387LL )
  {
    v6 = *(_DWORD *)(a1 + 76);
    if ( *(_DWORD *)(a1 + 196) == -2 && *(_DWORD *)(a1 + 200) == -2 )
    {
      v7 = 64;
    }
    else
    {
      v23 = *(struct _D3DDDI_RATIONAL *)(a1 + 196);
      v7 = DmmMapVSyncFromRationalToInteger(&v23, v6, 0LL);
    }
    v8 = *(_DWORD *)(a1 + 112);
    v23.Numerator = 0;
    v9 = DxgkConvertDisplayConfigCScalingToDdiScaling(
           v8,
           (struct _LUID *)(a1 + 16),
           (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v23);
    if ( v9 >= 0 )
    {
      v10 = *(_DWORD *)(a1 + 104);
      v11 = ((v10 - 2) & 0xFFFFFFFD) == 0;
      v12 = v10 - 1;
      if ( v12 )
      {
        v18 = v12 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
              v5 = D3DKMDT_VPPR_ROTATE270;
          }
          else
          {
            v5 = D3DKMDT_VPPR_ROTATE180;
          }
        }
        else
        {
          v5 = D3DKMDT_VPPR_ROTATE90;
        }
      }
      v13 = (int *)(a1 + 128);
      if ( v11 )
        v14 = *(_DWORD *)(a1 + 124);
      else
        v14 = *v13;
      if ( !v11 )
        v13 = (int *)(a1 + 124);
      v9 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
             0x20uLL,
             *v13,
             v14,
             v7,
             v6,
             v5,
             (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v23.Numerator,
             a2);
      if ( v9 >= 0 )
      {
        a2->dmFields |= 0x20u;
        a2->dmPosition.x = *(_DWORD *)(a1 + 116);
        a2->dmPosition.y = *(_DWORD *)(a1 + 120);
      }
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 1700LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"An invalid path was passed to DxgkConvertDisplayConfigToDevMode, missing required flags.",
      1700LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v9 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v20);
  }
  return (unsigned int)v9;
}
