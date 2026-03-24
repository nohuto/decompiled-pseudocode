/*
 * XREFs of ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x18002AC38
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x18002AB64 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x18002AF30 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x18002C2E4 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x18002D088 (-CreateSharedHandleFence@CD3DDevice@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11.c)
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x18002D1A0 (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 *     ?GatherSupportedTextureFormats@CD3DDevice@@AEAAJXZ @ 0x18002D238 (-GatherSupportedTextureFormats@CD3DDevice@@AEAAJXZ.c)
 *     ?CalcMaxTextureSize@CD3DDevice@@AEAAXXZ @ 0x18002D408 (-CalcMaxTextureSize@CD3DDevice@@AEAAXXZ.c)
 *     ?QueryWarpExtension@CD3DDevice@@AEAAJXZ @ 0x18002D4A8 (-QueryWarpExtension@CD3DDevice@@AEAAJXZ.c)
 *     ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x180045A2C (-GenerateShaders@CD3DDevice@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pqnz_EventWriteTransfer @ 0x180240FA4 (McTemplateU0pqnz_EventWriteTransfer.c)
 */

__int64 __fastcall CD3DDevice::Init(CD3DDevice *this, struct IDXGIAdapter *a2, struct ID3D11Device1 *a3)
{
  struct IDXGIAdapterVtbl *lpVtbl; // rax
  HRESULT (__stdcall *QueryInterface)(IDXGIAdapter *, const IID *const, void **); // rax
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  struct IDXGIDeviceDWM **v15; // rsi
  struct ID3D11Device1Vtbl *v16; // rax
  __int64 v17; // rcx
  HRESULT (__stdcall *v18)(ID3D11Device1 *, const IID *const, void **); // rbx
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  char *v23; // r14
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rbx
  void (__fastcall *v28)(__int64, __int64 *); // r14
  __int64 v29; // rcx
  int v30; // eax
  unsigned int v31; // ecx
  int WarpExtension; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  bool IsShaderLinkingBlacklistedGpu; // al
  unsigned __int64 v37; // r8
  int v38; // ebx
  __int64 v39; // rcx
  enum D3D11_FENCE_FLAG v40; // ebx
  int SharedHandleFence; // eax
  unsigned int v42; // ecx
  int v43; // eax
  unsigned int v44; // ecx
  int Shaders; // eax
  unsigned int v46; // ecx
  int RenderingResources; // eax
  unsigned int v48; // ecx
  __int64 v50; // [rsp+40h] [rbp-20h] BYREF
  const char *v51; // [rsp+48h] [rbp-18h] BYREF
  int v52; // [rsp+50h] [rbp-10h]
  __int64 v53; // [rsp+98h] [rbp+38h] BYREF
  __int64 v54; // [rsp+A8h] [rbp+48h] BYREF

  lpVtbl = a2->lpVtbl;
  v54 = 0LL;
  v53 = 0LL;
  QueryInterface = lpVtbl->QueryInterface;
  v50 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_3c8d99d1_4fbf_4181_a82c_af66bf7bd24e,
         &v50);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1A9u, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v50 + 144LL))(v50, (char *)this + 640);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v10, 0x1AAu, 0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0pqnz_EventWriteTransfer(v12, v11, (_DWORD)this, *((_DWORD *)this + 156));
      v13 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, __int64, char *, __int64))a3->lpVtbl->CheckFeatureSupport)(
              a3,
              11LL,
              (char *)this + 972,
              4LL);
      v9 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1B4u, 0LL);
      }
      else
      {
        *((_QWORD *)this + 152) = this;
        v15 = (struct IDXGIDeviceDWM **)((char *)this + 584);
        v16 = a3->lpVtbl;
        v17 = *((_QWORD *)this + 73);
        *((_QWORD *)this + 73) = 0LL;
        v18 = v16->QueryInterface;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v19 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))v18)(
                a3,
                &GUID_fef19e0a_40c0_472b_ae40_59ef97af3529,
                (char *)this + 584);
        v9 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1B8u, 0LL);
        }
        else
        {
          if ( v54 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
          v21 = (**(__int64 (__fastcall ***)(struct IDXGIDeviceDWM *, GUID *, __int64 *))*v15)(
                  *v15,
                  &GUID_77db970f_6276_48ba_ba28_070143b4392c,
                  &v54);
          v9 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x1BAu, 0LL);
          }
          else
          {
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 96LL))(v54, 16LL);
            v23 = (char *)this + 592;
            v24 = *((_QWORD *)this + 74);
            *((_QWORD *)this + 74) = 0LL;
            if ( v24 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
            v25 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, char *))a3->lpVtbl->QueryInterface)(
                    a3,
                    &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
                    (char *)this + 592);
            v9 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x1BDu, 0LL);
            }
            else
            {
              v27 = *(_QWORD *)v23;
              v28 = *(void (__fastcall **)(__int64, __int64 *))(**(_QWORD **)v23 + 320LL);
              if ( v53 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
              v28(v27, &v53);
              v29 = *((_QWORD *)this + 75);
              *((_QWORD *)this + 75) = 0LL;
              if ( v29 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
              v30 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v53)(
                      v53,
                      &GUID_917600da_f58c_4c33_98d8_3e15b390fa24,
                      (char *)this + 600);
              v9 = v30;
              if ( v30 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1C0u, 0LL);
              }
              else
              {
                WarpExtension = CD3DDevice::QueryWarpExtension(this);
                v9 = WarpExtension;
                if ( WarpExtension < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, WarpExtension, 0x1C2u, 0LL);
                }
                else
                {
                  CD3DDevice::CalcMaxTextureSize(this);
                  v34 = CD3DDevice::GatherSupportedTextureFormats(this);
                  v9 = v34;
                  if ( v34 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x1C8u, 0LL);
                  }
                  else
                  {
                    IsShaderLinkingBlacklistedGpu = CCommonRegistryData::IsShaderLinkingBlacklistedGpu(
                                                      *((_DWORD *)this + 224),
                                                      *((_DWORD *)this + 225));
                    v38 = *((_DWORD *)this + 236);
                    *((_BYTE *)this + 1433) = IsShaderLinkingBlacklistedGpu;
                    v39 = *((_QWORD *)this + 77);
                    v40 = ~(_BYTE)v38 & 8;
                    *((_QWORD *)this + 77) = 0LL;
                    if ( v39 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
                    v51 = "TokenThreadRenderFence";
                    v52 = 22;
                    SharedHandleFence = CD3DDevice::CreateSharedHandleFence(
                                          this,
                                          (const struct CResourceTag *)&v51,
                                          v37,
                                          (struct ID3D11Fence **)this + 77,
                                          (void **)this + 122,
                                          v40);
                    v9 = SharedHandleFence;
                    if ( SharedHandleFence < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, SharedHandleFence, 0x1D2u, 0LL);
                    }
                    else
                    {
                      v43 = CD2DContext::InitializeD2D((CD3DDevice *)((char *)this + 16), *v15);
                      v9 = v43;
                      if ( v43 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x1D5u, 0LL);
                      }
                      else
                      {
                        Shaders = CD3DDevice::GenerateShaders(this);
                        v9 = Shaders;
                        if ( Shaders < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, Shaders, 0x1D7u, 0LL);
                        }
                        else
                        {
                          RenderingResources = CDrawListBatchManager::CreateRenderingResources((CD3DDevice *)((char *)this + 24));
                          v9 = RenderingResources;
                          if ( RenderingResources < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, RenderingResources, 0x1D9u, 0LL);
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
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v53);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v54);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v50);
  return v9;
}
