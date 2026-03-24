/*
 * XREFs of ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18023A630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x18023934C (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180239664 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z.c)
 *     ?GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@Z @ 0x18023996C (-GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@.c)
 *     ?PostPresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x18023A4EC (-PostPresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 *     ?PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x18023A5E8 (-PrePresent@CDDisplaySwapChain@@IEAAJ_N@Z.c)
 */

__int64 __fastcall CDDisplaySwapChain::PresentMPO(
        CDDisplaySwapChain *this,
        unsigned int a2,
        char a3,
        enum DXGI_HDR_METADATA_TYPE a4,
        _QWORD *a5,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6,
        unsigned int a7)
{
  CDDisplaySwapChain *v7; // rsi
  char v9; // di
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // r12d
  unsigned int v23; // r14d
  const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *v24; // r15
  __int64 v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  struct Windows::Devices::Display::Core::IDisplaySurface *DesktopPrimary; // r11
  __int64 (__fastcall *v34)(__int64, __int64, _QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *, _DWORD, _OWORD *, __int128 *, __int128 *, _DWORD, _DWORD, _QWORD); // r10
  __int64 v35; // rdx
  unsigned int v36; // r13d
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  struct Windows::Devices::Display::Core::IDisplayScanout *v50[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v51; // [rsp+70h] [rbp-90h]
  __int128 v52; // [rsp+80h] [rbp-80h]
  __int128 v53; // [rsp+90h] [rbp-70h]
  __int128 v54; // [rsp+A0h] [rbp-60h]
  _BYTE v55[64]; // [rsp+B0h] [rbp-50h]
  __int128 v56; // [rsp+F0h] [rbp-10h]
  __int128 v57; // [rsp+100h] [rbp+0h]
  __int128 v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+120h] [rbp+20h]
  __int128 v60; // [rsp+130h] [rbp+30h] BYREF
  __int128 v61; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v62[4]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v63; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v64; // [rsp+1A8h] [rbp+A8h]

  v64 = a2;
  v7 = (CDDisplaySwapChain *)((char *)this - 64);
  v9 = (a3 & 2) != 0;
  v50[0] = 0LL;
  v63 = 0LL;
  v11 = CDDisplaySwapChain::PrePresent((CDDisplaySwapChain *)((char *)this - 64), v9);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x2B1u, 0LL);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct Windows::Devices::Display::Core::IDisplayScanout **))(**((_QWORD **)this + 11) + 56LL))(
            *((_QWORD *)this + 11),
            *((_QWORD *)this + 15),
            v50);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2B6u, 0LL);
    }
    else
    {
      if ( v63 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
      v16 = (**(__int64 (__fastcall ***)(struct Windows::Devices::Display::Core::IDisplayScanout *, GUID *, __int64 *))v50[0])(
              v50[0],
              &GUID_56b76193_af04_5806_83a8_56be01847aad,
              &v63);
      v13 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2B7u, 0LL);
      }
      else
      {
        v18 = CDDisplaySwapChain::ComputeCachedHdrMetadata(v7, a4, a5);
        v13 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x2BAu, 0LL);
        }
        else if ( *((_QWORD *)this + 46)
               && (v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 112LL))(v63), v13 = v20, v20 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x2BDu, 0LL);
        }
        else
        {
          v22 = a7;
          v23 = 0;
          if ( a7 )
          {
            v24 = a6;
            while ( 1 )
            {
              v25 = *((_QWORD *)v24 + 16);
              v26 = *((_OWORD *)v24 + 1);
              v54 = *(_OWORD *)v24;
              v27 = *((_OWORD *)v24 + 2);
              *(_OWORD *)v55 = v26;
              v28 = *((_OWORD *)v24 + 3);
              *(_OWORD *)&v55[16] = v27;
              v29 = *((_OWORD *)v24 + 4);
              *(_OWORD *)&v55[32] = v28;
              v30 = *((_OWORD *)v24 + 5);
              *(_OWORD *)&v55[48] = v29;
              v31 = *((_OWORD *)v24 + 6);
              v56 = v30;
              v32 = *((_OWORD *)v24 + 7);
              v57 = v31;
              v58 = v32;
              v59 = v25;
              DesktopPrimary = (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)&v54 + 1);
              if ( !*((_QWORD *)&v54 + 1) )
                DesktopPrimary = CDDisplaySwapChain::GetDesktopPrimary(v7, v9);
              *(_QWORD *)&v51 = *(_QWORD *)&v55[44];
              v34 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *, _DWORD, _OWORD *, __int128 *, __int128 *, _DWORD, _DWORD, _QWORD))(*(_QWORD *)v63 + 96LL);
              DWORD2(v51) = *(_DWORD *)&v55[52] - *(_DWORD *)&v55[44];
              HIDWORD(v51) = *(_DWORD *)&v55[56] - *(_DWORD *)&v55[48];
              DWORD2(v52) = *(_DWORD *)&v55[36] - *(_DWORD *)&v55[28];
              *(_QWORD *)&v52 = *(_QWORD *)&v55[28];
              v35 = *(unsigned int *)&v55[12];
              HIDWORD(v52) = *(_DWORD *)&v55[40] - *(_DWORD *)&v55[32];
              DWORD2(v53) = *(_DWORD *)&v55[20] - *(_DWORD *)&v55[12];
              v36 = v54;
              HIDWORD(v53) = *(_DWORD *)&v55[24] - *(_DWORD *)&v55[16];
              *(_QWORD *)&v53 = *(_QWORD *)&v55[12];
              LOBYTE(v35) = DWORD1(v54) != 0;
              v60 = v51;
              v61 = v52;
              v62[0] = v53;
              v37 = v34(v63, v35, (unsigned int)v54, DesktopPrimary, *(_DWORD *)v55, v62, &v61, &v60, v56, 0, 0LL);
              v13 = v37;
              if ( v37 < 0 )
                break;
              v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v63 + 56LL))(
                      v63,
                      v36,
                      v64,
                      0xFFFFFFFFLL);
              v13 = v39;
              if ( v39 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x2DFu, 0LL);
                goto LABEL_31;
              }
              v41 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v63 + 120LL))(v63, v36, DWORD1(v57));
              v13 = v41;
              if ( v41 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x2E2u, 0LL);
                goto LABEL_31;
              }
              ++v23;
              v24 = (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)v24 + 136);
              if ( v23 >= v22 )
                goto LABEL_18;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x2DBu, 0LL);
          }
          else
          {
LABEL_18:
            v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 72LL))(v63);
            v13 = v43;
            if ( v43 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x2E5u, 0LL);
            }
            else
            {
              v45 = CDDisplaySwapChain::ExecutePresent(v7, v50[0]);
              v13 = v45;
              if ( v45 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x2E6u, 0LL);
              }
              else
              {
                v47 = CDDisplaySwapChain::PostPresent(v7, v9);
                v13 = v47;
                if ( v47 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x2E7u, 0LL);
              }
            }
          }
        }
      }
    }
  }
LABEL_31:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v63);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v50);
  return v13;
}
