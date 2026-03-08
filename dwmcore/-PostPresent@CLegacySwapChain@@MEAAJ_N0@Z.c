/*
 * XREFs of ?PostPresent@CLegacySwapChain@@MEAAJ_N0@Z @ 0x1800C6AC0
 * Callers:
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800C6910 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_.c)
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180109EA0 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18029CBD0 (-Present@CLegacyStereoSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 *     ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18029CCF0 (-PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z @ 0x1800C6BD4 (-AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18028BAFC (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@IPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ @ 0x180298110 (-ReleaseD3D12Resources@CLegacySwapChain@@IEAAXXZ.c)
 */

__int64 __fastcall CLegacySwapChain::PostPresent(CLegacySwapChain *this, char a2, bool a3)
{
  int v4; // eax
  int v5; // ecx
  unsigned __int8 v6; // di
  __int64 i; // rdx
  __int64 v8; // r9
  CDisplayManager *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  struct IDXGIOutputDWM *v13[2]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v14[12]; // [rsp+40h] [rbp-D8h] BYREF
  int v15; // [rsp+4Ch] [rbp-CCh]

  if ( !a2 )
  {
    CD3DDevice::AdvanceUnpin(
      *((CD3DDevice **)this + 10),
      *(struct _LUID *)((char *)this + 116),
      *((_DWORD *)this + 28),
      a3);
    *((_DWORD *)this + 68) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 256LL))(*((_QWORD *)this + 28));
    **((_DWORD **)this + 17) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0q_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_LEGACYSWAPCHAIN_BUFFERFLIP,
        *((unsigned int *)this + 68));
    v4 = *((_DWORD *)this + 85);
    if ( v4 )
    {
      *((_DWORD *)this + 85) = v4 - 1;
      CLegacySwapChain::ReleaseD3D12Resources(this);
    }
  }
  if ( *((_DWORD *)this + 31) == -1 )
  {
    v13[0] = 0LL;
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset(v13);
    if ( CDisplayManager::GetDXGIOutput(v10, *(struct _LUID *)((char *)this + 88), *((_DWORD *)this + 28), v13) >= 0
      && (*(int (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v13[0] + 32LL))(v13[0], v14) >= 0 )
    {
      *((_DWORD *)this + 31) = v15;
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v13);
  }
  v5 = *((_DWORD *)this + 80);
  if ( v5 )
  {
    v6 = 0;
    if ( *((_BYTE *)this + 346) )
    {
LABEL_17:
      v6 = 1;
    }
    else
    {
      for ( i = *((_QWORD *)this + 31); i != *((_QWORD *)this + 32); i += 8LL )
      {
        v8 = *(_QWORD *)(*(_QWORD *)i + 96LL);
        if ( v8 && *(_BYTE *)(v8 + 240) )
          goto LABEL_17;
      }
    }
    if ( *((_BYTE *)this + 345) != v6 )
    {
      if ( v5 == 1 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 28) + 272LL))(*((_QWORD *)this + 28), v6);
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x55Eu, 0LL);
          return 0LL;
        }
        *((_BYTE *)g_pComposition + 1276) = 1;
      }
      *((_BYTE *)this + 345) = v6;
    }
  }
  return 0LL;
}
