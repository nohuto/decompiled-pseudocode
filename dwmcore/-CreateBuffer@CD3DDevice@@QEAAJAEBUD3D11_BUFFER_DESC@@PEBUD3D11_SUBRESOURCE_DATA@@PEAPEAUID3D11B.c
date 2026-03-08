/*
 * XREFs of ?CreateBuffer@CD3DDevice@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x1800D04C4
 * Callers:
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x1800CFD5C (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x1800CFE50 (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDevice@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBR.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800D0218 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::CreateBuffer(
        CD3DDevice *this,
        const struct D3D11_BUFFER_DESC *a2,
        const struct D3D11_SUBRESOURCE_DATA *a3,
        struct ID3D11Buffer **a4)
{
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx

  *a4 = 0LL;
  v5 = *((_DWORD *)this + 272);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v5, 0x644u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, const struct D3D11_BUFFER_DESC *, const struct D3D11_SUBRESOURCE_DATA *))(**((_QWORD **)this + 69) + 24LL))(
           *((_QWORD *)this + 69),
           a2,
           a3);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x648u, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v5, 0);
}
