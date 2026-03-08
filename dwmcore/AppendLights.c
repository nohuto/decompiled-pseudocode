/*
 * XREFs of AppendLights @ 0x18001B738
 * Callers:
 *     AppendShaderBody @ 0x180028340 (AppendShaderBody.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180028514 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x18001B964 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     LinkLightShader @ 0x18001B9F4 (LinkLightShader.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18002A318 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AppendLights(unsigned __int16 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  struct ID3D11Module *v4; // rax
  HRESULT v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rbx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // esi
  int v19; // eax
  unsigned __int16 v20; // si
  int NodeFromOutputArgument; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned __int16 v25; // r14
  int v26; // eax
  unsigned int v27; // ecx
  int appended; // eax
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // r14d
  int v36; // eax
  unsigned int v37; // ecx
  _WORD v38[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v39; // [rsp+40h] [rbp-20h] BYREF
  __int128 v40; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v41; // [rsp+90h] [rbp+30h] BYREF

  v41 = a1;
  v4 = ppModule;
  if ( !ppModule )
  {
    v8 = D3DLoadModule(&unk_1802DC2D0, 0xEE3DuLL, &ppModule);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x404u, 0LL);
      return v10;
    }
    v4 = ppModule;
  }
  *(_QWORD *)&v39 = 0LL;
  CreateInstance = v4->lpVtbl->CreateInstance;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
  v12 = ((__int64 (__fastcall *)(struct ID3D11Module *, const char *, __int128 *))CreateInstance)(
          ppModule,
          word_180338FC0,
          &v39);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x40Au, 0LL);
    goto LABEL_30;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v39 + 24LL))(v39, 1LL, 1LL);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x410u, 0LL);
    goto LABEL_30;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a2 + 32LL))(*(_QWORD *)a2, v39);
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x412u, 0LL);
LABEL_30:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
    return v10;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
  v18 = a2[20];
  v19 = v18 + 1;
  v20 = v18 | 0x600;
  a2[20] = v19;
  if ( a4 < 0 )
  {
    *((_QWORD *)&v39 + 1) = &v41;
    *(_QWORD *)&v39 = 1LL;
    v40 = v39;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 (_DWORD)a2,
                 v20,
                 (unsigned int)word_180338FC0,
                 (_DWORD)ppModule,
                 (__int64)"UnPremultiplyForLighting",
                 (__int64)&v40);
    v10 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, appended, 0x41Cu, 0LL);
    }
    else
    {
      *((_QWORD *)&v39 + 1) = v38;
      *(_QWORD *)&v39 = 1LL;
      v38[0] = v20;
      v40 = v39;
      v31 = LinkLightShader((_DWORD)a2, (_DWORD)a3, (_DWORD)ppModule, (unsigned int)&v40, 0, (__int64)&v39);
      v10 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x429u, 0LL);
      }
      else
      {
        *((_QWORD *)&v40 + 1) = &v39;
        *(_QWORD *)&v40 = 2LL;
        WORD1(v39) = v41;
        v33 = CShaderLinkingGraphBuilder::AppendNode(
                (_DWORD)a2,
                v41,
                (unsigned int)word_180338FC0,
                (_DWORD)ppModule,
                (__int64)"PostLightingLib",
                (__int64)&v40);
        v10 = v33;
        if ( v33 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x430u, 0LL);
      }
    }
  }
  else
  {
    NodeFromOutputArgument = CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(a2, v20, v41, (unsigned int)a4);
    v10 = NodeFromOutputArgument;
    if ( NodeFromOutputArgument < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, NodeFromOutputArgument, 0x436u, 0LL);
      return v10;
    }
    if ( *a3 == -1 )
    {
      v35 = a2[20];
      v40 = 0uLL;
      a2[20] = v35 + 1;
      v25 = v35 | 0x600;
      v36 = CShaderLinkingGraphBuilder::AppendNode(
              (_DWORD)a2,
              v25,
              (unsigned int)word_180338FC0,
              (_DWORD)ppModule,
              (__int64)"NoLightAccumulator",
              (__int64)&v40);
      v10 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x44Bu, 0LL);
        return v10;
      }
    }
    else
    {
      v38[0] = v41;
      *((_QWORD *)&v40 + 1) = v38;
      *(_QWORD *)&v40 = 2LL;
      v38[1] = v20;
      v23 = LinkLightShader((_DWORD)a2, (_DWORD)a3, (_DWORD)ppModule, (unsigned int)&v40, 1, (__int64)&v39);
      v10 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x445u, 0LL);
        return v10;
      }
      v25 = v39;
    }
    *((_QWORD *)&v40 + 1) = &v39;
    *(_QWORD *)&v40 = 2LL;
    LOWORD(v39) = v25;
    WORD1(v39) = v20;
    v26 = CShaderLinkingGraphBuilder::AppendNode(
            (_DWORD)a2,
            v41,
            (unsigned int)word_180338FC0,
            (_DWORD)ppModule,
            (__int64)"PostSceneLightingEffectLib",
            (__int64)&v40);
    v10 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x452u, 0LL);
  }
  return v10;
}
