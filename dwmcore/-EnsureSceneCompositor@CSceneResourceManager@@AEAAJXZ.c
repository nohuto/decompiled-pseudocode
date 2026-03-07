__int64 __fastcall CSceneResourceManager::EnsureSceneCompositor(CSceneResourceManager *this, __int64 a2)
{
  unsigned int v3; // ebx
  HMODULE *v4; // r15
  HMODULE LibraryW; // rax
  CDisplayManager *v6; // rcx
  FARPROC ProcAddress; // r13
  __int64 v8; // rcx
  struct IDXGIFactory5 *v9; // rbx
  unsigned int v10; // esi
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  bool v12; // r12
  CSceneResourceManager *v13; // rcx
  CDisplayManager *v14; // rcx
  struct _LUID PrimaryAdapterLuid; // rax
  struct _LUID v16; // rdx
  CD3DDevice *v17; // rcx
  int Device; // eax
  __int64 v19; // rcx
  struct CD3DDevice **v20; // rsi
  CD3DDevice *v21; // rcx
  int DefaultDevice; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  _BYTE *v30; // rdx
  _QWORD *v31; // rsi
  _QWORD *i; // rdi
  struct IUnknown *v34; // [rsp+38h] [rbp-D0h] BYREF
  CSceneResourceManager *v35; // [rsp+40h] [rbp-C8h] BYREF
  struct IDXGIFactory5 *v36; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h] BYREF
  int v38; // [rsp+58h] [rbp-B0h]
  int v39; // [rsp+5Ch] [rbp-ACh]
  int v40; // [rsp+60h] [rbp-A8h]
  float v41; // [rsp+64h] [rbp-A4h]
  int v42; // [rsp+68h] [rbp-A0h]
  char v43; // [rsp+6Ch] [rbp-9Ch]
  char v44; // [rsp+6Dh] [rbp-9Bh]
  char v45; // [rsp+6Eh] [rbp-9Ah]
  char v46; // [rsp+6Fh] [rbp-99h]
  CSceneResourceManager **v47; // [rsp+70h] [rbp-98h]
  CSceneResourceManager *v48; // [rsp+78h] [rbp-90h] BYREF
  char v49; // [rsp+80h] [rbp-88h]
  struct _LUID v50; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v51[296]; // [rsp+98h] [rbp-70h] BYREF
  struct _LUID v52; // [rsp+1C0h] [rbp+B8h]

  v3 = 0;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SpatialComposition>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SpatialComposition>::GetImpl'::`2'::impl,
    a2);
  if ( *((_BYTE *)this + 80) )
    return v3;
  v4 = (HMODULE *)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) )
  {
    LibraryW = LoadLibraryW(L"DwmScene.dll");
    wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
      (char *)this + 16,
      LibraryW);
  }
  if ( !*v4 )
  {
    *((_BYTE *)this + 80) = 1;
    return v3;
  }
  if ( *((_QWORD *)this + 3) )
    return v3;
  ProcAddress = GetProcAddress(*v4, "CreateDwmSceneRenderer");
  if ( !ProcAddress )
  {
    v3 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, -2147418113, 0x5Bu, 0LL);
LABEL_45:
    *((_BYTE *)this + 80) = 1;
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((char *)this + 24);
    wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
      (char *)this + 16,
      0LL);
    return v3;
  }
  if ( CCommonRegistryData::m_fSceneForceNonPrimaryDisplayAdapter )
  {
    v36 = 0LL;
    if ( (int)CDisplayManager::GetDXGIFactory(v6, &v36) >= 0 )
    {
      v9 = v36;
      v10 = 0;
      v35 = 0LL;
      while ( 1 )
      {
        lpVtbl = v9->lpVtbl;
        v47 = &v35;
        v48 = 0LL;
        v49 = 1;
        v12 = ((int (__fastcall *)(struct IDXGIFactory5 *, _QWORD, CSceneResourceManager **))lpVtbl->EnumAdapters1)(
                v9,
                v10,
                &v48) >= 0;
        if ( v49 )
        {
          v13 = *v47;
          *v47 = v48;
          if ( v13 )
            (*(void (__fastcall **)(CSceneResourceManager *))(*(_QWORD *)v13 + 16LL))(v13);
        }
        if ( !v12 )
          break;
        memset_0(v51, 0, 0x138uLL);
        if ( (*(int (__fastcall **)(CSceneResourceManager *, _BYTE *))(*(_QWORD *)v35 + 80LL))(v35, v51) >= 0 )
        {
          PrimaryAdapterLuid = CDisplayManager::GetPrimaryAdapterLuid(v14, &v50);
          v16 = v52;
          if ( v52.LowPart != *(_DWORD *)PrimaryAdapterLuid.LowPart
            || v52.HighPart != *(_DWORD *)(*(_QWORD *)&PrimaryAdapterLuid + 4LL) )
          {
            v17 = (CD3DDevice *)*((_QWORD *)this + 4);
            *((_QWORD *)this + 4) = 0LL;
            if ( v17 )
            {
              CD3DDevice::Release(v17);
              v16 = v52;
            }
            Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v16, (struct CD3DDevice **)this + 4);
            v3 = Device;
            if ( Device < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, Device, 0x6Du, 0LL);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
              goto LABEL_27;
            }
            break;
          }
        }
        ++v10;
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
    }
    v20 = (struct CD3DDevice **)((char *)this + 32);
    if ( !*((_QWORD *)this + 4) )
    {
      v3 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147467259, 0x77u, 0LL);
LABEL_27:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
      goto LABEL_45;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
  }
  else
  {
    v20 = (struct CD3DDevice **)((char *)this + 32);
    v21 = (CD3DDevice *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = 0LL;
    if ( v21 )
      CD3DDevice::Release(v21);
    DefaultDevice = CDeviceManager::GetDefaultDevice(v21, (struct CD3DDevice **)this + 4);
    v3 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, DefaultDevice, 0x7Cu, 0LL);
      goto LABEL_45;
    }
  }
  v24 = *((_QWORD *)*v20 + 69);
  v38 = CCommonRegistryData::Scene::ImageProcessingMinWidth;
  v39 = CCommonRegistryData::Scene::ImageProcessingMinHeight;
  v40 = CCommonRegistryData::Scene::ImageProcessingResizeGrowth;
  v42 = CCommonRegistryData::Scene::MsaaQualityMode;
  v43 = CCommonRegistryData::Scene::EnableBloom;
  v44 = CCommonRegistryData::Scene::EnableImageProcessing;
  v45 = CCommonRegistryData::Scene::ImageProcessing8bit;
  v46 = CCommonRegistryData::Scene::EnableShadow;
  v41 = CCommonRegistryData::m_flSceneImageProcessingResizeThreshold;
  v37 = v24;
  v34 = 0LL;
  v25 = ((__int64 (__fastcall *)(__int64 *, GUID *, struct IUnknown **))ProcAddress)(
          &v37,
          &GUID_c459639d_0878_4eb7_ade9_3655c96fa73a,
          &v34);
  v3 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x8Cu, 0LL);
    goto LABEL_43;
  }
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((char *)this + 24);
  v27 = CExternalD3DRenderer::Create(*v20, v34, (struct CExternalD3DRenderer **)this + 3);
  v3 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x8Eu, 0LL);
LABEL_43:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
    goto LABEL_45;
  }
  v29 = *((_QWORD *)this + 3) + 72LL;
  v35 = this;
  v30 = *(_BYTE **)(v29 + 8);
  if ( v30 == *(_BYTE **)(v29 + 16) )
  {
    std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(
      (const void **)v29,
      v30,
      &v35);
  }
  else
  {
    *(_QWORD *)v30 = this;
    *(_QWORD *)(v29 + 8) += 8LL;
  }
  v31 = (_QWORD *)*((_QWORD *)this + 6);
  for ( i = (_QWORD *)*((_QWORD *)this + 5); i != v31; ++i )
    (**(void (__fastcall ***)(_QWORD, struct IUnknown *))*i)(*i, v34);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
  return v3;
}
