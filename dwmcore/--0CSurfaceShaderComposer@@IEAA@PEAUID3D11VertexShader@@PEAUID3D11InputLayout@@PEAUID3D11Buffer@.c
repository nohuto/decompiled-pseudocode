/*
 * XREFs of ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDevice@@PEAVCCompositingShaderCache@@@Z @ 0x1800CEEF0
 * Callers:
 *     ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z @ 0x1800CEA90 (-Create@CSurfaceShaderComposer@@SAJPEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1FE0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CSurfaceShaderComposer *__fastcall CSurfaceShaderComposer::CSurfaceShaderComposer(
        CSurfaceShaderComposer *this,
        struct ID3D11VertexShader *a2,
        struct ID3D11InputLayout *a3,
        struct ID3D11Buffer *a4,
        struct ID3DDeviceContextState *a5,
        struct CD3DDevice *a6,
        struct CCompositingShaderCache *a7)
{
  `vector constructor iterator'(
    (char *)this,
    8LL,
    6LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct ID3D11VertexShader *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 7) = a3;
  if ( a3 )
    ((void (__fastcall *)(struct ID3D11InputLayout *))a3->lpVtbl->AddRef)(a3);
  *((_QWORD *)this + 8) = a4;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((char *)this + 64);
  *((_QWORD *)this + 9) = a5;
  if ( a5 )
    ((void (__fastcall *)(struct ID3DDeviceContextState *))a5->lpVtbl->AddRef)(a5);
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = a6;
  *((_QWORD *)this + 13) = a7;
  return this;
}
