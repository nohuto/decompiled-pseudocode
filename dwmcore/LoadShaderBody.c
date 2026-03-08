/*
 * XREFs of LoadShaderBody @ 0x1800280A8
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180028514 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x18002827C (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UID3D11Module@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11Module@@@Z @ 0x180102CF4 (--4-$ComPtr@UID3D11Module@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11Module@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LoadShaderBody(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        struct ID3D11Module **a6)
{
  _QWORD *v7; // r14
  int FragmentsModuleNoRef; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  HRESULT v12; // eax
  unsigned int v13; // ecx
  struct ID3D11Module *v14; // rbx
  HRESULT (__stdcall *CreateInstance)(ID3D11Module *, LPCSTR, struct ID3D11ModuleInstance **); // rdi
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  struct ID3D11Module *v20; // rcx
  unsigned int v22; // ebx
  struct ID3D11Module *ppModule; // [rsp+60h] [rbp+30h] BYREF
  __int64 v24; // [rsp+70h] [rbp+40h] BYREF

  v24 = a3;
  ppModule = 0LL;
  v7 = (_QWORD *)a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(a1, &v24);
  v11 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, FragmentsModuleNoRef, 0x35Eu, 0LL);
    goto LABEL_10;
  }
  if ( !*(_QWORD *)(a2 + 16) )
  {
    Microsoft::WRL::ComPtr<ID3D11Module>::operator=(&ppModule, v24);
    goto LABEL_9;
  }
  v24 = 0LL;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&ppModule);
  v12 = D3DLoadModule(*(LPCVOID *)(a2 + 24), *(_QWORD *)(a2 + 16), &ppModule);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x365u, 0LL);
    goto LABEL_15;
  }
  v14 = ppModule;
  CreateInstance = ppModule->lpVtbl->CreateInstance;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  v16 = ((__int64 (__fastcall *)(struct ID3D11Module *, __int64, __int64 *))CreateInstance)(v14, a5, &v24);
  v11 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x366u, 0LL);
    goto LABEL_15;
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v24 + 24LL))(v24, 0LL, 0LL, a4);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, 1LL, 1LL);
  if ( (*(_WORD *)(a2 + 52) & 0xFF00) == 0x200 )
  {
    v22 = *(unsigned __int8 *)(a2 + 52);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v24 + 40LL))(
      v24,
      *(unsigned __int8 *)(a2 + 52),
      *(unsigned __int8 *)(a2 + 52),
      1LL);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v24 + 56LL))(v24, v22, v22, 1LL);
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v7 + 32LL))(*v7, v24);
  v11 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x381u, 0LL);
LABEL_15:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
LABEL_9:
  v20 = ppModule;
  ppModule = 0LL;
  *a6 = v20;
LABEL_10:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&ppModule);
  return v11;
}
