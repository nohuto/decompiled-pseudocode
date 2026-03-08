/*
 * XREFs of ?Matches@CDDisplayCachedScanout@@QEAA_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAPEAUIDisplayScanout@4567@@Z @ 0x18029A204
 * Callers:
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180286728 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPE.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1802868DC (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4S.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CDDisplayCachedScanout::Matches(
        CDDisplayCachedScanout *this,
        __int64 a2,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a3,
        int a4,
        struct Windows::Devices::Display::Core::IDisplaySurface *a5,
        struct Windows::Devices::Display::Core::IDisplayScanout **a6)
{
  const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v6; // rsi
  unsigned int v7; // r11d
  char v8; // di
  __int64 v9; // r9
  struct Windows::Devices::Display::Core::IDisplaySurface *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct Windows::Devices::Display::Core::IDisplayScanout *v14; // rbx
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = 1;
  if ( (unsigned int)a2 != 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4)
    || a4 != *((_DWORD *)this + 8) )
  {
    return 0;
  }
  v9 = 0LL;
  if ( (_DWORD)a2 )
  {
    do
    {
      a2 = *(_QWORD *)this + 80 * v9;
      a3 = (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)v6 + 136 * (unsigned int)v9);
      v10 = (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)a3 + 1);
      if ( !v10 )
        v10 = a5;
      if ( *(struct Windows::Devices::Display::Core::IDisplaySurface **)(a2 + 8) != v10
        || *(_DWORD *)a2 != *(_DWORD *)a3
        || *(_BYTE *)(a2 + 4) != (*((_DWORD *)a3 + 1) != 0)
        || *(_DWORD *)(a2 + 16) != *((_DWORD *)a3 + 4)
        || *(_DWORD *)(a2 + 68) != *((_DWORD *)a3 + 20)
        || *(_DWORD *)(a2 + 72) != *((_DWORD *)a3 + 25) )
      {
        return 0;
      }
      v11 = *(_QWORD *)(a2 + 20) - *(_QWORD *)((char *)a3 + 28);
      if ( !v11 )
        v11 = *(_QWORD *)(a2 + 28) - *(_QWORD *)((char *)a3 + 36);
      if ( v11 )
        return 0;
      v12 = *(_QWORD *)(a2 + 36) - *(_QWORD *)((char *)a3 + 44);
      if ( !v12 )
        v12 = *(_QWORD *)(a2 + 44) - *(_QWORD *)((char *)a3 + 52);
      if ( v12 )
        return 0;
      v13 = *(_QWORD *)(a2 + 52) - *(_QWORD *)((char *)a3 + 60);
      if ( !v13 )
        v13 = *(_QWORD *)(a2 + 60) - *(_QWORD *)((char *)a3 + 68);
      if ( v13 )
        return 0;
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < v7 );
  }
  v14 = (struct Windows::Devices::Display::Core::IDisplayScanout *)*((_QWORD *)this + 3);
  if ( v14 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *, __int64, const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *, __int64))(*(_QWORD *)v14 + 8LL))(
      v14,
      a2,
      a3,
      v9);
  v16 = 0LL;
  *a6 = v14;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
  return v8;
}
