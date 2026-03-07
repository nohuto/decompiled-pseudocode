__int64 __fastcall CCommonRenderingEffect::SetStateOnDevice(
        CCommonRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // r12d
  __int64 v8; // rax
  CCommonRenderingEffect *v9; // r8
  const char *v10; // rcx
  int *v11; // rax
  __m128i *v12; // rax
  int v13; // eax
  unsigned int v14; // r14d
  __int64 i; // rbx
  CCommonRenderingShaderCache *v16; // rcx
  __int64 v17; // rax
  __int64 (__fastcall ***v18)(_QWORD, char *); // rcx
  __int64 v19; // rax
  __int64 v20; // xmm0_8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  struct CD3DDevice *v24; // r9
  char *v25; // r10
  _QWORD *v26; // r11
  int v27; // ecx
  __int64 v28; // rcx
  char v29; // al
  unsigned int ColorChannelDepth; // eax
  unsigned int v31; // r11d
  __int64 v32; // rcx
  char v33; // al
  char v34; // r10
  enum DXGI_COLOR_SPACE_TYPE v35; // ecx
  int v36; // r9d
  int v37; // edx
  unsigned int v38; // ecx
  unsigned int v39; // eax
  __int128 v40; // xmm0
  int CommonOrCubeMapRenderingShader; // r15d
  struct CD3DDevice *v42; // rbx
  unsigned int v43; // ecx
  enum DXGI_COLOR_SPACE_TYPE v44; // r14d
  void (__fastcall *v45)(__int64, __int64, _QWORD, _QWORD); // r12
  int v46; // ecx
  __int64 v47; // r8
  __int64 v48; // rdx
  _DWORD *v49; // rax
  __int64 v50; // rbx
  __int64 (__fastcall ***v52)(_QWORD, char *); // rcx
  __int64 v53; // rax
  __int64 (__fastcall ***v54)(_QWORD, char *); // rcx
  __int64 v55; // rax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  __int64 v59; // r10
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // r9
  __int64 *v63; // rcx
  __int64 v64; // rax
  _QWORD *v65; // r11
  int v66; // eax
  unsigned int v67; // ebx
  unsigned int v68; // ecx
  int v69; // [rsp+30h] [rbp-D0h]
  char v70; // [rsp+34h] [rbp-CCh]
  enum DXGI_COLOR_SPACE_TYPE v71; // [rsp+38h] [rbp-C8h] BYREF
  CCommonRenderingEffect *v72; // [rsp+40h] [rbp-C0h]
  __int16 v73; // [rsp+50h] [rbp-B0h]
  __int16 v74; // [rsp+60h] [rbp-A0h]
  __int64 v75; // [rsp+70h] [rbp-90h]
  __int64 *v76; // [rsp+78h] [rbp-88h] BYREF
  __int16 v77; // [rsp+80h] [rbp-80h]
  __int64 v78; // [rsp+90h] [rbp-70h] BYREF
  __int128 v79; // [rsp+98h] [rbp-68h]
  __m128i v80; // [rsp+A8h] [rbp-58h]
  int v81; // [rsp+B8h] [rbp-48h]
  int v82; // [rsp+BCh] [rbp-44h]
  __int128 v83; // [rsp+C0h] [rbp-40h]
  struct CD3DDevice *v84; // [rsp+D0h] [rbp-30h]
  struct ID3D11PixelShader *v85; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v86; // [rsp+E0h] [rbp-20h]
  char *v87; // [rsp+E8h] [rbp-18h]
  unsigned int *v88; // [rsp+F0h] [rbp-10h]
  enum DXGI_FORMAT v89[2]; // [rsp+F8h] [rbp-8h]
  enum DXGI_COLOR_SPACE_TYPE v90; // [rsp+100h] [rbp+0h]
  __int128 v91; // [rsp+108h] [rbp+8h] BYREF
  __int128 v92; // [rsp+118h] [rbp+18h] BYREF
  _DWORD v93[3]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v94; // [rsp+134h] [rbp+34h]
  int v95; // [rsp+13Ch] [rbp+3Ch]
  int v96; // [rsp+140h] [rbp+40h]
  __int128 v97; // [rsp+144h] [rbp+44h]
  int v98; // [rsp+154h] [rbp+54h]
  int v99; // [rsp+158h] [rbp+58h]
  char v100[16]; // [rsp+160h] [rbp+60h] BYREF
  char v101[16]; // [rsp+170h] [rbp+70h] BYREF
  char v102[16]; // [rsp+180h] [rbp+80h] BYREF

  v3 = 0LL;
  v4 = *((_QWORD *)a2 + 2);
  v5 = *((_QWORD *)a2 + 4);
  v6 = *((_DWORD *)a2 + 30);
  v84 = (struct CD3DDevice *)*((_QWORD *)a2 + 1);
  v78 = 0LL;
  v82 = 0;
  v8 = *((_QWORD *)a2 + 6);
  v88 = a3;
  v9 = this;
  v72 = this;
  v10 = "NoOp";
  v85 = 0LL;
  *(_QWORD *)&v79 = "NoOp";
  DWORD2(v79) = 0;
  v80.m128i_i64[0] = (__int64)"NoOp";
  v80.m128i_i32[2] = 0;
  v91 = 0LL;
  v92 = 0LL;
  if ( v8 )
  {
    v11 = (int *)(v8 + 16);
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
      v9 = v72;
    }
    v11 = &`CLightsMask::NoLights'::`2'::noLights;
    v10 = "NoOp";
  }
  v81 = *v11;
  BYTE1(v82) = v6 == 1;
  BYTE2(v82) = *((_BYTE *)a2 + 82) == 2;
  *(_QWORD *)&v83 = "NoOp";
  DWORD2(v83) = 0;
  if ( v6 == 1 && !ColorConversion::IsHDRColorSpace(DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709) )
  {
    LOBYTE(v82) = 1;
LABEL_78:
    v12 = (__m128i *)&off_1803E0880;
    goto LABEL_7;
  }
  LOBYTE(v82) = 0;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, -2003292288, 0xB6u, 0LL);
      return 2291675008LL;
    }
    goto LABEL_78;
  }
  v12 = (__m128i *)&ColorConversion::g_rgShaders;
LABEL_7:
  if ( (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*v12, 8)) > 1 )
    v80 = *v12;
  v13 = v78;
  if ( *(_BYTE *)(v5 + 368) )
  {
    v13 = v78 | 0x10;
    LODWORD(v78) = v78 | 0x10;
  }
  v69 = v13;
  if ( *((_DWORD *)a2 + 16) == 22 )
  {
    v69 = v13 | 8;
    LODWORD(v78) = v13 | 8;
  }
  v14 = 0;
  v71 = v90;
  for ( i = 0LL; ; ++i )
  {
    while ( 1 )
    {
      v16 = (CCommonRenderingShaderCache *)*((_QWORD *)v9 + 3 * i + 3);
      if ( v16 )
        break;
LABEL_44:
      ++v14;
      ++i;
      if ( v14 >= 2 )
      {
        v42 = v84;
        v71 = 0x80000000;
        CommonOrCubeMapRenderingShader = CCommonRenderingShaderCache::GetCommonOrCubeMapRenderingShader(
                                           v16,
                                           v84,
                                           (const struct CommonRenderingShaderDesc *)&v78,
                                           0,
                                           (unsigned int *)&v71,
                                           &v85);
        if ( CommonOrCubeMapRenderingShader < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, CommonOrCubeMapRenderingShader, 0x104u, 0LL);
        }
        else
        {
          v44 = v71;
          v45 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 88LL);
          v46 = 0;
          if ( *((int *)v42 + 382) > 0 )
          {
            v47 = *((int *)v42 + 382);
            v48 = 0LL;
            v49 = (_DWORD *)*((_QWORD *)v42 + 189);
            while ( *v49 != v71 )
            {
              ++v46;
              ++v48;
              ++v49;
              if ( v48 >= v47 )
                goto LABEL_52;
            }
            if ( v46 != -1 )
            {
              v50 = *(_QWORD *)(*((_QWORD *)v42 + 190) + 8LL * v46);
              if ( v50 )
              {
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v50 + 8LL))(v50, v48, v47);
                v3 = v50;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
              }
            }
          }
LABEL_52:
          v45(v4, v3, 0LL, 0LL);
          (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v4 + 72LL))(
            v4,
            v85,
            0LL,
            0LL);
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v4 + 64LL))(v4, 0LL, 2LL, &v91);
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v4 + 80LL))(v4, 0LL, 2LL, &v92);
          *v88 = v44;
        }
        return (unsigned int)CommonOrCubeMapRenderingShader;
      }
    }
    v17 = *(_QWORD *)v16;
    v76 = 0LL;
    if ( (*(int (__fastcall **)(CCommonRenderingShaderCache *, _QWORD, __int64 **))(v17 + 48))(
           v16,
           *((_QWORD *)a2 + 14),
           &v76) < 0 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v76);
      v22 = 0LL;
    }
    else
    {
      v18 = (__int64 (__fastcall ***)(_QWORD, char *))((char *)v76 + *(int *)(v76[1] + 12) + 8);
      v19 = (**v18)(v18, v100);
      v20 = *(_QWORD *)v19;
      v71 = *(_DWORD *)(v19 + 8);
      v21 = *v76;
      *(_QWORD *)v89 = v20;
      v22 = (*(__int64 (__fastcall **)(__int64 *))(v21 + 8))(v76);
      v75 = v22;
      if ( v76 )
      {
        v23 = (__int64)v76 + *(int *)(v76[1] + 4) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        v22 = v75;
      }
    }
    v9 = v72;
    v24 = v84;
    *((_QWORD *)&v91 + i) = v22;
    v25 = (char *)v9 + 2 * i;
    v16 = (CCommonRenderingShaderCache *)(unsigned __int8)*(_WORD *)&v25[i + 64];
    v73 = *(_WORD *)&v25[i + 64];
    v87 = v25;
    v26 = (_QWORD *)((char *)v24
                   + 128 * (_DWORD)v16
                   + 32 * (unsigned int)HIBYTE(v73)
                   + 8 * (unsigned __int8)v25[i + 66]
                   + 1832);
    v86 = v26;
    if ( *v26 )
      goto LABEL_19;
    v77 = *(_WORD *)&v25[i + 64];
    if ( HIBYTE(v77) && v25[i + 66] )
      v56 = 37120;
    else
      v56 = 37632;
    if ( *((_DWORD *)v24 + 146) < v56 )
      break;
    v74 = *(_WORD *)&v25[i + 64];
    if ( (_BYTE)v74 )
      v57 = 21;
    else
      v57 = 0;
    v93[0] = v57;
    v58 = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v74));
    v60 = *(unsigned __int8 *)(i + v59 + 66);
    v93[1] = v58;
    v61 = ExtendMode::ToD3D11TextureAddressMode(v60);
    v63 = *(__int64 **)(v62 + 552);
    v93[2] = v61;
    v94 = 3LL;
    v95 = 1;
    v96 = 8;
    v97 = 0LL;
    v98 = 0;
    v99 = 2139095039;
    v64 = *v63;
    *v65 = 0LL;
    v66 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD *))(v64 + 184))(v63, v93, v65);
    if ( v66 < 0 )
    {
      v67 = v66;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, v66, 0xC29u, 0LL);
      goto LABEL_126;
    }
    v9 = v72;
    v26 = v86;
LABEL_19:
    *(_QWORD *)&v93[2 * i - 4] = *v26;
    if ( v14 )
    {
      v69 |= 2u;
      LODWORD(v78) = v69;
      goto LABEL_44;
    }
    v27 = v69 | 1;
    v69 = v27;
    LODWORD(v78) = v27;
    if ( *((_BYTE *)v9 + 24 * i + 32) )
      goto LABEL_54;
    v28 = *((_QWORD *)v9 + 3 * i + 2);
    if ( v28 )
    {
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
      v27 = v69;
      if ( !v29 )
        goto LABEL_23;
LABEL_54:
      v27 |= 4u;
      v69 = v27;
      LODWORD(v78) = v27;
      goto LABEL_23;
    }
    v52 = (__int64 (__fastcall ***)(_QWORD, char *))(*((_QWORD *)v9 + 3 * i + 3)
                                                   + 8LL
                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)v9 + 3 * i + 3) + 8LL) + 8LL));
    v53 = (**v52)(v52, v101);
    v27 = v69;
    if ( *(_DWORD *)(v53 + 4) == 3 )
      goto LABEL_54;
LABEL_23:
    if ( v87[i + 64] == 2 )
    {
      v69 = v27 | 0x20;
      LODWORD(v78) = v27 | 0x20;
    }
    *(_QWORD *)&v83 = "NoOp";
    DWORD2(v83) = 0;
    ColorChannelDepth = GetColorChannelDepth(v89[0]);
    v9 = v72;
    v31 = ColorChannelDepth;
    LODWORD(v75) = ColorChannelDepth;
    if ( *((_BYTE *)v72 + 24 * i + 32) )
      goto LABEL_55;
    v32 = *((_QWORD *)v72 + 3 * i + 2);
    if ( !v32 )
    {
      v54 = (__int64 (__fastcall ***)(_QWORD, char *))(*((_QWORD *)v72 + 3 * i + 3)
                                                     + 8LL
                                                     + *(int *)(*(_QWORD *)(*((_QWORD *)v72 + 3 * i + 3) + 8LL) + 8LL));
      v55 = (**v54)(v54, v102);
      v9 = v72;
      v31 = v75;
      if ( *(_DWORD *)(v55 + 4) != 3 )
      {
        v34 = 0;
        goto LABEL_28;
      }
LABEL_55:
      v34 = 1;
      goto LABEL_28;
    }
    v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
    v9 = v72;
    v34 = v33;
    v31 = v75;
LABEL_28:
    v35 = v71;
    v36 = -2003292288;
    if ( v6 != 1 || (v70 = 1, ColorConversion::IsHDRColorSpace(v71)) )
      v70 = 0;
    v37 = 0;
    if ( v35 )
    {
      switch ( v35 )
      {
        case DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
          if ( v6 )
          {
            v37 = 46;
            v38 = 46;
            goto LABEL_33;
          }
          v37 = 2;
          v36 = 0;
          goto LABEL_73;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709:
          if ( v6 )
          {
            if ( v31 == 8 )
            {
              v37 = 22;
              v38 = 22;
              goto LABEL_33;
            }
            if ( v31 == 10 )
            {
              v37 = 30;
              v38 = 30;
              goto LABEL_33;
            }
          }
          else
          {
            if ( v31 == 8 )
            {
              v37 = 20;
              v38 = 20;
              goto LABEL_33;
            }
            if ( v31 == 10 )
            {
LABEL_98:
              v37 = 28;
              v36 = 0;
            }
          }
          goto LABEL_73;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020:
          if ( !v6 )
            goto LABEL_98;
          v37 = 30;
          v38 = 30;
          goto LABEL_33;
        case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
          if ( v6 )
          {
            v37 = 18;
            v38 = 18;
            goto LABEL_33;
          }
          v37 = 16;
          v36 = 0;
          goto LABEL_73;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020:
          if ( v6 )
          {
            v37 = 42;
            v38 = 42;
            goto LABEL_33;
          }
          v37 = 40;
          v36 = 0;
          goto LABEL_73;
        case DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P2020:
          if ( v6 )
          {
            v37 = 10;
            v38 = 10;
            goto LABEL_33;
          }
          v37 = 12;
          v36 = 0;
          goto LABEL_73;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P709:
          if ( v6 )
          {
            if ( v31 == 8 )
            {
              v37 = 26;
              v38 = 26;
              goto LABEL_33;
            }
            if ( v31 == 10 )
            {
              v37 = 34;
              v38 = 34;
              goto LABEL_33;
            }
          }
          else
          {
            if ( v31 == 8 )
            {
              v37 = 24;
              v38 = 24;
              goto LABEL_33;
            }
            if ( v31 == 10 )
            {
              v37 = 32;
              v36 = 0;
            }
          }
          goto LABEL_73;
        case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P2020:
          if ( v6 )
          {
            v37 = 38;
            v38 = 38;
            goto LABEL_33;
          }
          v37 = 36;
          v36 = 0;
LABEL_73:
          v38 = v37;
          if ( v36 < 0 )
          {
            v40 = v83;
            goto LABEL_37;
          }
          break;
        default:
          goto LABEL_73;
      }
    }
    else
    {
      if ( v6 )
      {
        v37 = 6;
        v38 = 6;
      }
      else
      {
        v38 = 0;
      }
LABEL_33:
      v36 = 0;
    }
    v39 = v37 + 1;
    if ( !v34 )
      v39 = v38;
    v38 = 2 * v39;
    v40 = *((_OWORD *)&ColorConversion::g_rgShaders + v39);
    v83 = v40;
LABEL_37:
    CommonOrCubeMapRenderingShader = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v36, 0xE8u, 0LL);
      return (unsigned int)CommonOrCubeMapRenderingShader;
    }
    if ( DWORD2(v83) > 1 )
      v79 = v40;
    if ( !v70 )
      LOBYTE(v82) = 0;
    v14 = 1;
  }
  v67 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, -2147024809, 0xC24u, 0LL);
LABEL_126:
  MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0xCFu, 0LL);
  return v67;
}
