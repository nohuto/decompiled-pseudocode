/*
 * XREFs of ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800468C4
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180047838 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180269A34 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180046B64 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderL.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18004AA4C (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9CA4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C915C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB254 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Link(
        CShaderLinkingGraphBuilder *this,
        const struct CShaderLinkingGraphBuilder::SignatureParameter *a2,
        struct ID3D10Blob **a3)
{
  __int64 *v3; // r14
  __int64 v4; // rbx
  __int64 (__fastcall *v7)(__int64, _OWORD *, __int64, const struct CShaderLinkingGraphBuilder::SignatureParameter **); // rdi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, const struct CShaderLinkingGraphBuilder::SignatureParameter **, _QWORD); // rdi
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, const struct CShaderLinkingGraphBuilder::SignatureParameter *, const char *, const char *, _DWORD, struct ID3D10Blob **, __int64 *); // rbx
  const char *v19; // r9
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rcx
  void *v23; // rdi
  unsigned __int64 v24; // rcx
  __int64 v26; // rcx
  const CHAR *v27; // rax
  _QWORD v28[2]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v29; // [rsp+50h] [rbp-49h]
  _BYTE v30[40]; // [rsp+60h] [rbp-39h]
  _OWORD v31[3]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+1Fh]
  struct ID3D10Blob *v33; // [rsp+100h] [rbp+67h] BYREF
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v34; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v35; // [rsp+118h] [rbp+7Fh] BYREF

  v34 = a2;
  v3 = (__int64 *)((char *)this + 8);
  v4 = *((_QWORD *)this + 1);
  *(_QWORD *)&v29 = "output";
  *((_QWORD *)&v29 + 1) = "SV_Target";
  *(_QWORD *)&v30[12] = 4LL;
  *(_OWORD *)&v30[24] = 0LL;
  v35 = 0LL;
  v31[0] = v29;
  v33 = 0LL;
  v34 = 0LL;
  v32 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v30[24], *(__m128d *)&v30[24]);
  *(_QWORD *)v30 = 0x100000003LL;
  *(_DWORD *)&v30[8] = 1;
  *(_DWORD *)&v30[20] = 2;
  v31[1] = *(_OWORD *)v30;
  v31[2] = *(_OWORD *)&v30[16];
  v7 = *(__int64 (__fastcall **)(__int64, _OWORD *, __int64, const struct CShaderLinkingGraphBuilder::SignatureParameter **))(*(_QWORD *)v4 + 40LL);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v34);
  v8 = v7(v4, v31, 1LL, &v34);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD3u, 0LL);
    goto LABEL_22;
  }
  v28[1] = &unk_180273380;
  v28[0] = 1LL;
  v11 = CShaderLinkingGraphBuilder::FulfillInputs(this, v34, v28);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xD4u, 0LL);
LABEL_22:
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v34);
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v34);
  v13 = *v3;
  v34 = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64, const struct CShaderLinkingGraphBuilder::SignatureParameter **, _QWORD))(*(_QWORD *)v13 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
  v15 = v14(v13, &v34, 0LL);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xDAu, 0LL);
  }
  else
  {
    v17 = *(_QWORD *)this;
    v18 = *(__int64 (__fastcall **)(__int64, const struct CShaderLinkingGraphBuilder::SignatureParameter *, const char *, const char *, _DWORD, struct ID3D10Blob **, __int64 *))(**(_QWORD **)this + 24LL);
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v35);
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v33);
    if ( *((_BYTE *)this + 84) )
    {
      if ( *((_BYTE *)this + 84) == 1 )
        v19 = "ps_4_0_level_9_3";
      else
        v19 = 0LL;
    }
    else
    {
      v19 = "ps_4_0_level_9_1";
    }
    v20 = v18(v17, v34, "main", v19, 0, &v33, &v35);
    v10 = v20;
    if ( v20 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v33);
      *a3 = v33;
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xE5u, 0LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
LABEL_9:
  if ( byte_18034BD98 )
  {
    v26 = *v3;
    v34 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, const struct CShaderLinkingGraphBuilder::SignatureParameter **))(*(_QWORD *)v26 + 80LL))(
           v26,
           0LL,
           &v34) >= 0 )
    {
      v27 = (const CHAR *)(*(__int64 (__fastcall **)(const struct CShaderLinkingGraphBuilder::SignatureParameter *))(*(_QWORD *)v34 + 24LL))(v34);
      OutputDebugStringA(v27);
    }
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v34);
  }
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(this);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(v3);
  std::_List_node<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>,void *>>>(
    v22,
    *((_QWORD *)this + 3));
  **((_QWORD **)this + 3) = *((_QWORD *)this + 3);
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = 0LL;
  v23 = (void *)*((_QWORD *)this + 5);
  v24 = (unsigned __int64)(*((_QWORD *)this + 6) - (_QWORD)v23 + 7LL) >> 3;
  if ( (unsigned __int64)v23 > *((_QWORD *)this + 6) )
    v24 = 0LL;
  if ( v24 )
    memset64(v23, *((_QWORD *)this + 3), v24);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v35);
  return v10;
}
