/*
 * XREFs of DxgkNotifyDisplayChange @ 0x1C035214C
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171F9C (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C02E4780 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNotifyDisplayChange(__int64 a1)
{
  char v1; // bl
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  void (__fastcall *v8)(__int64); // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax

  v1 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current && (v7 = *((_QWORD *)Current + 11)) != 0 && (v8 = *(void (__fastcall **)(__int64))(v7 + 368)) != 0LL )
  {
    LOBYTE(v4) = v1;
    v8(v4);
    return 0LL;
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4, v3, v5, v6);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v15 = PsGetCurrentProcessSessionId(v12, v11, v13, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the DxgkEng function table for session 0x%I64x, returning 0x%I64x.",
      v15,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
