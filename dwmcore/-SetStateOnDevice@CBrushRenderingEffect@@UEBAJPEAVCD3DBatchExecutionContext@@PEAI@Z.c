/*
 * XREFs of ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18002B000
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x180017AE0 (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x18002C1B4 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x18002C1D8 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18002CE6C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@Q.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x18002CF54 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1801008B8 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x180106360 (--0ShaderLinkingSamplerDesc@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18010EE80 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18010EEE8 (_Init_thread_header.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     memcmp_0 @ 0x1801177DC (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ @ 0x180202524 (-SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ.c)
 */

__int64 __fastcall CBrushRenderingEffect::SetStateOnDevice(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  __int64 v3; // r15
  CD3DBatchExecutionContext *v4; // r14
  __int64 v5; // r13
  __int64 v7; // rax
  struct ID3D11PixelShader *v8; // rbx
  ShaderLinkingSamplerDesc *v9; // rdi
  __int64 v10; // rsi
  bool v11; // zf
  __int64 v12; // rax
  int *v13; // rax
  __int64 v14; // r8
  float v15; // xmm7_4
  __int64 v16; // rax
  unsigned int v17; // edi
  int v18; // esi
  __int64 v19; // r13
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 (__fastcall ***v22)(_QWORD, char *); // rcx
  __int64 v23; // rax
  __int64 v24; // xmm0_8
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rcx
  char *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdi
  const char *v31; // rax
  char v32; // r15
  __int64 v33; // rdx
  unsigned int v34; // ecx
  unsigned int ColorChannelDepth; // r14d
  __int64 v36; // r8
  __int64 v37; // rcx
  int v38; // edi
  __int64 v39; // rax
  __int128 v40; // xmm0
  __int64 v41; // rdi
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // rcx
  unsigned int *v45; // rcx
  float v46; // xmm1_4
  __int64 v47; // r8
  __int16 v48; // ax
  char v49; // dl
  float *v50; // r14
  __int64 v51; // r15
  __int64 v52; // rcx
  float v53; // xmm0_4
  char v54; // r8
  char v55; // al
  bool v56; // al
  __int64 v57; // rdi
  int Shaders; // eax
  unsigned int v59; // ecx
  int v60; // ecx
  unsigned int v61; // r14d
  void (__fastcall *v62)(__int64, __int64, _QWORD, _QWORD); // rsi
  __int64 v63; // r8
  __int64 v64; // rdx
  _DWORD *v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rbx
  CRenderingTechnique *v68; // r15
  struct ID3D11PixelShaderVtbl *lpVtbl; // rcx
  int v70; // eax
  unsigned int v71; // ecx
  int v72; // esi
  int updated; // eax
  unsigned int v74; // ecx
  struct ID3D11PixelShaderVtbl *v75; // rcx
  CD3DBatchExecutionContext *v76; // rsi
  __int64 v78; // rdx
  __int64 (__fastcall ***v79)(_QWORD, char *); // rcx
  __int64 v80; // rax
  __int64 (__fastcall ***v81)(_QWORD, char *); // rcx
  int v82; // eax
  int v83; // eax
  int v84; // eax
  __int64 v85; // r8
  __int64 v86; // rcx
  int v87; // eax
  __int64 *v88; // rcx
  __int64 v89; // rax
  int v90; // eax
  unsigned int v91; // ecx
  int v92; // r14d
  unsigned int v93; // ecx
  unsigned int v94; // ecx
  unsigned int v95[2]; // [rsp+38h] [rbp-D0h] BYREF
  struct ID3D11PixelShaderVtbl *v96; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v97; // [rsp+48h] [rbp-C0h]
  __int16 v98; // [rsp+58h] [rbp-B0h]
  __int16 v99; // [rsp+68h] [rbp-A0h]
  struct ID3D11PixelShader *v100; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v101; // [rsp+80h] [rbp-88h] BYREF
  __int16 v102; // [rsp+88h] [rbp-80h]
  __int64 v103; // [rsp+98h] [rbp-70h]
  __int64 v104; // [rsp+A0h] [rbp-68h]
  CD3DBatchExecutionContext *v105; // [rsp+A8h] [rbp-60h]
  __int128 v106; // [rsp+B0h] [rbp-58h]
  __int64 v107; // [rsp+C0h] [rbp-48h]
  unsigned int *v108; // [rsp+C8h] [rbp-40h]
  DXGI_FORMAT v109[2]; // [rsp+D0h] [rbp-38h]
  int v110; // [rsp+D8h] [rbp-30h]
  _DWORD v111[3]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v112; // [rsp+ECh] [rbp-1Ch]
  int v113; // [rsp+F4h] [rbp-14h]
  int v114; // [rsp+F8h] [rbp-10h]
  __int128 v115; // [rsp+FCh] [rbp-Ch]
  int v116; // [rsp+10Ch] [rbp+4h]
  int v117; // [rsp+110h] [rbp+8h]
  _OWORD v118[8]; // [rsp+118h] [rbp+10h] BYREF
  int v119; // [rsp+198h] [rbp+90h]
  const char *v120; // [rsp+1A0h] [rbp+98h]
  int v121; // [rsp+1A8h] [rbp+A0h]
  __int128 v122; // [rsp+1B0h] [rbp+A8h]
  char v123[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  char v124[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v125[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  _QWORD v126[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD v127[4]; // [rsp+218h] [rbp+110h] BYREF

  v3 = *((_QWORD *)a2 + 1);
  v4 = a2;
  v5 = *((_QWORD *)a2 + 2);
  v7 = *((_QWORD *)a2 + 4);
  v108 = a3;
  v8 = 0LL;
  v105 = a2;
  v104 = v3;
  v107 = v5;
  v103 = v7;
  v100 = 0LL;
  memset_0(v118, 0, sizeof(v118));
  v9 = (ShaderLinkingSamplerDesc *)v118;
  v10 = 4LL;
  do
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc(v9);
    v9 = (ShaderLinkingSamplerDesc *)((char *)v9 + 32);
    --v10;
  }
  while ( v10 );
  v119 = -1;
  v11 = *((_DWORD *)v4 + 30) == 1;
  v120 = "NoOp";
  v121 = 0;
  v122 = 0LL;
  if ( v11 )
    WORD3(v122) = 257;
  else
    WORD3(v122) = 0;
  v11 = *((_DWORD *)v4 + 16) == 22;
  BYTE5(v122) = 1;
  LOBYTE(v122) = v11;
  v12 = *((_QWORD *)v4 + 6);
  if ( v12 )
  {
    v13 = (int *)(v12 + 16);
  }
  else
  {
    if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                       + (unsigned int)tls_index)
                                                                     + 4LL) )
    {
      Init_thread_header(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA == -1 )
      {
        `CLightsMask::NoLights'::`2'::noLights = -1;
        Init_thread_footer(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      }
    }
    v13 = &`CLightsMask::NoLights'::`2'::noLights;
  }
  v14 = v103;
  v15 = *(float *)&FLOAT_1_0;
  v119 = *v13;
  LOWORD(v95[1]) = 257;
  BYTE1(v122) = *(_BYTE *)(v103 + 368);
  v16 = *((_QWORD *)this + 2);
  BYTE2(v95[1]) = 1;
  v95[0] = 0;
  v17 = *(_DWORD *)(v16 + 76);
  LODWORD(v96) = v17;
  if ( v17 )
  {
    v18 = v110;
    v19 = 0LL;
    while ( 1 )
    {
      v20 = (__int64 *)*((_QWORD *)this + 3 * v19 + 4);
      if ( !v20 )
      {
        v126[v19] = 0LL;
        v41 = 2 * v19;
        v45 = &v95[1];
        v127[v19] = 0LL;
        BYTE7(v118[2 * v19 + 1]) = 1;
        goto LABEL_39;
      }
      v21 = *v20;
      v101 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, __int64 **))(v21 + 48))(v20, *((_QWORD *)v4 + 14), &v101) < 0 )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v101);
        v26 = 0LL;
      }
      else
      {
        v22 = (__int64 (__fastcall ***)(_QWORD, char *))((char *)v101 + *(int *)(v101[1] + 12) + 8);
        v23 = (**v22)(v22, v123);
        v24 = *(_QWORD *)v23;
        v18 = *(_DWORD *)(v23 + 8);
        v25 = *v101;
        *(_QWORD *)v109 = v24;
        v26 = (*(__int64 (__fastcall **)(__int64 *))(v25 + 8))(v101);
        if ( v101 )
        {
          v27 = (__int64)v101 + *(int *)(v101[1] + 4) + 8;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
      v28 = (char *)this + 2 * v19;
      v126[v19] = v26;
      v97 = *(_WORD *)&v28[v19 + 120];
      v29 = (unsigned __int8)v28[v19 + 122] + 4 * (HIBYTE(v97) + 4 * (unsigned int)(unsigned __int8)v97);
      v30 = v3 + 8 * v29;
      if ( !*(_QWORD *)(v30 + 1832) )
      {
        v102 = *(_WORD *)&v28[v19 + 120];
        if ( HIBYTE(v102) && v28[v19 + 122] )
          v82 = 37120;
        else
          v82 = 37632;
        if ( *(_DWORD *)(v3 + 584) < v82 )
        {
          v92 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, -2147024809, 0xC24u, 0LL);
          goto LABEL_142;
        }
        v98 = *(_WORD *)&v28[v19 + 120];
        if ( (_BYTE)v98 )
          v83 = 21;
        else
          v83 = 0;
        v111[0] = v83;
        v84 = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v98));
        v86 = *(unsigned __int8 *)(v85 + v19 + 122);
        v111[1] = v84;
        v87 = ExtendMode::ToD3D11TextureAddressMode(v86);
        v88 = *(__int64 **)(v3 + 552);
        v111[2] = v87;
        v112 = 3LL;
        v113 = 1;
        v114 = 8;
        v115 = 0LL;
        v116 = 0;
        v117 = 2139095039;
        v89 = *v88;
        *(_QWORD *)(v30 + 1832) = 0LL;
        v90 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64))(v89 + 184))(v88, v111, v30 + 1832);
        v92 = v90;
        if ( v90 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0, v90, 0xC29u, 0LL);
LABEL_142:
          v38 = v92;
          MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, v92, 0x6Bu, 0LL);
          goto LABEL_81;
        }
      }
      v127[v19] = *(_QWORD *)(v30 + 1832);
      DWORD2(v106) = 0;
      *(_QWORD *)&v106 = "NoOp";
      v31 = (const char *)&unk_180338DC0;
      while ( *(_DWORD *)v31 != v18 )
      {
        v31 += 4;
        if ( v31 == "NoOp" )
          goto LABEL_20;
      }
      if ( v31 == "NoOp" )
      {
LABEL_20:
        v32 = 0;
        goto LABEL_21;
      }
      v32 = 1;
LABEL_21:
      ColorChannelDepth = GetColorChannelDepth(v109[0]);
      v36 = 3 * (v19 + 1);
      if ( *((_BYTE *)this + 24 * v19 + 40) )
        break;
      v37 = *((_QWORD *)this + 3 * v19 + 3);
      if ( v37 )
      {
        v33 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
        v36 = 3 * (v19 + 1);
      }
      else
      {
        v78 = *((_QWORD *)this + 3 * v19 + 4);
        v79 = (__int64 (__fastcall ***)(_QWORD, char *))(v78 + 8 + *(int *)(*(_QWORD *)(v78 + 8) + 8LL));
        v80 = (**v79)(v79, v124);
        v36 = 3 * (v19 + 1);
        if ( *(_DWORD *)(v80 + 4) == 3 )
          break;
        LOBYTE(v33) = 0;
      }
LABEL_24:
      v38 = -2003292288;
      if ( v18 )
      {
        switch ( v18 )
        {
          case 1:
            v39 = 2LL;
            goto LABEL_26;
          case 2:
            if ( ColorChannelDepth == 8 )
            {
              v39 = 20LL;
              goto LABEL_26;
            }
            if ( ColorChannelDepth != 10 )
              goto LABEL_139;
LABEL_130:
            v39 = 28LL;
            goto LABEL_26;
          case 3:
            goto LABEL_130;
          case 12:
            v39 = 16LL;
            goto LABEL_26;
          case 14:
            v39 = 40LL;
            goto LABEL_26;
          case 17:
            v39 = 12LL;
            goto LABEL_26;
          case 20:
            if ( ColorChannelDepth == 8 )
            {
              v39 = 24LL;
              goto LABEL_26;
            }
            if ( ColorChannelDepth == 10 )
            {
              v39 = 32LL;
              goto LABEL_26;
            }
LABEL_139:
            v40 = v106;
            break;
          case 21:
            v39 = 36LL;
            goto LABEL_26;
          default:
            goto LABEL_139;
        }
      }
      else
      {
        v39 = 0LL;
LABEL_26:
        v38 = 0;
        if ( (_BYTE)v33 )
          v39 = (unsigned int)(v39 + 1);
        v40 = *((_OWORD *)&ColorConversion::g_rgShaders + v39);
        v106 = v40;
      }
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v38, 0x76u, 0LL);
        goto LABEL_81;
      }
      v41 = 2 * v19;
      if ( DWORD2(v106) > 1 )
        v118[2 * v19] = v40;
      BYTE9(v118[2 * v19 + 1]) = v32;
      if ( *((_BYTE *)this + 8 * v36 + 16) )
        goto LABEL_140;
      v42 = *((_QWORD *)this + v36);
      if ( v42 )
      {
        v43 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int16 *))(*(_QWORD *)v42 + 8LL))(
                v42,
                v33,
                v36,
                _ImageBase);
        goto LABEL_35;
      }
      v81 = (__int64 (__fastcall ***)(_QWORD, char *))(*((_QWORD *)this + v36 + 1)
                                                     + 8LL
                                                     + *(int *)(*(_QWORD *)(*((_QWORD *)this + v36 + 1) + 8LL) + 8LL));
      if ( *(_DWORD *)((**v81)(v81, v125) + 4) == 3 )
LABEL_140:
        v43 = 1;
      else
        v43 = 0;
LABEL_35:
      v44 = v95[0] + 40LL;
      BYTE8(v118[2 * v19 + 1]) = v43;
      BYTE6(v118[2 * v19 + 1]) = *((_BYTE *)this + v19 + 264);
      v45 = (unsigned int *)((char *)this + 2 * v44 + v44);
      if ( *((_BYTE *)this + v19 + 260) )
        v46 = 0.0;
      else
        v46 = *(float *)&FLOAT_1_0;
      v47 = v103;
      if ( *(float *)(v103 + 4 * v19 + 272) != v46 )
      {
        *(_BYTE *)(v103 + 168) = 1;
        *(float *)(v47 + 4 * v19 + 272) = v46;
      }
LABEL_39:
      v48 = *(_WORD *)v45;
      v49 = *((_BYTE *)v45 + 2);
      v50 = (float *)((char *)this + v41 * 16 + 132);
      v51 = *((_QWORD *)this + 2);
      v52 = 44 * v19;
      v99 = v48;
      if ( BYTE7(v118[v41 + 1]) )
        goto LABEL_52;
      v53 = *v50;
      v54 = v99;
      BYTE3(v118[v41 + 1]) = *(_BYTE *)(v52 + v51 + 95);
      if ( (v53 != 0.0 || v50[1] != 0.0 || v50[2] != 0.0 || v50[3] != 0.0)
        && (*(_BYTE *)(v52 + v51 + 94) || BYTE6(v118[v41 + 1])) )
      {
        BYTE2(v118[v41 + 1]) = 1;
        if ( BYTE6(v118[v41 + 1]) )
        {
          v55 = HIBYTE(v99);
          LOBYTE(v118[v41 + 1]) = HIBYTE(v99);
        }
        else
        {
          v55 = *(_BYTE *)(v52 + v51 + 92);
          LOBYTE(v118[v41 + 1]) = v55;
          v49 = *(_BYTE *)(v52 + v51 + 93);
        }
        BYTE1(v118[v41 + 1]) = v49;
        v56 = v54 && (v55 == 2 || v49 == 2);
        BYTE4(v118[v41 + 1]) = v56;
      }
      if ( !BYTE4(v118[v41 + 1]) )
        BYTE5(v118[v41 + 1]) = v54 == 2;
      if ( BYTE2(v118[v41 + 1]) || BYTE3(v118[v41 + 1]) )
      {
LABEL_52:
        v57 = v52 + v51;
        if ( memcmp_0((const void *)(v52 + v51 + 96), v50, 0x20uLL) )
        {
          *(_OWORD *)(v57 + 96) = *(_OWORD *)v50;
          *(_OWORD *)(v57 + 112) = *((_OWORD *)v50 + 1);
          *(_BYTE *)(v51 + 280) = 1;
        }
      }
      ++v19;
      v17 = (unsigned int)v96;
      v3 = v104;
      if ( ++v95[0] >= (unsigned int)v96 )
      {
        v5 = v107;
        v14 = v103;
        goto LABEL_56;
      }
      v4 = v105;
    }
    LOBYTE(v33) = 1;
    goto LABEL_24;
  }
LABEL_56:
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 80LL) & 0x10) == 0 || v17 >= 4 )
    v15 = 0.0;
  if ( *(float *)(v14 + 192) != v15 )
  {
    *(float *)(v14 + 192) = v15;
    *(_BYTE *)(v14 + 168) = 1;
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v5 + 64LL))(v5, 0LL, v17, v126);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v5 + 80LL))(v5, 0LL, v17, v127);
  Shaders = CRenderingTechnique::GetShaders(
              *((CRenderingTechnique **)this + 2),
              (struct CD3DDevice *)v3,
              (const struct ShaderLinkingConfig *)v118,
              v95,
              &v100);
  v38 = Shaders;
  if ( Shaders < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, Shaders, 0xACu, 0LL);
    v8 = v100;
    goto LABEL_81;
  }
  v60 = 0;
  v61 = v95[0];
  v62 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 88LL);
  if ( *(int *)(v3 + 1528) <= 0 )
    goto LABEL_65;
  v63 = *(int *)(v3 + 1528);
  v64 = 0LL;
  v65 = *(_DWORD **)(v3 + 1512);
  while ( *v65 != v95[0] )
  {
    ++v60;
    ++v64;
    ++v65;
    if ( v64 >= v63 )
      goto LABEL_65;
  }
  if ( v60 == -1 || (v67 = *(_QWORD *)(*(_QWORD *)(v3 + 1520) + 8LL * v60)) == 0 )
  {
LABEL_65:
    v66 = 0LL;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v67 + 8LL))(
      *(_QWORD *)(*(_QWORD *)(v3 + 1520) + 8LL * v60),
      v64,
      v63);
    v66 = v67;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
  }
  v62(v5, v66, 0LL, 0LL);
  v8 = v100;
  (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v5 + 72LL))(
    v5,
    v100,
    0LL,
    0LL);
  v68 = (CRenderingTechnique *)*((_QWORD *)this + 2);
  v96 = 0LL;
  lpVtbl = 0LL;
  if ( *((_DWORD *)v68 + 18) || *((_DWORD *)v68 + 66) )
  {
    v100 = 0LL;
    v70 = CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::FindOrCreateResourceNoRef(
            (char *)v68 + 16,
            v104,
            &v100);
    v72 = v70;
    v38 = v70;
    if ( v70 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x1D8u, 0LL);
    }
    else
    {
      updated = CRenderingTechnique::UpdateConstantBuffers(v68);
      v72 = updated;
      v38 = updated;
      if ( updated >= 0 )
      {
        lpVtbl = v100[12].lpVtbl;
        goto LABEL_73;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, updated, 0x1DAu, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v94, 0LL, 0, v72, 0xB4u, 0LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v96);
    goto LABEL_81;
  }
LABEL_73:
  v96 = lpVtbl;
  if ( lpVtbl )
  {
    (*((void (__fastcall **)(struct ID3D11PixelShaderVtbl *))lpVtbl->QueryInterface + 1))(lpVtbl);
    lpVtbl = v96;
  }
  v38 = 0;
  if ( lpVtbl )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11PixelShaderVtbl **))(*(_QWORD *)v5 + 128LL))(
      v5,
      0LL,
      1LL,
      &v96);
    v75 = v96;
    if ( v96 )
    {
      v96 = 0LL;
      (*((void (__fastcall **)(struct ID3D11PixelShaderVtbl *))v75->QueryInterface + 2))(v75);
    }
  }
  v76 = v105;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 80LL) & 2) != 0
    && *(_DWORD *)CD3DBatchExecutionContext::GetLightsMask(v105) == -1
    || (*(_DWORD *)(*((_QWORD *)this + 2) + 80LL) & 4) != 0 )
  {
    CD3DBatchExecutionContext::SetNoOpLightingConstantBuffers(v76);
  }
  *v108 = v61;
LABEL_81:
  if ( v8 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v8->lpVtbl->Release)(v8);
  return (unsigned int)v38;
}
