/*
 * XREFs of ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800278AC
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180028514 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180207A88 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180026B5C (-clear@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uh.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18002A414 (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1FE0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Link(
        CShaderLinkingGraphBuilder *this,
        const struct CShaderLinkingGraphBuilder::SignatureParameter *a2,
        struct ID3D10Blob **a3)
{
  __int64 *v3; // r14
  __int64 v4; // rdi
  __int64 (__fastcall *v7)(__int64, _OWORD *, __int64, const struct CShaderLinkingGraphBuilder::SignatureParameter **); // rbx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, const struct CShaderLinkingGraphBuilder::SignatureParameter **, _QWORD); // rbx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, const struct CShaderLinkingGraphBuilder::SignatureParameter *, const char *, const char *, _DWORD, struct ID3D10Blob **, __int64 *); // rdi
  const char *v19; // r9
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v23; // rcx
  const CHAR *v24; // rax
  _QWORD v25[2]; // [rsp+40h] [rbp-59h] BYREF
  __int128 v26; // [rsp+50h] [rbp-49h]
  _BYTE v27[40]; // [rsp+60h] [rbp-39h]
  _OWORD v28[3]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+1Fh]
  struct ID3D10Blob *v30; // [rsp+100h] [rbp+67h] BYREF
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v31; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v32; // [rsp+118h] [rbp+7Fh] BYREF

  v31 = a2;
  v3 = (__int64 *)((char *)this + 8);
  v4 = *((_QWORD *)this + 1);
  *(_QWORD *)&v26 = "output";
  *((_QWORD *)&v26 + 1) = "SV_Target";
  *(_QWORD *)&v27[12] = 4LL;
  *(_OWORD *)&v27[24] = 0LL;
  v32 = 0LL;
  v28[0] = v26;
  v30 = 0LL;
  v31 = 0LL;
  v29 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v27[24], *(__m128d *)&v27[24]);
  *(_QWORD *)v27 = 0x100000003LL;
  *(_DWORD *)&v27[8] = 1;
  *(_DWORD *)&v27[20] = 2;
  v28[1] = *(_OWORD *)v27;
  v28[2] = *(_OWORD *)&v27[16];
  v7 = *(__int64 (__fastcall **)(__int64, _OWORD *, __int64, const struct CShaderLinkingGraphBuilder::SignatureParameter **))(*(_QWORD *)v4 + 40LL);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v31);
  v8 = v7(v4, v28, 1LL, &v31);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD4u, 0LL);
    goto LABEL_20;
  }
  v25[1] = &unk_1802BE6E0;
  v25[0] = 1LL;
  v11 = CShaderLinkingGraphBuilder::FulfillInputs(this, v31, v25);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xD5u, 0LL);
LABEL_20:
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v31);
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v31);
  v13 = *v3;
  v31 = 0LL;
  v14 = *(__int64 (__fastcall **)(__int64, const struct CShaderLinkingGraphBuilder::SignatureParameter **, _QWORD))(*(_QWORD *)v13 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
  v15 = v14(v13, &v31, 0LL);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xDBu, 0LL);
  }
  else
  {
    v17 = *(_QWORD *)this;
    v18 = *(__int64 (__fastcall **)(__int64, const struct CShaderLinkingGraphBuilder::SignatureParameter *, const char *, const char *, _DWORD, struct ID3D10Blob **, __int64 *))(**(_QWORD **)this + 24LL);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v30);
    if ( *((_BYTE *)this + 84) )
    {
      if ( *((_BYTE *)this + 84) == 1 )
      {
        v19 = "ps_4_0_level_9_3";
      }
      else if ( *((_BYTE *)this + 84) == 2 )
      {
        v19 = "ps_4_0";
      }
      else
      {
        v19 = 0LL;
      }
    }
    else
    {
      v19 = "ps_4_0_level_9_1";
    }
    v20 = v18(v17, v31, "main", v19, 0, &v30, &v32);
    v10 = v20;
    if ( v20 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v30);
      *a3 = v30;
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xE6u, 0LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
LABEL_9:
  if ( byte_1803E76F0 )
  {
    v23 = *v3;
    v31 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, const struct CShaderLinkingGraphBuilder::SignatureParameter **))(*(_QWORD *)v23 + 80LL))(
           v23,
           0LL,
           &v31) >= 0 )
    {
      v24 = (const CHAR *)(*(__int64 (__fastcall **)(const struct CShaderLinkingGraphBuilder::SignatureParameter *))(*(_QWORD *)v31 + 24LL))(v31);
      OutputDebugStringA(v24);
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v31);
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(this);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v3);
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::clear((unsigned __int64 *)this + 2);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v32);
  return v10;
}
