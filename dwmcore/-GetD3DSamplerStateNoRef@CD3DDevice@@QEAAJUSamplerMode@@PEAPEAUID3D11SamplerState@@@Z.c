/*
 * XREFs of ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18028A5B0
 * Callers:
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180205DD0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x1802968E4 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802B5050 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD3D11SamplerDesc@SamplerMode@@SA?AUD3D11_SAMPLER_DESC@@U1@@Z @ 0x18010083C (-GetD3D11SamplerDesc@SamplerMode@@SA-AUD3D11_SAMPLER_DESC@@U1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::GetD3DSamplerStateNoRef(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  int v7; // eax
  __int64 D3D11SamplerDesc; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int16 v14; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int8 v15; // [rsp+32h] [rbp-A6h]
  int v16[14]; // [rsp+40h] [rbp-98h] BYREF
  _OWORD v17[3]; // [rsp+78h] [rbp-60h] BYREF
  int v18; // [rsp+A8h] [rbp-30h]

  v3 = 0;
  v6 = a1 + 8 * (a2[2] + 4 * (a2[1] + 4LL * *a2));
  if ( *(_QWORD *)(v6 + 1832) )
    goto LABEL_10;
  v14 = *(_WORD *)a2;
  if ( !HIBYTE(v14) || (v7 = 37120, !a2[2]) )
    v7 = 37632;
  if ( *(_DWORD *)(a1 + 584) < v7 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0xC24u, 0LL);
    return v3;
  }
  v14 = *(_WORD *)a2;
  v15 = a2[2];
  D3D11SamplerDesc = SamplerMode::GetD3D11SamplerDesc(v16, &v14);
  v9 = *(__int64 **)(a1 + 552);
  v17[0] = *(_OWORD *)D3D11SamplerDesc;
  v17[1] = *(_OWORD *)(D3D11SamplerDesc + 16);
  v17[2] = *(_OWORD *)(D3D11SamplerDesc + 32);
  v18 = *(_DWORD *)(D3D11SamplerDesc + 48);
  v10 = *v9;
  *(_QWORD *)(v6 + 1832) = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *, __int64))(v10 + 184))(v9, v17, v6 + 1832);
  v3 = v11;
  if ( v11 >= 0 )
LABEL_10:
    *a3 = *(_QWORD *)(v6 + 1832);
  else
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC29u, 0LL);
  return v3;
}
