/*
 * XREFs of ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1800CE934
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1800CE504 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800C1870 (-IsOOM@@YA_NJ@Z.c)
 *     ?GetMaxFeatureLevel@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@@Z @ 0x1800CF044 (-GetMaxFeatureLevel@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVER.c)
 *     ?CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ @ 0x1800D0D70 (-CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD3DDevice::CreateD3D11Device(
        IDXGIAdapter *pAdapter,
        enum D3D_FEATURE_LEVEL *a2,
        enum _QAI_DRIVERVERSION *a3,
        union _LARGE_INTEGER *a4,
        struct ID3D11Device1 **a5)
{
  int MaxFeatureLevel; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  UINT v10; // edi
  const D3D_FEATURE_LEVEL *v11; // rsi
  bool v12; // zf
  UINT FeatureLevels; // ebx
  D3D_FEATURE_LEVEL *v14; // rax
  __int64 v15; // rcx
  HRESULT v16; // eax
  __int64 v18; // rcx
  unsigned int pFeatureLevels; // [rsp+20h] [rbp-51h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+50h] [rbp-21h] BYREF
  ID3D11Device *ppDevice; // [rsp+58h] [rbp-19h] BYREF
  _OWORD v22[2]; // [rsp+60h] [rbp-11h] BYREF
  int v23; // [rsp+80h] [rbp+Fh]
  void *retaddr; // [rsp+C8h] [rbp+57h]

  ppDevice = 0LL;
  v22[0] = _mm_load_si128((const __m128i *)&_xmm);
  v23 = 37120;
  v22[1] = _mm_load_si128((const __m128i *)&_xmm);
  MaxFeatureLevel = CD3DDevice::GetMaxFeatureLevel(pAdapter, &pFeatureLevel, a3, a4);
  v9 = MaxFeatureLevel;
  if ( MaxFeatureLevel < 0 )
  {
    pFeatureLevels = 187;
    goto LABEL_20;
  }
  v10 = 169;
  v11 = (const D3D_FEATURE_LEVEL *)v22;
  v12 = !CurrentProcessHasIncreasedPriorityPrivileges();
  FeatureLevels = 9;
  v14 = (D3D_FEATURE_LEVEL *)v22;
  if ( !v12 )
    v10 = 4265;
  v15 = 0LL;
  while ( *v14 > pFeatureLevel )
  {
    v15 = (unsigned int)(v15 + 1);
    ++v14;
    if ( (unsigned int)v15 >= 9 )
      goto LABEL_7;
  }
  FeatureLevels = 9 - v15;
  v11 = (const D3D_FEATURE_LEVEL *)v22 + v15;
LABEL_7:
  if ( ppDevice )
    ((void (__fastcall *)(ID3D11Device *))ppDevice->lpVtbl->Release)(ppDevice);
  v16 = D3D11CreateDevice(
          pAdapter,
          D3D_DRIVER_TYPE_UNKNOWN,
          0LL,
          v10,
          v11,
          FeatureLevels,
          7u,
          &ppDevice,
          &pFeatureLevel,
          0LL);
  v9 = v16;
  if ( v16 >= 0 )
  {
    MaxFeatureLevel = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, struct ID3D11Device1 **))ppDevice->lpVtbl->QueryInterface)(
                        ppDevice,
                        &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
                        a5);
    v9 = MaxFeatureLevel;
    if ( MaxFeatureLevel >= 0 )
    {
      *a2 = pFeatureLevel;
      goto LABEL_12;
    }
    pFeatureLevels = 287;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, MaxFeatureLevel, pFeatureLevels, 0LL);
    goto LABEL_12;
  }
  if ( IsOOM(v16) )
    ModuleFailFastForHRESULT(2291662989LL, retaddr);
  MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v9, 0x129u, 0LL);
LABEL_12:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&ppDevice);
  return v9;
}
