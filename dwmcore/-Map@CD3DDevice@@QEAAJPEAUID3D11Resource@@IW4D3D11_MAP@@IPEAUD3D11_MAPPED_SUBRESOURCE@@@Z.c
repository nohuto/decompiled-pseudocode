/*
 * XREFs of ?Map@CD3DDevice@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x18002D428
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x18002CF54 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z @ 0x180207638 (-BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z.c)
 *     ?SetData@CD3DConstantBuffer@@QEAAJV?$span@$$CBE$0?0@gsl@@@Z @ 0x1802A0964 (-SetData@CD3DConstantBuffer@@QEAAJV-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::Map(
        CD3DDevice *this,
        struct ID3D11Resource *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct D3D11_MAPPED_SUBRESOURCE *a6)
{
  int v6; // ebx
  int v8; // eax
  unsigned int v9; // ecx

  v6 = *((_DWORD *)this + 272);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v6, 0x9F9u, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, _QWORD, __int64, _DWORD, struct D3D11_MAPPED_SUBRESOURCE *))(**((_QWORD **)this + 70) + 112LL))(
           *((_QWORD *)this + 70),
           a2,
           0LL,
           a4,
           0,
           a6);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x9FFu, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v6, 0LL);
}
