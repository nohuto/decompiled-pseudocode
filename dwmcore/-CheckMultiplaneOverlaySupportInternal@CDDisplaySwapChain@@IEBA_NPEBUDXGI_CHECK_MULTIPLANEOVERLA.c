/*
 * XREFs of ?CheckMultiplaneOverlaySupportInternal@CDDisplaySwapChain@@IEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IW4ScanoutScaleMode@1@PEA_N@Z @ 0x180285680
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180285660 (-CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT.c)
 *     ?InternalCheckDirectFlipSupport@CDDisplaySwapChain@@MEBA_N_N0PEAUIUnknown@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2W4DXGI_COLOR_SPACE_TYPE@@I@Z @ 0x1802876A0 (-InternalCheckDirectFlipSupport@CDDisplaySwapChain@@MEBA_N_N0PEAUIUnknown@@AEBV-$TMilRect@IUMilR.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$emplace_back@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@QEAA?A_T$$QEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@1@@Z @ 0x180116854 (--$emplace_back@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@@-.c)
 *     ??0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x180116B94 (--0CCheckMPOCache@@QEAA@PEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ??1?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAA@XZ @ 0x180116E10 (--1-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180131180 (-CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 */

bool __fastcall CDDisplaySwapChain::CheckMultiplaneOverlaySupportInternal(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        int a4,
        _BYTE *a5)
{
  CCheckMPOCache *v5; // r14
  _QWORD *v6; // rdi
  CD3DDevice *v7; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD); // rsi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int128 *v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  int v28; // r10d
  int v29; // r11d
  __int64 v30; // rax
  __int64 (__fastcall *v31)(__int64, __int64, _QWORD, _QWORD, _DWORD, int *, int *, __int64 *, _DWORD, _DWORD, _QWORD); // rsi
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // r9d
  int v40; // r8d
  int v41; // r10d
  __int64 v42; // rax
  __int64 (__fastcall *v43)(__int64, _QWORD, int *, int *, _DWORD); // r11
  int v44; // edx
  int v45; // edx
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  bool v49; // bl
  __int64 v50; // rdi
  CCheckMPOCache *v51; // rax
  bool v52; // bl
  bool v54; // [rsp+60h] [rbp-A0h] BYREF
  int v55; // [rsp+64h] [rbp-9Ch]
  __int64 *v56; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v57; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall ***v58)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp-88h] BYREF
  CCheckMPOCache *v59; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+88h] [rbp-78h] BYREF
  int v61; // [rsp+90h] [rbp-70h] BYREF
  int v62; // [rsp+94h] [rbp-6Ch]
  int v63; // [rsp+98h] [rbp-68h]
  int v64; // [rsp+9Ch] [rbp-64h]
  int v65; // [rsp+A0h] [rbp-60h] BYREF
  int v66; // [rsp+A4h] [rbp-5Ch]
  int v67; // [rsp+A8h] [rbp-58h]
  int v68; // [rsp+ACh] [rbp-54h]
  __int64 v69; // [rsp+B0h] [rbp-50h] BYREF
  int v70; // [rsp+B8h] [rbp-48h]
  int v71; // [rsp+BCh] [rbp-44h]
  _QWORD *v72; // [rsp+C0h] [rbp-40h]
  __int128 v73; // [rsp+D0h] [rbp-30h]
  __int128 v74; // [rsp+E0h] [rbp-20h]
  __int128 v75; // [rsp+F0h] [rbp-10h]
  __int128 v76; // [rsp+100h] [rbp+0h]
  __int128 v77; // [rsp+110h] [rbp+10h]
  __int128 v78; // [rsp+120h] [rbp+20h]
  __int128 v79; // [rsp+130h] [rbp+30h]
  __int128 v80; // [rsp+140h] [rbp+40h]
  __int128 v81; // [rsp+150h] [rbp+50h]

  v5 = 0LL;
  v55 = a4;
  v6 = (_QWORD *)a1;
  v72 = (_QWORD *)a1;
  v7 = *(CD3DDevice **)(a1 + 80);
  v54 = 0;
  v58 = 0LL;
  v56 = 0LL;
  v60 = 0LL;
  if ( CD3DDevice::CheckMPOCache(v7, (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)a2, a3, &v54) )
  {
    *a5 = 1;
  }
  else
  {
    v10 = (__int64)v58;
    *a5 = 0;
    v11 = v6[41];
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 48LL);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v13 = v12(v11, v6[45], &v58);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x29Fu, 0LL);
    }
    else
    {
      if ( v60 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
      v15 = (**v58)(v58, &GUID_489d4937_ac3c_47dd_8bcc_1e9449e841b2, &v60);
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2A4u, 0LL);
      }
      else
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 56LL))(v60);
        if ( v56 )
          (*(void (__fastcall **)(__int64 *))(*v56 + 16))(v56);
        v17 = (**v58)(v58, &GUID_56b76193_af04_5806_83a8_56be01847aad, (__int64 *)&v56);
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2A7u, 0LL);
        }
        else
        {
          v57 = 0;
          if ( a3 )
          {
            v19 = a2;
            v59 = (CCheckMPOCache *)a2;
            while ( 1 )
            {
              v20 = v19[1];
              v73 = *v19;
              v21 = v19[2];
              v74 = v20;
              v22 = v19[3];
              v75 = v21;
              v23 = v19[4];
              v76 = v22;
              v24 = v19[5];
              v77 = v23;
              v25 = v19[6];
              v78 = v24;
              v26 = v19[7];
              v79 = v25;
              v27 = v19[8];
              v80 = v26;
              v81 = v27;
              v28 = DWORD1(v75);
              v29 = DWORD2(v76);
              v69 = *(_QWORD *)((char *)&v77 + 4);
              v30 = *v56;
              v70 = HIDWORD(v77) - DWORD1(v77);
              v65 = DWORD1(v75);
              v31 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, int *, int *, __int64 *, _DWORD, _DWORD, _QWORD))(v30 + 96);
              if ( v55 == 1 )
                v28 = DWORD1(v76);
              else
                v29 = DWORD2(v75);
              v32 = HIDWORD(v76);
              v71 = v78 - DWORD2(v77);
              if ( v55 != 1 )
                v32 = HIDWORD(v75);
              v61 = v28;
              v62 = v29;
              v63 = v32 - v28;
              v33 = v77;
              if ( v55 != 1 )
                v33 = v76;
              v66 = DWORD2(v75);
              v67 = HIDWORD(v75) - DWORD1(v75);
              v64 = v33 - v29;
              v68 = v76 - DWORD2(v75);
              v34 = DWORD2(v78);
              LOBYTE(v34) = 1;
              v35 = v31(
                      (__int64)v56,
                      v34,
                      (unsigned int)v73,
                      *((_QWORD *)&v73 + 1),
                      HIDWORD(v74),
                      &v65,
                      &v61,
                      &v69,
                      DWORD2(v78),
                      0,
                      0LL);
              if ( v35 < 0 )
                break;
              v37 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v56 + 120))(
                      v56,
                      (unsigned int)v73,
                      HIDWORD(v79));
              if ( v37 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x2C3u, 0LL);
                goto LABEL_38;
              }
              v19 = (__int128 *)((char *)v59 + 144);
              ++v57;
              v59 = (CCheckMPOCache *)((char *)v59 + 144);
              if ( v57 >= a3 )
              {
                v6 = v72;
                goto LABEL_25;
              }
            }
            MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x2C0u, 0LL);
          }
          else
          {
LABEL_25:
            if ( v55 != 2 )
              goto LABEL_30;
            v39 = *((_DWORD *)a2 + 9);
            v40 = *((_DWORD *)a2 + 14);
            v41 = *((_DWORD *)a2 + 10);
            v65 = *((_DWORD *)a2 + 13);
            v66 = v40;
            v61 = v39;
            v42 = *v56;
            v62 = v41;
            v43 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, int *, _DWORD))(v42 + 64);
            v44 = *((_DWORD *)a2 + 11) - v39;
            v67 = *((_DWORD *)a2 + 15) - v65;
            LODWORD(v42) = *((_DWORD *)a2 + 16);
            v63 = v44;
            v45 = *((_DWORD *)a2 + 12) - v41;
            v68 = v42 - v40;
            v64 = v45;
            v46 = v43((__int64)v56, 0LL, &v61, &v65, 0);
            if ( v46 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x2CDu, 0LL);
            }
            else
            {
LABEL_30:
              v48 = (*(__int64 (__fastcall **)(__int64 *))(*v56 + 72))(v56);
              v49 = v54;
              v50 = v6[10];
              if ( v48 >= 0 )
                v49 = 1;
              v54 = v49;
              v51 = (CCheckMPOCache *)operator new(0x3F0uLL);
              if ( v51 )
                v5 = CCheckMPOCache::CCheckMPOCache(
                       v51,
                       (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)a2);
              v59 = v5;
              std::vector<std::unique_ptr<ICheckMPOCache>>::emplace_back<std::unique_ptr<CCheckMPOCache>>(
                (char **)(v50 + 1448),
                (__int64 *)&v59);
              std::unique_ptr<CCheckMPOCache>::~unique_ptr<CCheckMPOCache>((void **)&v59);
            }
          }
        }
      }
    }
  }
LABEL_38:
  v52 = v54;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v60);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v56);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v58);
  return v52;
}
