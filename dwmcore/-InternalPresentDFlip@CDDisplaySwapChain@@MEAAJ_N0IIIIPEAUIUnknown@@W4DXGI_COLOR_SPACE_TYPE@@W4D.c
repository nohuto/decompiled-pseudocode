/*
 * XREFs of ?InternalPresentDFlip@CDDisplaySwapChain@@MEAAJ_N0IIIIPEAUIUnknown@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1802877B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180285C04 (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1802863C4 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1802868DC (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4S.c)
 */

__int64 __fastcall CDDisplaySwapChain::InternalPresentDFlip(
        CDDisplaySwapChain *this,
        __int64 a2,
        unsigned __int8 a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        enum DXGI_HDR_METADATA_TYPE a10,
        _OWORD *a11,
        int *a12,
        __int128 *a13)
{
  int CachedGeneralScanout; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  struct Windows::Devices::Display::Core::IDisplayScanout *v17; // rbx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  void *v25; // [rsp+28h] [rbp-C1h]
  __int64 v26; // [rsp+40h] [rbp-A9h] BYREF
  struct Windows::Devices::Display::Core::IDisplayScanout *v27; // [rsp+48h] [rbp-A1h] BYREF
  _DWORD v28[2]; // [rsp+50h] [rbp-99h] BYREF
  __int64 v29; // [rsp+58h] [rbp-91h]
  int v30; // [rsp+60h] [rbp-89h]
  __int64 v31; // [rsp+64h] [rbp-85h]
  int v32; // [rsp+6Ch] [rbp-7Dh]
  int v33; // [rsp+70h] [rbp-79h]
  int v34; // [rsp+74h] [rbp-75h]
  int v35; // [rsp+78h] [rbp-71h]
  __int128 v36; // [rsp+7Ch] [rbp-6Dh]
  __int128 v37; // [rsp+8Ch] [rbp-5Dh]
  __int64 v38; // [rsp+9Ch] [rbp-4Dh]
  int v39; // [rsp+A4h] [rbp-45h]
  __int64 v40; // [rsp+A8h] [rbp-41h]
  int v41; // [rsp+B0h] [rbp-39h]
  int v42; // [rsp+B4h] [rbp-35h]
  __int64 v43; // [rsp+B8h] [rbp-31h]
  __int64 v44; // [rsp+C0h] [rbp-29h]
  __int64 v45; // [rsp+C8h] [rbp-21h]
  int v46; // [rsp+D0h] [rbp-19h]
  int v47; // [rsp+D4h] [rbp-15h]

  v29 = a8;
  v31 = 0LL;
  v47 = 0;
  v32 = *a12;
  v33 = a12[1];
  v34 = a12[2];
  v35 = a12[3];
  v36 = *a13;
  v42 = a9;
  v46 = a4;
  LODWORD(v25) = 2 * a3;
  v28[0] = 0;
  v28[1] = 1;
  v30 = 0;
  v37 = v36;
  v38 = 1LL;
  v39 = 0;
  v40 = 0LL;
  v41 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 2LL;
  v26 = 0LL;
  v27 = 0LL;
  CachedGeneralScanout = CDDisplaySwapChain::FindCachedGeneralScanout(
                           this,
                           0,
                           1u,
                           (struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)v28,
                           a5,
                           v25,
                           &v27);
  v16 = CachedGeneralScanout;
  if ( CachedGeneralScanout < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, CachedGeneralScanout, 0x4CFu, 0LL);
  }
  else
  {
    v17 = v27;
    (**(void (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayScanout *, GUID *, __int64 *))v27)(
      v27,
      &GUID_56b76193_af04_5806_83a8_56be01847aad,
      &v26);
    v18 = CDDisplaySwapChain::ComputeCachedHdrMetadata(this, a10, a11);
    v16 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x4D3u, 0LL);
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 112LL))(v26, *((_QWORD *)this + 66));
      v16 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x4D4u, 0LL);
      }
      else
      {
        v22 = CDDisplaySwapChain::ExecutePresent(this, v17);
        v16 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x4D7u, 0LL);
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v26);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
  return v16;
}
