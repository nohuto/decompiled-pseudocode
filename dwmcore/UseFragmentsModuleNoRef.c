/*
 * XREFs of UseFragmentsModuleNoRef @ 0x180027694
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180028514 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x18002827C (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UseFragmentsModuleNoRef(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  _QWORD *v5; // rsi
  int FragmentsModuleNoRef; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // r14
  __int64 (__fastcall *v12)(__int64, const char *, __int64 *); // rbx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v30; // [rsp+70h] [rbp+30h] BYREF

  v30 = 0LL;
  v5 = (_QWORD *)a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, &v29);
  v10 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, FragmentsModuleNoRef, 0x20u, 0LL);
    goto LABEL_9;
  }
  v11 = v29;
  v12 = *(__int64 (__fastcall **)(__int64, const char *, __int64 *))(*(_QWORD *)v29 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  v13 = v12(v11, word_180338FC0, (__int64 *)&v30);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x21u, 0LL);
    goto LABEL_9;
  }
  v15 = *v30;
  if ( a3 )
  {
    v25 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v15 + 40))(v30, 16LL, 0LL, 1LL);
    v10 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x26u, 0LL);
      goto LABEL_9;
    }
    v27 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(*v30 + 56))(v30, 0LL, 0LL, 1LL);
    v10 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x27u, 0LL);
      goto LABEL_9;
    }
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(v15 + 40))(v30, 0LL, 0LL, 4LL);
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2Cu, 0LL);
      goto LABEL_9;
    }
    v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(*v30 + 56))(v30, 0LL, 0LL, 4LL);
    v10 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x2Du, 0LL);
      goto LABEL_9;
    }
  }
  v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v30 + 24))(v30, 0LL, 0LL, a2);
  v10 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x37u, 0LL);
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v30 + 24))(v30, 2LL, 2LL);
    v10 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x3Du, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v5 + 32LL))(*v5, v30);
      *a4 = v11;
    }
  }
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  return v10;
}
