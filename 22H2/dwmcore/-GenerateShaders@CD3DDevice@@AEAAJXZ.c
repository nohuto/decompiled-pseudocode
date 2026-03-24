/*
 * XREFs of ?GenerateShaders@CD3DDevice@@AEAAJXZ @ 0x180045A2C
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x18002AC38 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18002DA1C (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x1800451BC (-GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z.c)
 *     ?Add@?$CMap@IV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@V?$CMapEqualHelper@IV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@@@@@QEAAHAEBIAEBV?$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180045F60 (-Add@-$CMap@IV-$com_ptr_t@UID3D11VertexShader@@Uerr_returncode_policy@wil@@@wil@@V-$CMapEqualHel.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBAIXZ @ 0x180046380 (-ResolveKey@VertexShaderDesc@@QEBAIXZ.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1800510A0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180094D90 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C915C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB254 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800D50D0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F400B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180152674 (McTemplateU0q_EventWriteTransfer.c)
 */

__int64 __fastcall CD3DDevice::GenerateShaders(CD3DDevice *this)
{
  unsigned __int8 v2; // r12
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned int i; // edi
  int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  unsigned int v13; // ecx
  unsigned int v14; // r15d
  unsigned __int64 v15; // r10
  signed int v16; // eax
  unsigned int v17; // r14d
  __int64 v18; // r13
  char v19; // cl
  unsigned int v20; // eax
  __int128 v21; // xmm0
  void *v22; // r12
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 *v25; // rdi
  __int64 *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64 *, _QWORD, _QWORD, _QWORD, struct ID3D11PixelShader *, char *); // r12
  __int64 v30; // rdi
  __int64 *v31; // r14
  char *v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 (__fastcall *v35)(__int64 *, char *, char *); // r15
  __int64 v36; // rdi
  __int64 *v37; // r14
  char *v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 (__fastcall *v41)(__int64 *, struct HINSTANCE__ *, char *); // r15
  unsigned int v42; // edi
  unsigned int v43; // r14d
  __int64 v44; // r15
  __int64 (__fastcall *v45)(__int64, char *, char *); // r12
  char *v46; // rbx
  __int64 v47; // rcx
  char *D3D11DepthStencilDesc; // rax
  unsigned int v49; // ecx
  _QWORD *v50; // rdi
  CMILPoolResource *v52; // rcx
  unsigned int v53; // [rsp+28h] [rbp-E0h]
  bool v54; // [rsp+48h] [rbp-C0h]
  unsigned int v55[4]; // [rsp+58h] [rbp-B0h] BYREF
  struct ID3D11PixelShader *v56; // [rsp+68h] [rbp-A0h] BYREF
  int v57; // [rsp+70h] [rbp-98h]
  __int128 v58; // [rsp+78h] [rbp-90h] BYREF
  int v59; // [rsp+88h] [rbp-80h]
  const char *v60; // [rsp+90h] [rbp-78h]
  int v61; // [rsp+98h] [rbp-70h]
  int v62; // [rsp+A0h] [rbp-68h]
  int v63; // [rsp+A4h] [rbp-64h]
  __int128 v64; // [rsp+A8h] [rbp-60h]
  void *v65[2]; // [rsp+B8h] [rbp-50h]
  _BYTE v66[416]; // [rsp+C8h] [rbp-40h] BYREF

  v57 = *((_DWORD *)this + 156);
  v2 = v57 >= 37632;
  v3 = 0LL;
  v54 = v57 >= 37632;
  v4 = 0;
  v55[0] = 0;
  do
  {
    if ( ((v4 & 0x10) == 0 || *((_DWORD *)this + 243)) && v2 >= (unsigned __int8)((v4 & 4) != 0) )
    {
      v64 = *((_OWORD *)&unk_180285040 + v4);
      v5 = v64;
      if ( (__int64)v64 > 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0q_EventWriteTransfer(v3, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
        v6 = *((_QWORD *)this + 74);
        v56 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, struct ID3D11PixelShader **))(*(_QWORD *)v6 + 96LL))(
               v6,
               *((_QWORD *)&v64 + 1),
               v5,
               0LL,
               &v56);
        v9 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x202u, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v56);
          return v9;
        }
        CMap<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>,CMapEqualHelper<unsigned int,wil::com_ptr_t<ID3D11VertexShader,wil::err_returncode_policy>>>::Add(
          (char *)this + 1440,
          v55,
          &v56);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0q_EventWriteTransfer(v10, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v56);
        LODWORD(v3) = v55[0];
      }
    }
    v3 = (unsigned int)(v3 + 1);
    v55[0] = v3;
    v4 = v3;
  }
  while ( (unsigned int)v3 < 0x20 );
  for ( i = 0; i < 4; ++i )
  {
    v62 = -1;
    *((_QWORD *)&v58 + 1) = "NoOp";
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v60 = "NoOp";
    *(_QWORD *)&v58 = i;
    CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDevice::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                     this,
                                                     (const struct CommonRenderingShaderDesc *)&v58,
                                                     0,
                                                     v55,
                                                     &v56);
    v9 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v53 = 532;
      goto LABEL_65;
    }
    if ( (v58 & 1) != 0 )
    {
      LODWORD(v58) = v58 | 4;
      CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDevice::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                       this,
                                                       (const struct CommonRenderingShaderDesc *)&v58,
                                                       0,
                                                       v55,
                                                       &v56);
      v9 = CommonOrCubeMapRenderingShadersNoRefInternal;
      if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
      {
        v53 = 540;
LABEL_65:
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, v53, 0LL);
        return v9;
      }
    }
  }
  v14 = 0;
  v15 = 1LL;
  v16 = 0;
  while ( 2 )
  {
    v17 = 0;
    v18 = v16;
    do
    {
      *(_QWORD *)v55 = 0LL;
      v19 = 0;
      BYTE2(v55[0]) = v15;
      if ( v18 - 2 <= v15 )
        v19 = v15;
      LOBYTE(v55[0]) = v19;
      v55[1] = ((v18 - 1) & 0xFFFFFFFFFFFFFFFDuLL) != 0 ? 2 : 4;
      HIBYTE(v55[0]) = v17 != 0;
      v20 = VertexShaderDesc::ResolveKey((VertexShaderDesc *)v55);
      if ( v2 >= (unsigned __int8)(v15 & (v20 >> 2)) )
      {
        v21 = *((_OWORD *)&unk_180285040 + v20);
        v56 = (struct ID3D11PixelShader *)*((_QWORD *)&unk_180285040 + 2 * v20);
        v58 = v21;
        if ( v56 )
        {
          *(_OWORD *)v55 = *((_OWORD *)&unk_1803451D0 + v18);
          *(_OWORD *)v65 = *((_OWORD *)&unk_180345210 + (int)v17);
          v22 = v65[0];
          if ( v65[0] )
          {
            v23 = *(_QWORD *)v55;
            v24 = 32LL * *(_QWORD *)v55;
            memcpy_0(v66, *(const void **)&v55[2], 32LL * *(_QWORD *)v55);
            memcpy_0(&v66[v24], v65[1], 32LL * (_QWORD)v22);
            if ( (__int64)v22 + v23 < 0 )
            {
              ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
              __debugbreak();
            }
            *(_QWORD *)&v64 = (char *)v22 + v23;
            *((_QWORD *)&v64 + 1) = v66;
            *(_OWORD *)v55 = v64;
          }
          v25 = (__int64 *)*((_QWORD *)this + 74);
          v26 = (__int64 *)((char *)this + 32 * v17 + 8 * v14 + 1520);
          v27 = *v26;
          v28 = *v25;
          *v26 = 0LL;
          v29 = *(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, struct ID3D11PixelShader *, char *))(v28 + 88);
          if ( v27 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          CommonOrCubeMapRenderingShadersNoRefInternal = v29(
                                                           v25,
                                                           *(_QWORD *)&v55[2],
                                                           v55[0],
                                                           *((_QWORD *)&v58 + 1),
                                                           v56,
                                                           (char *)this + 32 * v17 + 8 * v14 + 1520);
          v9 = CommonOrCubeMapRenderingShadersNoRefInternal;
          if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
          {
            v53 = 586;
            goto LABEL_65;
          }
          v2 = v54;
          v15 = 1LL;
        }
      }
      v17 += v15;
    }
    while ( v17 < 2 );
    v16 = ++v14;
    if ( v14 < 4 )
      continue;
    break;
  }
  v30 = 0LL;
  do
  {
    v31 = (__int64 *)*((_QWORD *)this + 74);
    v32 = (char *)this + 8 * v30;
    v33 = *((_QWORD *)v32 + 202);
    v34 = *v31;
    *((_QWORD *)v32 + 202) = 0LL;
    v35 = *(__int64 (__fastcall **)(__int64 *, char *, char *))(v34 + 160);
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    CommonOrCubeMapRenderingShadersNoRefInternal = v35(v31, &byte_1802EDB60[264 * (int)v30], v32 + 1616);
    v9 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v53 = 595;
      goto LABEL_65;
    }
    v30 = (unsigned int)(v30 + 1);
  }
  while ( (unsigned int)v30 < 0x18 );
  v36 = 0LL;
  do
  {
    v37 = (__int64 *)*((_QWORD *)this + 74);
    v38 = (char *)this + 8 * v36;
    v39 = *((_QWORD *)v38 + 274);
    v40 = *v37;
    *((_QWORD *)v38 + 274) = 0LL;
    v41 = *(__int64 (__fastcall **)(__int64 *, struct HINSTANCE__ *, char *))(v40 + 176);
    if ( v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    CommonOrCubeMapRenderingShadersNoRefInternal = v41(v37, &_ImageBase + 10 * (int)v36 + 795078, v38 + 2192);
    v9 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v53 = 601;
      goto LABEL_65;
    }
    v36 = (unsigned int)(v36 + 1);
  }
  while ( !(_DWORD)v36 );
  v42 = 0;
  v43 = 0;
  do
  {
    v44 = *((_QWORD *)this + 74);
    v45 = *(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v44 + 168LL);
    v46 = (char *)this + 8 * v43;
    v47 = *((_QWORD *)v46 + 275);
    *((_QWORD *)v46 + 275) = 0LL;
    if ( v47 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    D3D11DepthStencilDesc = DepthStencilMode::GetD3D11DepthStencilDesc(v42);
    CommonOrCubeMapRenderingShadersNoRefInternal = v45(v44, D3D11DepthStencilDesc, v46 + 2200);
    v9 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      v53 = 607;
      goto LABEL_65;
    }
    v42 = v43 + 1;
    v43 = v42;
  }
  while ( v42 < 4 );
  if ( v57 >= 37632 )
  {
    v58 = (unsigned __int64)this + 1512;
    LOBYTE(v59) = 1;
    v9 = CSurfaceShaderComposer::Create(this, (struct CSurfaceShaderComposer **)&v58 + 1);
    if ( (_BYTE)v59 )
    {
      v49 = v58;
      v50 = *(_QWORD **)v58;
      *(_QWORD *)v58 = *((_QWORD *)&v58 + 1);
      if ( v50 )
      {
        v52 = (CMILPoolResource *)v50[13];
        if ( v52 )
        {
          v50[13] = 0LL;
          CMILPoolResource::Release(v52);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v50 + 12);
        Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(v50 + 11);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v50 + 10);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v50 + 9);
        `vector destructor iterator'(
          v50,
          8uLL,
          9uLL,
          Microsoft::WRL::ComPtr<CManipulationManager>::~ComPtr<CManipulationManager>);
        operator delete(v50);
      }
    }
    if ( (v9 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v9, 0x266u, 0LL);
  }
  return v9;
}
