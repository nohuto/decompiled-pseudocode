/*
 * XREFs of ?GetMaxFeatureLevel@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@@Z @ 0x18002DFB8
 * Callers:
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x18002D8C8 (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERS.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::GetMaxFeatureLevel(
        struct IDXGIAdapter *a1,
        enum D3D_FEATURE_LEVEL *a2,
        enum _QAI_DRIVERVERSION *a3,
        union _LARGE_INTEGER *a4)
{
  struct IDXGIAdapterVtbl *lpVtbl; // rax
  enum D3D_FEATURE_LEVEL v9; // ebx
  HRESULT (__stdcall *QueryInterface)(IDXGIAdapter *, const IID *const, void **); // rax
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  int v15; // edi
  int v16; // eax
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  LONGLONG v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h]
  _BYTE v26[256]; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+170h] [rbp+70h]

  v23 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  lpVtbl = a1->lpVtbl;
  v20 = 1000;
  v9 = D3D_FEATURE_LEVEL_9_1;
  QueryInterface = lpVtbl->QueryInterface;
  v24 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, GUID *, __int64 *))QueryInterface)(
          a1,
          &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
          &v22);
  v13 = v11;
  if ( v11 < 0 )
  {
    v19 = 127;
    goto LABEL_28;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, &v23);
  v13 = v11;
  if ( v11 < 0 )
  {
    v19 = 129;
    goto LABEL_28;
  }
  *(_QWORD *)&v24 = (unsigned int)v23 | 0xD00000000LL;
  *((_QWORD *)&v24 + 1) = &v20;
  LODWORD(v25) = 4;
  v15 = D3DKMTQueryAdapterInfo(&v24);
  if ( v15 < 0 )
  {
    v13 = v15 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x8Du, 0LL);
    goto LABEL_10;
  }
  v11 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, _BYTE *))a1->lpVtbl->GetDesc)(a1, v26);
  v13 = v11;
  if ( v11 < 0 )
  {
    v19 = 146;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v19, 0LL);
    goto LABEL_10;
  }
  if ( ((int (__fastcall *)(struct IDXGIAdapter *, GUID *, LONGLONG *))a1->lpVtbl->CheckInterfaceSupport)(
         a1,
         &GUID_9b7e4c8f_342c_4106_a19f_4f2704f689f0,
         &v21) < 0 )
  {
    if ( ((int (__fastcall *)(struct IDXGIAdapter *, GUID *, LONGLONG *))a1->lpVtbl->CheckInterfaceSupport)(
           a1,
           &GUID_9b7e4c0f_342c_4106_a19f_4f2704f689f0,
           &v21) < 0 )
    {
      v21 = 0LL;
      goto LABEL_24;
    }
    v9 = D3D_FEATURE_LEVEL_10_0;
    if ( v27 == 4318 && v21 <= 0x7000F000B18E1LL )
      goto LABEL_24;
  }
  else
  {
    v9 = D3D_FEATURE_LEVEL_12_1;
  }
  if ( !CCommonRegistryData::m_fForce10Level9 )
  {
    if ( v20 < 1105 )
    {
      v18 = v9;
      if ( !CCommonRegistryData::m_fForce10OnWDDM1_0 )
        v18 = 37632;
      v9 = v18;
    }
    goto LABEL_9;
  }
LABEL_24:
  v9 = D3D_FEATURE_LEVEL_9_3;
LABEL_9:
  if ( CCommonRegistryData::MaxD3DFeatureLevel >= 37120 && CCommonRegistryData::MaxD3DFeatureLevel < v9 )
    v9 = CCommonRegistryData::MaxD3DFeatureLevel;
LABEL_10:
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
  v16 = v20;
  *a2 = v9;
  *(_DWORD *)a3 = v16;
  a4->QuadPart = v21;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
  return v13;
}
