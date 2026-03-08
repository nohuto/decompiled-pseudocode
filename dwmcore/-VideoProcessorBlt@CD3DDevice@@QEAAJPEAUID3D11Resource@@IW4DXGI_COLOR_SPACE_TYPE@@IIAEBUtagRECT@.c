/*
 * XREFs of ?VideoProcessorBlt@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@0II2@Z @ 0x18028B1AC
 * Callers:
 *     ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x1802AE1C0 (-VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBU.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureVideoProcessor@CD3DDevice@@AEAAJIIII@Z @ 0x18028A22C (-EnsureVideoProcessor@CD3DDevice@@AEAAJIIII@Z.c)
 */

__int64 __fastcall CD3DDevice::VideoProcessorBlt(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11,
        unsigned int a12,
        __int64 a13)
{
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // edx
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v34; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v35; // [rsp+48h] [rbp-A9h] BYREF
  __int64 v36; // [rsp+50h] [rbp-A1h] BYREF
  __int64 v37; // [rsp+58h] [rbp-99h]
  __int128 v38; // [rsp+60h] [rbp-91h] BYREF
  _DWORD v39[8]; // [rsp+70h] [rbp-81h] BYREF
  __int64 v40; // [rsp+90h] [rbp-61h]
  __int64 v41; // [rsp+C0h] [rbp-31h] BYREF
  unsigned int v42; // [rsp+C8h] [rbp-29h]
  unsigned int v43; // [rsp+CCh] [rbp-25h]
  __int128 v44; // [rsp+D0h] [rbp-21h] BYREF

  v34 = a7;
  v37 = a13;
  v36 = 0LL;
  v35 = 0LL;
  v44 = 0LL;
  v38 = 0LL;
  memset_0(v39, 0, 0x48uLL);
  v42 = a11;
  v43 = a12;
  v41 = 0LL;
  v17 = CD3DDevice::EnsureVideoProcessor((CD3DDevice *)a1, a5, a6, a11, a12);
  v19 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x85Au, 0LL);
    goto LABEL_23;
  }
  v20 = *(_QWORD *)(a1 + 984);
  HIDWORD(v44) = a3;
  DWORD1(v44) = 1;
  v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int128 *, __int64 *))(*(_QWORD *)v20 + 64LL))(
          v20,
          a2,
          *(_QWORD *)(a1 + 1000),
          &v44,
          &v36);
  v19 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x862u, 0LL);
    goto LABEL_23;
  }
  v23 = *(_QWORD *)(a1 + 984);
  LODWORD(v38) = 1;
  v24 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int128 *, __int64 *))(*(_QWORD *)v23 + 72LL))(
          v23,
          a10,
          *(_QWORD *)(a1 + 1000),
          &v38,
          &v35);
  v19 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x869u, 0LL);
    goto LABEL_23;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 992) + 240LL))(
    *(_QWORD *)(a1 + 992),
    *(_QWORD *)(a1 + 1008),
    0LL,
    1LL,
    v34);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 992) + 248LL))(
    *(_QWORD *)(a1 + 992),
    *(_QWORD *)(a1 + 1008),
    0LL,
    1LL,
    v37);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 992) + 104LL))(
    *(_QWORD *)(a1 + 992),
    *(_QWORD *)(a1 + 1008),
    1LL,
    &v41);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 992) + 592LL))(
    *(_QWORD *)(a1 + 992),
    *(_QWORD *)(a1 + 1008),
    0LL,
    a4);
  if ( a8 != 1 )
  {
    if ( (*(_BYTE *)(a1 + 948) & 0x40) == 0 )
    {
      v19 = -2003292287;
      MilInstrumentationCheckHR_MaybeFailFast(a8, 0LL, 0, -2003292287, 0x888u, 0LL);
      goto LABEL_23;
    }
    v26 = 0;
    switch ( a8 )
    {
      case 2u:
        v26 = 1;
        break;
      case 3u:
        v26 = 2;
        break;
      case 4u:
        v26 = 3;
        break;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int))(**(_QWORD **)(a1 + 992) + 504LL))(
      *(_QWORD *)(a1 + 992),
      *(_QWORD *)(a1 + 1008),
      0LL,
      1LL,
      v26);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 992) + 296LL))(
    *(_QWORD *)(a1 + 992),
    *(_QWORD *)(a1 + 1008),
    0LL,
    0LL);
  if ( a9 )
  {
    v27 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 992);
    v34 = 0LL;
    v28 = (**v27)(v27, &GUID_c4e7374c_6243_4d1b_ae87_52b4f740e261, &v34);
    v19 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x893u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
      goto LABEL_23;
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, __int64))(*(_QWORD *)v34 + 648LL))(
      v34,
      *(_QWORD *)(a1 + 1008),
      0LL,
      1LL,
      28,
      a9);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
  }
  v30 = *(_QWORD *)(a1 + 992);
  v39[0] = 1;
  v40 = v36;
  v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, _DWORD *))(*(_QWORD *)v30 + 424LL))(
          v30,
          *(_QWORD *)(a1 + 1008),
          v35,
          0LL,
          1,
          v39);
  v19 = v31;
  if ( v31 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x8A3u, 0LL);
LABEL_23:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
  return v19;
}
