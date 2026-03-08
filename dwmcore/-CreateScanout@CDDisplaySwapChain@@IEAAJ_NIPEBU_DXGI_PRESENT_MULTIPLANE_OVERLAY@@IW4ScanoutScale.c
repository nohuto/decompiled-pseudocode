/*
 * XREFs of ?CreateScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180285F34
 * Callers:
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180286728 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPE.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4ScanoutScaleMode@1@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1802868DC (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@IW4S.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180288130 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@Z @ 0x180286BE8 (-GetDesktopPrimary@CDDisplaySwapChain@@IEAAPEAUIDisplaySurface@Core@Display@Devices@Windows@@_N@.c)
 */

__int64 __fastcall CDDisplaySwapChain::CreateScanout(
        CDDisplaySwapChain *a1,
        bool a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int a5,
        int a6,
        _QWORD *a7)
{
  _QWORD *v7; // r15
  CDDisplaySwapChain *v8; // rsi
  __int64 *v9; // rcx
  _DWORD *v10; // rdi
  bool v12; // r12
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r11d
  _DWORD *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  int v29; // r15d
  int v30; // r9d
  int v31; // ebx
  int v32; // esi
  int v33; // r10d
  __int64 v34; // rdx
  int v35; // r8d
  __int64 (__fastcall *v36)(__int64 *, __int64, _QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *, _DWORD, int *, int *, _DWORD *, _DWORD, _DWORD, _QWORD); // rax
  int v37; // edx
  int v38; // eax
  __int64 v39; // rdx
  unsigned int v40; // edi
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // r9d
  int v48; // r8d
  int v49; // r10d
  __int64 v50; // rax
  __int64 (__fastcall *v51)(__int64 *, _QWORD, int *, int *, _DWORD); // r11
  int v52; // edx
  int v53; // edx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  __int64 *v60; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v61; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall ***v62)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-88h] BYREF
  int v63; // [rsp+80h] [rbp-80h] BYREF
  int v64; // [rsp+84h] [rbp-7Ch]
  int v65; // [rsp+88h] [rbp-78h]
  int v66; // [rsp+8Ch] [rbp-74h]
  int v67; // [rsp+90h] [rbp-70h] BYREF
  int v68; // [rsp+94h] [rbp-6Ch]
  int v69; // [rsp+98h] [rbp-68h]
  int v70; // [rsp+9Ch] [rbp-64h]
  unsigned int v71; // [rsp+A0h] [rbp-60h]
  struct Windows::Devices::Display::Core::IDisplaySurface *DesktopPrimary; // [rsp+A8h] [rbp-58h]
  _DWORD *v73; // [rsp+B0h] [rbp-50h]
  _DWORD v74[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 (__fastcall *v75)(__int64 *, __int64, _QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *, _DWORD, int *, int *, _DWORD *, _DWORD, _DWORD, _QWORD); // [rsp+D0h] [rbp-30h]
  CDDisplaySwapChain *v76; // [rsp+D8h] [rbp-28h]
  _DWORD *v77; // [rsp+E0h] [rbp-20h]
  _QWORD *v78; // [rsp+E8h] [rbp-18h]
  __int128 v79; // [rsp+F0h] [rbp-10h]
  __int128 v80; // [rsp+100h] [rbp+0h]
  __int128 v81; // [rsp+110h] [rbp+10h]
  __int128 v82; // [rsp+120h] [rbp+20h]
  __int128 v83; // [rsp+130h] [rbp+30h]
  __int128 v84; // [rsp+140h] [rbp+40h]
  __int128 v85; // [rsp+150h] [rbp+50h]
  __int128 v86; // [rsp+160h] [rbp+60h]
  __int64 v87; // [rsp+170h] [rbp+70h]

  v7 = a7;
  v8 = a1;
  v76 = a1;
  v9 = (__int64 *)*((_QWORD *)a1 + 41);
  v10 = a4;
  v60 = 0LL;
  v77 = a4;
  v12 = a2;
  v71 = a3;
  v13 = *v9;
  v62 = 0LL;
  v78 = a7;
  v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v13 + 48))(v9, *((_QWORD *)v8 + 45), &v62);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1FFu, 0LL);
  }
  else
  {
    v17 = (**v62)(v62, &GUID_56b76193_af04_5806_83a8_56be01847aad, (__int64 *)&v60);
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x200u, 0LL);
    }
    else
    {
      v19 = a6;
      v61 = 0;
      if ( a3 )
      {
        v20 = v10;
        v73 = v10;
        while ( 1 )
        {
          v21 = *((_OWORD *)v20 + 1);
          v79 = *(_OWORD *)v20;
          v22 = *((_OWORD *)v20 + 2);
          v80 = v21;
          v23 = *((_OWORD *)v20 + 3);
          v81 = v22;
          v24 = *((_OWORD *)v20 + 4);
          v82 = v23;
          v25 = *((_OWORD *)v20 + 5);
          v83 = v24;
          v26 = *((_OWORD *)v20 + 6);
          v84 = v25;
          v27 = *((_OWORD *)v20 + 7);
          v28 = *((_QWORD *)v20 + 16);
          v85 = v26;
          v86 = v27;
          v87 = v28;
          DesktopPrimary = (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)&v79 + 1);
          if ( !*((_QWORD *)&v79 + 1) )
            DesktopPrimary = CDDisplaySwapChain::GetDesktopPrimary(v8, v12);
          v29 = HIDWORD(v80);
          v30 = HIDWORD(v80);
          v31 = DWORD1(v83);
          v32 = v83;
          v33 = DWORD2(v83);
          v34 = *v60;
          v35 = v82;
          v67 = HIDWORD(v80);
          v68 = v81;
          v36 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, struct Windows::Devices::Display::Core::IDisplaySurface *, _DWORD, int *, int *, _DWORD *, _DWORD, _DWORD, _QWORD))(v34 + 96);
          v37 = DWORD1(v82);
          v75 = v36;
          if ( v19 == 1 )
          {
            v29 = HIDWORD(v82);
          }
          else
          {
            v32 = v81;
            v31 = DWORD1(v81);
          }
          v74[0] = v29;
          v74[1] = v32;
          v74[2] = v31 - v29;
          if ( v19 != 1 )
            v33 = DWORD2(v81);
          v74[3] = v33 - v32;
          v38 = DWORD2(v82);
          if ( v19 == 1 )
          {
            v30 = HIDWORD(v81);
          }
          else
          {
            v35 = v81;
            v37 = DWORD1(v81);
          }
          v63 = v30;
          v39 = (unsigned int)(v37 - v30);
          v64 = v35;
          v65 = v39;
          if ( v19 != 1 )
            v38 = DWORD2(v81);
          v69 = DWORD1(v81) - HIDWORD(v80);
          v66 = v38 - v35;
          v70 = DWORD2(v81) - v81;
          v40 = v79;
          LOBYTE(v39) = DWORD1(v79) != 0;
          v41 = v75(v60, v39, (unsigned int)v79, DesktopPrimary, v80, &v67, &v63, v74, v84, 0, 0LL);
          v16 = v41;
          if ( v41 < 0 )
            break;
          v43 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(*v60 + 56))(v60, v40, a5, 0xFFFFFFFFLL);
          v16 = v43;
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x221u, 0LL);
            goto LABEL_33;
          }
          v45 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v60 + 120))(v60, v40, DWORD1(v85));
          v16 = v45;
          if ( v45 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x224u, 0LL);
            goto LABEL_33;
          }
          v8 = v76;
          v20 = v73 + 34;
          v19 = a6;
          v12 = a2;
          ++v61;
          v73 += 34;
          if ( v61 >= v71 )
          {
            v10 = v77;
            v7 = v78;
            goto LABEL_22;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x21Du, 0LL);
      }
      else
      {
LABEL_22:
        if ( v19 != 2 )
          goto LABEL_28;
        v47 = v10[7];
        v48 = v10[12];
        v49 = v10[8];
        v67 = v10[11];
        v68 = v48;
        v63 = v47;
        v50 = *v60;
        v64 = v49;
        v51 = *(__int64 (__fastcall **)(__int64 *, _QWORD, int *, int *, _DWORD))(v50 + 64);
        v52 = v10[9] - v47;
        v69 = v10[13] - v67;
        LODWORD(v50) = v10[14];
        v65 = v52;
        v53 = v10[10] - v49;
        v70 = v50 - v48;
        v66 = v53;
        v54 = v51(v60, 0LL, &v63, &v67, 0);
        v16 = v54;
        if ( v54 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x22Eu, 0LL);
        }
        else
        {
LABEL_28:
          v56 = (*(__int64 (__fastcall **)(__int64 *))(*v60 + 72))(v60);
          v16 = v56;
          if ( v56 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x231u, 0LL);
          }
          else
          {
            *v7 = v62;
            v62 = 0LL;
          }
        }
      }
    }
  }
LABEL_33:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v60);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v62);
  return v16;
}
