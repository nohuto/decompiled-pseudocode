/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C01CABC8
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C019A6A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C00035F4 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00069FC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B3E4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C01E570C (-IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CheckDevicePresentSettings(DXGDEVICE **this, int a2, int a3, unsigned int a4)
{
  __int64 v5; // rdi
  DXGDEVICE *v8; // rdx
  DXGCONTEXT *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  ADAPTER_DISPLAY *v13; // rcx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  struct DXGDEVICE *v15; // rax
  __int64 v16; // rcx
  DXGDEVICE *v17; // rax

  v5 = a4;
  if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this[2] + 235) + 2920LL), this[2], a4) )
  {
    if ( !DXGDEVICE::IsVSyncAvailable(this[2], v5) )
    {
      if ( *((_DWORD *)this[2] + 116) == 1 )
      {
        v10 = (DXGCONTEXT *)this;
        v11 = v5;
        v12 = -1071775738LL;
        goto LABEL_8;
      }
      if ( a2 )
      {
        WdLogSingleEntry3(4LL, 0LL, this, v5);
        return 3223192376LL;
      }
    }
    if ( a3 )
      return 0LL;
    v17 = this[2];
    if ( *((_DWORD *)v17 + 116) != 1 )
      return 0LL;
    v11 = v5;
    if ( (*((_DWORD *)v17 + v5 + 310) & 0x100) != 0 )
      return 0LL;
    v10 = (DXGCONTEXT *)this;
    v12 = -1071775739LL;
LABEL_8:
    WdLogSingleEntry3(4LL, v12, v10, v11);
    return (unsigned int)v12;
  }
  WdLogSingleEntry3(3LL, -1071775744LL, this, (unsigned int)v5);
  v8 = this[2];
  if ( (*(_DWORD *)(*((_QWORD *)v8 + 5) + 424LL) & 4) != 0
    && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)(*((_QWORD *)v8 + 235) + 2920LL), v5) == 1 )
  {
    v13 = *(ADAPTER_DISPLAY **)(*((_QWORD *)this[2] + 235) + 2920LL);
    if ( (*(_DWORD *)(*(_QWORD *)(4000LL * (unsigned int)v5 + *((_QWORD *)v13 + 16) + 752) + 424LL) & 4) != 0 )
    {
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v13, v5);
      WdLogSingleEntry3(2LL, this[2], (unsigned int)v5, VidPnSourceOwner);
      v15 = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(ADAPTER_DISPLAY **)(*((_QWORD *)this[2] + 235) + 2920LL), v5);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"This Dwm Device (0x%I64x) does not have VidPn ownership for source 0x%I64x, another DWM device (0x%I64x"
                  ") has shared ownership, likely Dwm device leak",
        (__int64)this[2],
        (unsigned int)v5,
        (__int64)v15,
        0LL,
        0LL);
      LOBYTE(v16) = 1;
      *((_BYTE *)this[2] + 1938) = 1;
      if ( (unsigned __int8)WdIsDebuggerPresent(v16) )
      {
        DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
        __debugbreak();
      }
    }
  }
  return 3223191552LL;
}
