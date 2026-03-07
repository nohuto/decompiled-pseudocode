__int64 __fastcall LinkShader(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, struct ID3D10Blob **a5)
{
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 *v11; // rax
  __int64 *v12; // rbx
  __int64 *v13; // r12
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // r15d
  unsigned int v18; // r12d
  unsigned int v19; // r14d
  bool v20; // al
  __int64 v21; // rdx
  bool v22; // al
  __int64 *v23; // r12
  char v24; // r15
  __int64 *i; // rbx
  _DWORD *v26; // r12
  __int64 ExpectedVertexShaderDesc; // rax
  VertexShaderDesc *v28; // r8
  __int64 v29; // rdx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ebx
  int v33; // eax
  int v34; // edx
  unsigned __int64 v35; // rcx
  __int64 v36; // r14
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  gsl::details *v39; // rcx
  int v40; // eax
  gsl::details *v41; // rcx
  unsigned int v42; // r15d
  __int64 v43; // rsi
  __int64 v44; // r12
  __int64 v45; // r8
  int ShaderBody; // eax
  unsigned int v47; // ecx
  int v48; // eax
  __int64 v49; // r8
  int v50; // eax
  unsigned int v51; // ecx
  int v52; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v53; // rdx
  unsigned int v54; // ecx
  int v55; // eax
  unsigned int v56; // ecx
  int v57; // eax
  unsigned int v58; // ecx
  __int64 v59; // r8
  int v61; // ecx
  unsigned int v62; // eax
  int appended; // eax
  __int64 v64; // rax
  int v65; // eax
  unsigned int v66; // ecx
  int v67; // eax
  unsigned int v68; // ecx
  int v69; // eax
  unsigned int v70; // ecx
  int ConversionShader; // eax
  unsigned int v72; // ecx
  int v73; // eax
  unsigned int v74; // ecx
  int v75; // eax
  unsigned int v76; // ecx
  bool v77; // zf
  char *v78; // rax
  int v79; // eax
  unsigned int v80; // ecx
  __int64 v81; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v82[8]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v83; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v84; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v85; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v86; // [rsp+60h] [rbp-A0h]
  __int64 v87; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v88; // [rsp+70h] [rbp-90h]
  _OWORD *v89; // [rsp+78h] [rbp-88h]
  _QWORD v90[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v91[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v92; // [rsp+A0h] [rbp-60h]
  struct ID3D10Blob **v93; // [rsp+A8h] [rbp-58h]
  struct ID3D11Linker *ppLinker[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v95[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v96; // [rsp+C8h] [rbp-38h]
  __int128 v97; // [rsp+110h] [rbp+10h]
  __int128 v98; // [rsp+120h] [rbp+20h]
  __int128 v99; // [rsp+130h] [rbp+30h]
  __int128 v100; // [rsp+140h] [rbp+40h]
  const char *v101; // [rsp+150h] [rbp+50h] BYREF
  __int128 v102; // [rsp+160h] [rbp+60h]
  __int128 v103; // [rsp+170h] [rbp+70h]
  __int128 v104; // [rsp+180h] [rbp+80h]
  __int128 v105; // [rsp+190h] [rbp+90h] BYREF
  __int128 v106; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v107; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v108; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v109; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v110; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v111; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v112; // [rsp+200h] [rbp+100h] BYREF
  _OWORD v113[2]; // [rsp+210h] [rbp+110h] BYREF
  char v114[16]; // [rsp+230h] [rbp+130h] BYREF
  char v115[16]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v116[2]; // [rsp+250h] [rbp+150h] BYREF
  char v117[16]; // [rsp+260h] [rbp+160h] BYREF
  __int64 *v118; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v119[12]; // [rsp+278h] [rbp+178h] BYREF
  char v120; // [rsp+284h] [rbp+184h]
  char v121; // [rsp+285h] [rbp+185h]

  v89 = a3;
  v93 = a5;
  v116[0] = a4;
  v7 = a2;
  v87 = a2;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v85 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SHADER_LINK_Start,
      v8,
      1LL,
      v114);
  v9 = *a3;
  v90[1] = v113;
  v10 = 0;
  v83 = *(_DWORD *)(a1 + 48);
  v11 = (__int64 *)a3[1];
  memset(v113, 0, sizeof(v113));
  v90[0] = 4LL;
  v12 = v11;
  v13 = &v11[v9];
  v88 = v11;
  v92 = v9;
  v118 = v13;
  if ( v11 != v13 )
  {
    v14 = v83;
    do
    {
      v14 += *(_DWORD *)(*v12 + 48);
      v15 = DiscoverSamplers((_QWORD *)*v12, (__int64)v90);
      if ( v10 <= v15 )
        v10 = v15;
      ++v12;
    }
    while ( v12 != v13 );
    v83 = v14;
    v7 = v87;
  }
  v16 = DiscoverSamplers((_QWORD *)a1, (__int64)v90);
  if ( v10 <= v16 )
    v10 = v16;
  if ( *(_BYTE *)(v7 + 156) && v10 <= 2 )
    v10 = 2;
  v17 = 0;
  v18 = v10;
  v19 = 0;
  do
  {
    gsl::span<SamplerPresenceEntry,-1>::operator[](v90, v19);
    v20 = DoesSamplerRequireConstantBufferData((const struct ShaderLinkingSamplerDesc *)(v7 + 32LL * v19++));
    *(_BYTE *)(v21 + 2) = v20;
    if ( v20 )
    {
      v61 = v17;
      v62 = v19;
      ++v17;
      *(_DWORD *)(v21 + 4) = v61;
      if ( v18 > v19 )
        v62 = v18;
      v18 = v62;
    }
  }
  while ( v19 < 4 );
  v86 = v18;
  v22 = HasWhiteNoise(a1);
  v23 = v118;
  v24 = v22;
  if ( !v22 )
  {
    for ( i = v88; i != v23; ++i )
    {
      if ( HasWhiteNoise(*i) )
      {
        v24 = 1;
        break;
      }
    }
  }
  v26 = v89;
  v105 = *v89;
  ExpectedVertexShaderDesc = GetExpectedVertexShaderDesc(a1, &v105, v7, v10, v24);
  v28 = (VertexShaderDesc *)v116[0];
  *(_QWORD *)v116[0] = ExpectedVertexShaderDesc;
  LOBYTE(v29) = *(_BYTE *)(a1 + 32);
  v30 = InitializeShaderLinkingInput(ppLinker, v29, v28);
  v32 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x50Fu, 0LL);
  }
  else
  {
    v33 = UseFragmentsModuleNoRef((__int64)ppLinker, v83, *(_BYTE *)(v7 + 156), &v87);
    v32 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v33, 0x510u, 0LL);
    }
    else
    {
      v36 = v87;
      if ( v10 <= 2 && !v24 )
        goto LABEL_22;
      *(_QWORD *)&v97 = 3LL;
      WORD2(v118) = 258;
      LODWORD(v118) = 16843008;
      *((_QWORD *)&v97 + 1) = &v118;
      v106 = v97;
      LOWORD(v34) = v24 != 0 ? 12 : 259;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   (unsigned int)ppLinker,
                   v34,
                   (unsigned int)word_180338FC0,
                   v87,
                   (__int64)"DecodeTexcoord3",
                   (__int64)&v106);
      v32 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, appended, 0x51Cu, 0LL);
      }
      else
      {
LABEL_22:
        *(_WORD *)v82 = 1;
        v37 = std::_Fnv1a_append_bytes(v35, v82, 2uLL);
        v38 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Find<enum ShaderLinkingArgument>(
                v95,
                v82,
                v37);
        if ( v38 != v96 && *(_DWORD *)(v7 + 144) > 1u )
        {
          *(_QWORD *)&v98 = 1LL;
          *((_QWORD *)&v98 + 1) = &v84;
          v64 = *(_QWORD *)(v7 + 136);
          v107 = v98;
          v84 = 1;
          v65 = CShaderLinkingGraphBuilder::AppendNode(
                  (unsigned int)ppLinker,
                  1,
                  (unsigned int)word_180338FC0,
                  v36,
                  v64,
                  (__int64)&v107);
          v32 = v65;
          if ( v65 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0x528u, 0LL);
            goto LABEL_43;
          }
        }
        LOBYTE(v81) = 0;
        gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v91, v86);
        v91[1] = v113;
        if ( v91[0] == -1LL )
        {
          gsl::details::terminate(v39);
          __debugbreak();
        }
        v40 = PrepareSamplers((int)ppLinker, v7);
        v32 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v41, 0LL, 0, v40, 0x535u, 0LL);
          goto LABEL_43;
        }
        v42 = 0;
        v43 = 0LL;
        if ( *v26 )
        {
          while ( 1 )
          {
            if ( (unsigned int)v43 >= v92 )
            {
              gsl::details::terminate(v41);
              JUMPOUT(0x180028AE5LL);
            }
            _mm_lfence();
            v44 = v88[v43];
            v120 = v43 + 48;
            qmemcpy(v119, "BodyFragment", sizeof(v119));
            v121 = 0;
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v85);
            ShaderBody = LoadShaderBody((__int64)ppLinker, v44, v45, v42, (__int64)v119, (struct ID3D11Module **)&v85);
            v32 = ShaderBody;
            if ( ShaderBody < 0 )
              break;
            v36 = v87;
            v48 = AppendShaderBody(
                    ppLinker,
                    (unsigned __int16)v43 | 0x500u,
                    (__int128 *)v44,
                    v7,
                    (__int64)v119,
                    v85,
                    v87,
                    &v81);
            v32 = v48;
            if ( v48 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v41, 0LL, 0, v48, 0x541u, 0LL);
              goto LABEL_43;
            }
            v42 += *(_DWORD *)(v44 + 48);
            v43 = (unsigned int)(v43 + 1);
            if ( (unsigned int)v43 >= *(_DWORD *)v89 )
              goto LABEL_31;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, ShaderBody, 0x540u, 0LL);
        }
        else
        {
LABEL_31:
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v85);
          v50 = LoadShaderBody((__int64)ppLinker, a1, v49, v42, (__int64)word_180338FC0, (struct ID3D11Module **)&v85);
          v32 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x547u, 0LL);
          }
          else
          {
            v52 = AppendShaderBody(ppLinker, 0xAu, (__int128 *)a1, v7, (__int64)word_180338FC0, v85, v36, &v81);
            v32 = v52;
            if ( v52 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v52, 0x548u, 0LL);
            }
            else
            {
              if ( *(_BYTE *)(v7 + 153) )
              {
                *(_QWORD *)&v104 = 5LL;
                *((_QWORD *)&v104 + 1) = &unk_180354350;
                v108 = v104;
                v67 = CShaderLinkingGraphBuilder::AppendNode(
                        (unsigned int)ppLinker,
                        10,
                        (unsigned int)word_180338FC0,
                        v36,
                        (__int64)"ApplyPSClipPlanes",
                        (__int64)&v108);
                v32 = v67;
                if ( v67 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x559u, 0LL);
                  goto LABEL_43;
                }
              }
              if ( *(_BYTE *)(v7 + 155) )
              {
                *(_QWORD *)&v99 = 2LL;
                *((_QWORD *)&v99 + 1) = "\n";
                v109 = v99;
                v55 = CShaderLinkingGraphBuilder::AppendNode(
                        (unsigned int)ppLinker,
                        10,
                        (unsigned int)word_180338FC0,
                        v36,
                        (__int64)"AlphaMultiply",
                        (__int64)&v109);
                v32 = v55;
                if ( v55 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x567u, 0LL);
                  goto LABEL_43;
                }
              }
              if ( !(_BYTE)v81 && *(_DWORD *)(v7 + 128) != -1 )
              {
                v69 = AppendLights(0xAu, ppLinker, (_DWORD *)(v7 + 128), -1);
                v32 = v69;
                if ( v69 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x56Eu, 0LL);
                  goto LABEL_43;
                }
              }
              if ( *(_BYTE *)(v7 + 158) && *(_BYTE *)(v7 + 157) )
              {
                v101 = "NoOp";
                ConversionShader = ColorConversion::GetConversionShader(
                                     DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
                                     0,
                                     8u,
                                     DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709,
                                     (struct ColorConversion::Shader *)&v101,
                                     0LL);
                v32 = ConversionShader;
                if ( ConversionShader < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, ConversionShader, 0x57Bu, 0LL);
                  goto LABEL_43;
                }
                *(_QWORD *)&v100 = 1LL;
                *((_QWORD *)&v100 + 1) = "\n";
                v110 = v100;
                v73 = CShaderLinkingGraphBuilder::AppendNode(
                        (unsigned int)ppLinker,
                        10,
                        (unsigned int)word_180338FC0,
                        v36,
                        (__int64)v101,
                        (__int64)&v110);
                v32 = v73;
                if ( v73 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x57Cu, 0LL);
                  goto LABEL_43;
                }
              }
              if ( *(_BYTE *)(v7 + 159)
                && (*(_QWORD *)&v102 = 1LL,
                    *((_QWORD *)&v102 + 1) = "\n",
                    v111 = v102,
                    v75 = CShaderLinkingGraphBuilder::AppendNode(
                            (unsigned int)ppLinker,
                            10,
                            (unsigned int)word_180338FC0,
                            v36,
                            (__int64)"BoostSDRLuminance",
                            (__int64)&v111),
                    v32 = v75,
                    v75 < 0) )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, v75, 0x583u, 0LL);
              }
              else
              {
                if ( !*(_BYTE *)(v7 + 152) )
                  goto LABEL_41;
                v77 = *(_BYTE *)(v7 + 158) == 0;
                *((_QWORD *)&v103 + 1) = &v83;
                v78 = (char *)v116;
                *(_QWORD *)&v103 = 1LL;
                if ( !v77 )
                  v78 = v117;
                strcpy((char *)v116, "MinBlend");
                strcpy(v117, "MinBlend_HDR");
                LOWORD(v83) = 10;
                v112 = v103;
                v79 = CShaderLinkingGraphBuilder::AppendNode(
                        (unsigned int)ppLinker,
                        10,
                        (unsigned int)word_180338FC0,
                        v36,
                        (__int64)v78,
                        (__int64)&v112);
                v32 = v79;
                if ( v79 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, v79, 0x58Du, 0LL);
                }
                else
                {
LABEL_41:
                  v57 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v53, v93);
                  v32 = v57;
                  if ( v57 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x590u, 0LL);
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_43:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SHADER_LINK_Stop,
      v59,
      1LL,
      v115);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v85);
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  return v32;
}
