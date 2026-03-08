/*
 * XREFs of ?GetMaxFeatureLevel@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@@Z @ 0x1800CF044
 * Callers:
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1800CE934 (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z @ 0x1800CF1D4 (-Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z.c)
 *     ??1CKMAdapterHandle@@QEAA@XZ @ 0x1800D0B90 (--1CKMAdapterHandle@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::GetMaxFeatureLevel(
        struct IDXGIAdapter *a1,
        enum D3D_FEATURE_LEVEL *a2,
        enum _QAI_DRIVERVERSION *a3,
        union _LARGE_INTEGER *a4)
{
  struct IDXGIAdapterVtbl *lpVtbl; // rax
  enum D3D_FEATURE_LEVEL v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-CCh] BYREF
  LONGLONG v20; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h]
  _BYTE v23[256]; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+160h] [rbp+60h]
  struct _LUID v25; // [rsp+188h] [rbp+88h]

  v18 = 1000;
  v22 = 0LL;
  lpVtbl = a1->lpVtbl;
  v19 = 0;
  v9 = D3D_FEATURE_LEVEL_9_1;
  v21 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, _BYTE *))lpVtbl->GetDesc)(a1, v23);
  v12 = v10;
  if ( v10 < 0 )
  {
    v17 = 89;
    goto LABEL_27;
  }
  v10 = CKMAdapterHandle::Initialize((CKMAdapterHandle *)&v19, v25);
  v12 = v10;
  if ( v10 < 0 )
  {
    v17 = 92;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v17, 0LL);
    goto LABEL_9;
  }
  *(_QWORD *)&v21 = v19 | 0xD00000000LL;
  *((_QWORD *)&v21 + 1) = &v18;
  LODWORD(v22) = 4;
  v13 = D3DKMTQueryAdapterInfo(&v21);
  if ( v13 < 0 )
  {
    v12 = v13 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13 | 0x10000000, 0x63u, 0LL);
    goto LABEL_9;
  }
  if ( ((int (__fastcall *)(struct IDXGIAdapter *, GUID *, LONGLONG *))a1->lpVtbl->CheckInterfaceSupport)(
         a1,
         &GUID_9b7e4c8f_342c_4106_a19f_4f2704f689f0,
         &v20) < 0 )
  {
    if ( ((int (__fastcall *)(struct IDXGIAdapter *, GUID *, LONGLONG *))a1->lpVtbl->CheckInterfaceSupport)(
           a1,
           &GUID_9b7e4c0f_342c_4106_a19f_4f2704f689f0,
           &v20) < 0 )
    {
      v20 = 0LL;
      goto LABEL_12;
    }
    v9 = D3D_FEATURE_LEVEL_10_0;
    if ( v24 == 4318 && v20 <= 0x7000F000B18E1LL )
      v9 = D3D_FEATURE_LEVEL_9_3;
    if ( (unsigned int)v9 < D3D_FEATURE_LEVEL_10_0 )
      goto LABEL_8;
  }
  else
  {
    v9 = D3D_FEATURE_LEVEL_12_1;
  }
  if ( !CCommonRegistryData::m_fForce10Level9 )
  {
    if ( v18 < 1105 && !CCommonRegistryData::m_fForce10OnWDDM1_0 )
      v9 = D3D_FEATURE_LEVEL_9_3;
    goto LABEL_8;
  }
LABEL_12:
  v9 = D3D_FEATURE_LEVEL_9_3;
LABEL_8:
  if ( CCommonRegistryData::MaxD3DFeatureLevel >= 37120 && CCommonRegistryData::MaxD3DFeatureLevel < v9 )
    v9 = CCommonRegistryData::MaxD3DFeatureLevel;
LABEL_9:
  v15 = v18;
  *a2 = v9;
  *(_DWORD *)a3 = v15;
  a4->QuadPart = v20;
  CKMAdapterHandle::~CKMAdapterHandle((CKMAdapterHandle *)&v19);
  return v12;
}
