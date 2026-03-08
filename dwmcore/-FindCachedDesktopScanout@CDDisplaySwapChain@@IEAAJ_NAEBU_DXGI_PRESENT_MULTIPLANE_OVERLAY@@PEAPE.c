/*
 * XREFs of ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180286728
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180288130 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180285F34 (-CreateScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScale.c)
 *     ?GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@Z @ 0x180286BE8 (-GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@.c)
 *     ?erase@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18028896C (-erase@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_delete@VCDDisplayAgedCachedS.c)
 *     ?Matches@CDDisplayCachedScanout@@QEAA_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAPEAUIDisplayScanout@4567@@Z @ 0x18029A204 (-Matches@CDDisplayCachedScanout@@QEAA_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplaySurfa.c)
 *     ?Set@CDDisplayCachedScanout@@QEAAXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAUIDisplayScanout@4567@@Z @ 0x18029A37C (-Set@CDDisplayCachedScanout@@QEAAXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplaySurface@Co.c)
 */

__int64 __fastcall CDDisplaySwapChain::FindCachedDesktopScanout(
        CDDisplaySwapChain *this,
        bool a2,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a3,
        struct Windows::Devices::Display::Core::IDisplayScanout **a4)
{
  unsigned int v4; // esi
  __int64 v9; // rax
  CDDisplayCachedScanout *v10; // r13
  struct Windows::Devices::Display::Core::IDisplaySurface *DesktopPrimary; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v14; // r8
  struct Windows::Devices::Display::Core::IDisplayScanout *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct Windows::Devices::Display::Core::IDisplayScanout *v18; // rbp
  __int64 v19; // rax
  _QWORD *v20; // rdi
  struct Windows::Devices::Display::Core::IDisplaySurface *v23; // [rsp+40h] [rbp-38h]
  struct Windows::Devices::Display::Core::IDisplayScanout *v24; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  if ( a2 )
    v9 = *((unsigned int *)this + 107);
  else
    v9 = *((unsigned int *)this + 106);
  v10 = (CDDisplayCachedScanout *)(*((_QWORD *)this + 29) + 40 * v9);
  DesktopPrimary = CDDisplaySwapChain::GetDesktopPrimary(this, a2);
  v24 = 0LL;
  v12 = (_QWORD *)((char *)this + 256);
  v23 = DesktopPrimary;
  v13 = (_QWORD *)**((_QWORD **)this + 32);
  if ( CDDisplayCachedScanout::Matches(v10, 1u, v14, 1u, DesktopPrimary, &v24) )
  {
    v18 = v24;
  }
  else
  {
    v15 = v24;
    v24 = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = CDDisplaySwapChain::CreateScanout(this, a2, 1u, a3, 1u, 1, &v24);
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x17Du, 0LL);
      goto LABEL_16;
    }
    v18 = v24;
    CDDisplayCachedScanout::Set(v10, 1u, a3, 1u, v23, v24);
  }
  while ( v13 != (_QWORD *)*v12 )
  {
    v19 = v13[2];
    v20 = (_QWORD *)*v13;
    if ( (*(_DWORD *)(v19 + 40))-- == 1 )
      std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::erase(v12, &v24, v13);
    v13 = v20;
  }
  v24 = 0LL;
  *a4 = v18;
LABEL_16:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v24);
  return v4;
}
