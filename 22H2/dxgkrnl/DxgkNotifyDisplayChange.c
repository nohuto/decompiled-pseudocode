/*
 * XREFs of DxgkNotifyDisplayChange @ 0x1C0356BDC
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0170854 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AD190 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C02E9510 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNotifyDisplayChange(__int64 a1)
{
  char v1; // bl
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  void (__fastcall *v5)(__int64); // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax

  v1 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current && (v4 = *((_QWORD *)Current + 11)) != 0 && (v5 = *(void (__fastcall **)(__int64))(v4 + 368)) != 0LL )
  {
    LOBYTE(v3) = v1;
    v5(v3);
    return 0LL;
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v9 = PsGetCurrentProcessSessionId(v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the DxgkEng function table for session 0x%I64x, returning 0x%I64x.",
      v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
