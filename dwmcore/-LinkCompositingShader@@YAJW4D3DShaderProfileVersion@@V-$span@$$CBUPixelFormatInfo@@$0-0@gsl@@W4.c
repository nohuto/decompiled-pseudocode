/*
 * XREFs of ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180207A88
 * Callers:
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802B68E0 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180026AFC (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180027824 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800278AC (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     AppendColorConversion @ 0x180027CB8 (AppendColorConversion.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x18002827C (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x18002906C (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800293A8 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18002A318 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x18002C1B4 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1802025A4 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall LinkCompositingShader(
        char a1,
        unsigned __int64 *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        struct ID3D10Blob **a4)
{
  unsigned __int64 *v5; // r15
  unsigned __int64 v6; // r13
  gsl::details *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int FragmentsModuleNoRef; // eax
  __int64 v12; // rcx
  struct ID3D11Module *v13; // r14
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int16 v23; // si
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int appended; // eax
  gsl::details *v29; // rcx
  unsigned __int64 v30; // r13
  int ColorChannelDepth; // eax
  char v32; // bl
  int v33; // r8d
  int v34; // eax
  __int64 v35; // rcx
  enum DXGI_COLOR_SPACE_TYPE v36; // r15d
  int ConversionShader; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  bool v52[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v53; // [rsp+34h] [rbp-CCh] BYREF
  enum DXGI_COLOR_SPACE_TYPE v54; // [rsp+38h] [rbp-C8h]
  __int64 v55[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v56; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11Module *v57[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v58; // [rsp+70h] [rbp-90h] BYREF
  __int128 v59; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v60; // [rsp+90h] [rbp-70h]
  struct ID3D10Blob **v61; // [rsp+98h] [rbp-68h]
  __int128 v62; // [rsp+A0h] [rbp-60h]
  struct ID3D11Linker *ppLinker[12]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v64[13]; // [rsp+110h] [rbp+10h] BYREF
  char v65; // [rsp+11Dh] [rbp+1Dh]
  char v66; // [rsp+11Eh] [rbp+1Eh]

  v61 = a4;
  v54 = a3;
  v55[0] = 0LL;
  v5 = a2;
  v60 = a2;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v6 = *v5;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v56, *v5 + 1);
  *((_QWORD *)&v56 + 1) = &unk_1802D4DD0;
  if ( (_QWORD)v56 == -1LL )
  {
    gsl::details::terminate(v7);
    __debugbreak();
  }
  v59 = v56;
  v8 = CShaderLinkingGraphBuilder::Initialize(ppLinker, a1, (__int64 *)&v59);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x5ADu, 0LL);
  }
  else
  {
    FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, v57);
    v10 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, FragmentsModuleNoRef, 0x5B0u, 0LL);
    }
    else
    {
      v13 = v57[0];
      CreateInstance = v57[0]->lpVtbl->CreateInstance;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v55);
      v15 = ((__int64 (__fastcall *)(struct ID3D11Module *, const char *, __int64 *))CreateInstance)(
              v13,
              word_180338FC0,
              v55);
      v10 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x5B1u, 0LL);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v55[0] + 24LL))(v55[0], 2LL, 2LL);
        v10 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x5B7u, 0LL);
        }
        else
        {
          v19 = ((__int64 (__fastcall *)(struct ID3D11Linker *, __int64))ppLinker[0]->lpVtbl->UseLibrary)(
                  ppLinker[0],
                  v55[0]);
          v10 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v19, 0x5B9u, 0LL);
          }
          else
          {
            v22 = 0;
            if ( (_DWORD)v6 )
            {
              while ( 1 )
              {
                v23 = v22 | 0x100;
                v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v55[0] + 40LL))(
                        v55[0],
                        v22,
                        v22,
                        1LL);
                v10 = v24;
                if ( v24 < 0 )
                  break;
                v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v55[0] + 56LL))(
                        v55[0],
                        v22,
                        v22,
                        1LL);
                v10 = v26;
                if ( v26 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x5C1u, 0LL);
                  goto LABEL_45;
                }
                v65 = v22 + 48;
                *((_QWORD *)&v62 + 1) = &v53;
                qmemcpy(v64, "SampleTexture", sizeof(v64));
                *(_QWORD *)&v62 = 1LL;
                v53 = v22 | 0x100;
                v66 = 0;
                v58 = v62;
                appended = CShaderLinkingGraphBuilder::AppendNode(
                             (__int64)ppLinker,
                             v23,
                             (__int64)word_180338FC0,
                             (__int64)v13,
                             (__int64)v64,
                             &v58);
                v10 = appended;
                if ( appended < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v29, 0LL, 0, appended, 0x5C7u, 0LL);
                  goto LABEL_45;
                }
                if ( (int)v22 >= v6 )
                {
                  gsl::details::terminate(v29);
                  __debugbreak();
                }
                v30 = v5[1];
                DWORD2(v56) = 0;
                *(_QWORD *)&v56 = "NoOp";
                ColorChannelDepth = GetColorChannelDepth(*(_DWORD *)(v30 + 12LL * (int)v22));
                v32 = *(_DWORD *)(v30 + 12LL * (int)v22 + 4) == 3;
                if ( (int)ColorConversion::GetConversionShader(
                            (enum DXGI_COLOR_SPACE_TYPE)*(_DWORD *)(v30 + 12LL * (int)v22 + 8),
                            v32,
                            ColorChannelDepth,
                            v54,
                            (struct ColorConversion::Shader *)&v56,
                            v52) < 0 )
                {
                  v36 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
                  if ( v54 != DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
                    v36 = v54;
                  ConversionShader = ColorConversion::GetConversionShader(
                                       (enum DXGI_COLOR_SPACE_TYPE)*(_DWORD *)(v30 + 12LL * (int)v22 + 8),
                                       v32,
                                       v33,
                                       v36,
                                       (struct ColorConversion::Shader *)&v56,
                                       v52);
                  v10 = ConversionShader;
                  if ( ConversionShader < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, ConversionShader, 0x5DDu, 0LL);
                    goto LABEL_45;
                  }
                  v58 = v56;
                  v39 = AppendColorConversion((int)ppLinker, (int)v13, v23, (__int64)&v58, v52[0]);
                  v10 = v39;
                  if ( v39 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x5DEu, 0LL);
                    goto LABEL_45;
                  }
                  v41 = ColorConversion::GetConversionShader(
                          v36,
                          *(_DWORD *)(v30 + 12LL * (int)v22 + 4) == 3,
                          v36 != DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 ? 16 : 8,
                          v54,
                          (struct ColorConversion::Shader *)&v56,
                          v52);
                  v10 = v41;
                  if ( v41 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x5E4u, 0LL);
                    goto LABEL_45;
                  }
                  v58 = v56;
                  v43 = AppendColorConversion((int)ppLinker, (int)v13, v23, (__int64)&v58, v52[0]);
                  v10 = v43;
                  if ( v43 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x5E5u, 0LL);
                    goto LABEL_45;
                  }
                  v5 = v60;
                }
                else
                {
                  v58 = v56;
                  v34 = AppendColorConversion((int)ppLinker, (int)v13, v23, (__int64)&v58, v52[0]);
                  v10 = v34;
                  if ( v34 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x5D3u, 0LL);
                    goto LABEL_45;
                  }
                }
                if ( v22 )
                {
                  *(_QWORD *)&v59 = 2LL;
                  LOWORD(v57[0]) = 10;
                  *((_QWORD *)&v59 + 1) = v57;
                  WORD1(v57[0]) = v22 | 0x100;
                  v58 = v59;
                  v47 = CShaderLinkingGraphBuilder::AppendNode(
                          (__int64)ppLinker,
                          10,
                          (__int64)word_180338FC0,
                          (__int64)v13,
                          (__int64)"CompositeSourceOver",
                          &v58);
                  v10 = v47;
                  if ( v47 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x5F1u, 0LL);
                    goto LABEL_45;
                  }
                }
                else
                {
                  v45 = CShaderLinkingGraphBuilder::CopyNode((unsigned __int64)ppLinker, 10, v23);
                  v10 = v45;
                  if ( v45 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x5EBu, 0LL);
                    goto LABEL_45;
                  }
                }
                if ( ++v22 >= *(_DWORD *)v5 )
                  goto LABEL_38;
                v6 = *v5;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x5C0u, 0LL);
            }
            else
            {
LABEL_38:
              v49 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v20, v61);
              v10 = v49;
              if ( v49 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x5F5u, 0LL);
            }
          }
        }
      }
    }
  }
LABEL_45:
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v55);
  return v10;
}
