/*
 * XREFs of DxgkNotifyDisplayChange @ 0x1C02A06B4
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E63DC (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0135B50 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0172ECC (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNotifyDisplayChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void (__fastcall *v8)(__int64); // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx

  v4 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( Current )
    Current = (struct DXGPROCESS *)*((_QWORD *)Current + 11);
  if ( Current && (v8 = (void (__fastcall *)(__int64))*((_QWORD *)Current + 46)) != 0LL )
  {
    LOBYTE(v7) = v4;
    v8(v7);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v10 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v12, v11);
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
}
