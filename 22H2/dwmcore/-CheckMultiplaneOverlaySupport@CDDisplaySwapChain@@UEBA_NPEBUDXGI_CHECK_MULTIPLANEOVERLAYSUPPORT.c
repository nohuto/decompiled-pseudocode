/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDDisplaySwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x180239030
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z @ 0x1800F1758 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1800F17F0 (-CheckMPOCache@CD3DDevice@@QEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDDisplaySwapChain::CheckMultiplaneOverlaySupport(
        CDDisplaySwapChain *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  CD3DDevice *v6; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // esi
  const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *v14; // r15
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 (__fastcall *v23)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int128 *, __int128 *, __int128 *, _DWORD, _DWORD, _QWORD); // r10
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  bool v30; // cl
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-98h] BYREF
  __int128 v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+80h] [rbp-80h]
  __int128 v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __int128 v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+E0h] [rbp-20h]
  __int128 v42; // [rsp+F0h] [rbp-10h]
  __int128 v43; // [rsp+100h] [rbp+0h]
  __int128 v44; // [rsp+110h] [rbp+10h]
  __int128 v45; // [rsp+120h] [rbp+20h]
  __int128 v46; // [rsp+130h] [rbp+30h]
  __int128 v47; // [rsp+140h] [rbp+40h] BYREF
  __int128 v48; // [rsp+150h] [rbp+50h] BYREF
  __int128 v49; // [rsp+160h] [rbp+60h] BYREF
  bool v50; // [rsp+1A0h] [rbp+A0h] BYREF

  v33 = 0LL;
  v32 = 0LL;
  v37 = 0LL;
  v6 = (CD3DDevice *)*((_QWORD *)this + 3);
  v50 = 0;
  if ( CD3DDevice::CheckMPOCache(v6, a2, a3, &v50) )
  {
    *a4 = 1;
  }
  else
  {
    *a4 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 11) + 56LL))(
           *((_QWORD *)this + 11),
           *((_QWORD *)this + 15),
           &v33);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x15Fu, 0LL);
    }
    else
    {
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      v11 = (**v33)(v33, &GUID_56b76193_af04_5806_83a8_56be01847aad, &v32);
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x161u, 0LL);
      }
      else
      {
        v13 = 0;
        if ( a3 )
        {
          v14 = a2;
          while ( 1 )
          {
            v15 = *((_OWORD *)v14 + 1);
            v38 = *(_OWORD *)v14;
            v16 = *((_OWORD *)v14 + 2);
            v39 = v15;
            v17 = *((_OWORD *)v14 + 3);
            v40 = v16;
            v18 = *((_OWORD *)v14 + 4);
            v41 = v17;
            v19 = *((_OWORD *)v14 + 5);
            v42 = v18;
            v20 = *((_OWORD *)v14 + 6);
            v43 = v19;
            v21 = *((_OWORD *)v14 + 7);
            v44 = v20;
            v22 = *((_OWORD *)v14 + 8);
            v45 = v21;
            v46 = v22;
            *(_QWORD *)&v34 = *(_QWORD *)((char *)&v42 + 4);
            v23 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int128 *, __int128 *, __int128 *, _DWORD, _DWORD, _QWORD))(*(_QWORD *)v32 + 96LL);
            DWORD2(v34) = HIDWORD(v42) - DWORD1(v42);
            *(_QWORD *)&v35 = *(_QWORD *)((char *)&v41 + 4);
            HIDWORD(v34) = v43 - DWORD2(v42);
            DWORD2(v35) = HIDWORD(v41) - DWORD1(v41);
            *(_QWORD *)&v36 = *(_QWORD *)((char *)&v40 + 4);
            HIDWORD(v35) = v42 - DWORD2(v41);
            v24 = DWORD2(v43);
            DWORD2(v36) = HIDWORD(v40) - DWORD1(v40);
            LOBYTE(v24) = 1;
            HIDWORD(v36) = v41 - DWORD2(v40);
            v47 = v34;
            v48 = v35;
            v49 = v36;
            v25 = v23(
                    v32,
                    v24,
                    (unsigned int)v38,
                    *((_QWORD *)&v38 + 1),
                    HIDWORD(v39),
                    &v49,
                    &v48,
                    &v47,
                    DWORD2(v43),
                    0,
                    0LL);
            if ( v25 < 0 )
              break;
            v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v32 + 120LL))(
                    v32,
                    (unsigned int)v38,
                    HIDWORD(v44));
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x17Cu, 0LL);
              goto LABEL_19;
            }
            ++v13;
            v14 = (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)((char *)v14 + 144);
            if ( v13 >= a3 )
              goto LABEL_12;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x179u, 0LL);
        }
        else
        {
LABEL_12:
          v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 72LL))(v32);
          v30 = v50;
          if ( v29 >= 0 )
            v30 = 1;
          v50 = v30;
          CD3DDevice::AddCheckMPOCache(*((CD3DDevice **)this + 3), a2);
        }
      }
    }
  }
LABEL_19:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v37);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
  return v50;
}
