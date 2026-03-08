/*
 * XREFs of LinkLightShader @ 0x18001B9F4
 * Callers:
 *     AppendLights @ 0x18001B738 (AppendLights.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18002A318 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall LinkLightShader(__int64 a1, _DWORD *a2, int a3, unsigned __int64 *a4, char a5, _WORD *a6)
{
  int v9; // ecx
  int appended; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  _DWORD *v13; // rax
  int v14; // edi
  int v15; // edx
  __int128 v17; // xmm0
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  gsl::details *v20; // rcx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-59h]
  __int128 v27; // [rsp+40h] [rbp-39h] BYREF
  __int64 v28; // [rsp+50h] [rbp-29h] BYREF
  __int128 v29; // [rsp+60h] [rbp-19h] BYREF
  _WORD v30[8]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v31; // [rsp+80h] [rbp+7h] BYREF

  if ( !a6 )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x39Du, 0LL);
    return v12;
  }
  v9 = *(_DWORD *)(a1 + 80);
  v31 = 0uLL;
  v27 = 0uLL;
  *(_DWORD *)(a1 + 80) = v9 + 1;
  LOWORD(v9) = v9 | 0x600;
  *a6 = v9;
  appended = CShaderLinkingGraphBuilder::AppendNode(
               a1,
               (unsigned __int16)v9,
               (unsigned int)word_180338FC0,
               a3,
               (__int64)"InitLightAccumulator",
               (__int64)&v27);
  v12 = appended;
  if ( appended < 0 )
  {
    v25 = 930;
    goto LABEL_37;
  }
  v13 = a2;
  v14 = 0;
  while ( 1 )
  {
    v11 = 4 * v14;
    v15 = (*v13 >> (4 * v14)) & 0xF;
    if ( v15 != 15 )
      break;
LABEL_5:
    if ( (unsigned int)++v14 >= 3 )
      return v12;
  }
  if ( !v15 )
  {
    if ( a5 )
    {
      v17 = *(_OWORD *)"AmbientSceneLightingEffectLib";
      strcpy((char *)v30, "tingEffectLib0");
    }
    else
    {
      v17 = *(_OWORD *)"AmbientLightingLib";
      strcpy((char *)v30, "ib0");
    }
    goto LABEL_10;
  }
  v22 = v15 - 1;
  if ( !v22 )
  {
    if ( a5 )
    {
      v17 = *(_OWORD *)"DistantSceneLightingEffectLib";
      *(_WORD *)((char *)&v30[6] + 1) = (unsigned __int8)(v14 + 48);
      qmemcpy(v30, "tingEffectLib", 13);
    }
    else
    {
      v17 = *(_OWORD *)"DistantLightingLib";
      v30[0] = *(_WORD *)"ib";
      v30[1] = (unsigned __int8)(v14 + 48);
    }
    goto LABEL_10;
  }
  v23 = v22 - 1;
  if ( v23 )
  {
    if ( v23 != 1 )
    {
      v24 = -2147024809;
      v12 = -2147024809;
      v25 = 987;
      goto LABEL_38;
    }
    if ( a5 )
    {
      v17 = *(_OWORD *)"SpotSceneLightingEffectLib";
      v30[5] = (unsigned __int8)(v14 + 48);
      qmemcpy(v30, "gEffectLib", 10);
LABEL_10:
      v29 = v17;
      goto LABEL_11;
    }
    HIBYTE(v29) = v14 + 48;
    qmemcpy(&v29, "SpotLightingLib", 15);
    LOBYTE(v30[0]) = 0;
  }
  else
  {
    if ( a5 )
    {
      v17 = *(_OWORD *)"PointSceneLightingEffectLib";
      HIBYTE(v30[5]) = v14 + 48;
      qmemcpy(v30, "ngEffectLib", 11);
      LOBYTE(v30[6]) = 0;
      goto LABEL_10;
    }
    v30[0] = (unsigned __int8)(v14 + 48);
    v29 = *(_OWORD *)"PointLightingLib";
  }
LABEL_11:
  LODWORD(v31) = 196610;
  if ( v14 )
    LODWORD(v31) = 327684;
  v18 = 0LL;
  v19 = *a4;
  WORD2(v31) = *a6;
  *(_DWORD *)((char *)&v31 + 6) = 0;
  WORD5(v31) = 0;
  do
  {
    if ( v18 >= v19 )
      break;
    *((_WORD *)&v31 + v18 + 3) = *(_WORD *)(a4[1] + 2 * v18);
    ++v18;
  }
  while ( v18 + 3 < 6 );
  gsl::details::extent_type<-1>::extent_type<-1>(&v28, v19 + 3);
  if ( v28 == -1 )
  {
    gsl::details::terminate(v20);
    JUMPOUT(0x18001BBE5LL);
  }
  v21 = (unsigned __int16)*a6;
  *(_QWORD *)&v27 = v28;
  *((_QWORD *)&v27 + 1) = &v31;
  appended = CShaderLinkingGraphBuilder::AppendNode(
               a1,
               v21,
               (unsigned int)word_180338FC0,
               a3,
               (__int64)&v29,
               (__int64)&v27);
  v12 = appended;
  if ( appended >= 0 )
  {
    v13 = a2;
    goto LABEL_5;
  }
  v25 = 1007;
LABEL_37:
  v24 = appended;
LABEL_38:
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v24, v25, 0LL);
  return v12;
}
