__int64 __fastcall CD3DDevice::Init(CD3DDevice *this, struct IDXGIAdapter *a2, struct ID3D11Device1 *a3)
{
  struct IDXGIAdapterVtbl *lpVtbl; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct IDXGIDevice3 **v18; // r14
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  void (__fastcall *v23)(__int64, __int64 *); // rsi
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int WarpExtension; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  bool IsShaderLinkingBlacklistedGpu; // al
  struct IDXGIDevice3 *v32; // rdx
  int v33; // eax
  __int64 v34; // rcx
  int Shaders; // eax
  __int64 v36; // rcx
  int RenderingResources; // eax
  __int64 v38; // rcx
  int inited; // eax
  __int64 v40; // rcx
  __int64 v42; // [rsp+68h] [rbp+10h] BYREF
  __int64 v43; // [rsp+78h] [rbp+20h] BYREF

  lpVtbl = a2->lpVtbl;
  v42 = 0LL;
  v43 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_3c8d99d1_4fbf_4181_a82c_af66bf7bd24e,
         &v43);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x173u, 0LL);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v43 + 144LL))(v43, (char *)this + 600);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v9, 0x174u, 0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0pqnz_EventWriteTransfer(v11, v10, (_DWORD)this, *((_DWORD *)this + 146));
      v12 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, __int64, char *, __int64))a3->lpVtbl->CheckFeatureSupport)(
              a3,
              11LL,
              (char *)this + 932,
              4LL);
      v8 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x17Eu, 0LL);
      }
      else
      {
        v14 = (_QWORD *)((char *)this + 552);
        *((_QWORD *)this + 148) = this;
        v15 = *((_QWORD *)this + 69);
        *((_QWORD *)this + 69) = 0LL;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v16 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a3->lpVtbl->QueryInterface)(
                a3,
                &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
                (char *)this + 552);
        v8 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x182u, 0LL);
        }
        else
        {
          v18 = (struct IDXGIDevice3 **)((char *)this + 536);
          v19 = *((_QWORD *)this + 67);
          *((_QWORD *)this + 67) = 0LL;
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          v20 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v14)(
                  *v14,
                  &GUID_6007896c_3244_4afd_bf18_a6d3beda5023,
                  (char *)this + 536);
          v8 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x183u, 0LL);
          }
          else
          {
            ((void (__fastcall *)(struct IDXGIDevice3 *, __int64))(*v18)->lpVtbl->SetMaximumFrameLatency)(*v18, 16LL);
            v22 = *v14;
            v23 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v14 + 320LL);
            if ( v42 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
            v23(v22, &v42);
            v24 = *((_QWORD *)this + 70);
            *((_QWORD *)this + 70) = 0LL;
            if ( v24 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
            v25 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v42)(
                    v42,
                    &GUID_917600da_f58c_4c33_98d8_3e15b390fa24,
                    (char *)this + 560);
            v8 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x188u, 0LL);
            }
            else
            {
              WarpExtension = CD3DDevice::QueryWarpExtension(this);
              v8 = WarpExtension;
              if ( WarpExtension < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, WarpExtension, 0x18Au, 0LL);
              }
              else
              {
                CD3DDevice::CalcMaxTextureSize(this);
                v29 = CD3DDevice::GatherSupportedTextureFormats(this);
                v8 = v29;
                if ( v29 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x190u, 0LL);
                }
                else
                {
                  IsShaderLinkingBlacklistedGpu = CCommonRegistryData::IsShaderLinkingBlacklistedGpu(
                                                    *((_DWORD *)this + 214),
                                                    *((_DWORD *)this + 215));
                  v32 = *v18;
                  *((_BYTE *)this + 1505) = IsShaderLinkingBlacklistedGpu;
                  v33 = CD2DContext::InitializeD2D((CD3DDevice *)((char *)this + 16), v32);
                  v8 = v33;
                  if ( v33 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x196u, 0LL);
                  }
                  else
                  {
                    Shaders = CD3DDevice::GenerateShaders(this);
                    v8 = Shaders;
                    if ( Shaders < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, Shaders, 0x198u, 0LL);
                    }
                    else
                    {
                      RenderingResources = CDrawListBatchManager::CreateRenderingResources((CD3DDevice *)((char *)this + 24));
                      v8 = RenderingResources;
                      if ( RenderingResources < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, RenderingResources, 0x19Au, 0LL);
                      }
                      else
                      {
                        inited = CD3DDevice::InitSystemDevice(this);
                        v8 = inited;
                        if ( inited < 0 )
                          MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, inited, 0x19Cu, 0LL);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v42);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v43);
  return v8;
}
