/*
 * XREFs of ?GetD3D11SamplerDesc@SamplerMode@@SA?AUD3D11_SAMPLER_DESC@@U1@@Z @ 0x18010083C
 * Callers:
 *     ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18028A5B0 (-GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 * Callees:
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1801008B8 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 */

__int64 __fastcall SamplerMode::GetD3D11SamplerDesc(int *a1, _BYTE *a2)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // r11

  if ( *a2 )
    v2 = 21;
  else
    v2 = 0;
  *a1 = v2;
  LOBYTE(a1) = a2[1];
  v3 = ExtendMode::ToD3D11TextureAddressMode(a1);
  LOBYTE(v5) = *(_BYTE *)(v4 + 2);
  *(_DWORD *)(v6 + 4) = v3;
  v7 = ExtendMode::ToD3D11TextureAddressMode(v5);
  *(_DWORD *)(v8 + 8) = v7;
  result = v8;
  *(_QWORD *)(v8 + 12) = 3LL;
  *(_DWORD *)(v8 + 20) = 1;
  *(_QWORD *)(v8 + 24) = 8LL;
  *(_QWORD *)(v8 + 36) = v10;
  *(_DWORD *)(v8 + 32) = v10;
  *(_DWORD *)(v8 + 44) = v10;
  *(_DWORD *)(v8 + 48) = 2139095039;
  return result;
}
