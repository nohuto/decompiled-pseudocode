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
