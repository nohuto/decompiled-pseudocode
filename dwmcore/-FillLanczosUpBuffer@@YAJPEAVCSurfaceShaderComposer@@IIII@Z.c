/*
 * XREFs of ?FillLanczosUpBuffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x1801F2570
 * Callers:
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801F27D4 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180296ED0 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 */

__int64 __fastcall FillLanczosUpBuffer(struct CSurfaceShaderComposer *a1, int a2, int a3, int a4, signed int a5)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD v9[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  float v11; // [rsp+48h] [rbp-30h]
  float v12; // [rsp+4Ch] [rbp-2Ch]
  float v13; // [rsp+50h] [rbp-28h]
  float v14; // [rsp+54h] [rbp-24h]
  __int64 v15; // [rsp+58h] [rbp-20h]

  v10 = 0LL;
  v15 = 0LL;
  v9[0] = 32LL;
  v11 = (float)a2;
  v12 = (float)a3;
  v9[1] = &v10;
  v13 = (float)a4;
  v14 = (float)a5;
  v5 = CSurfaceShaderComposer::SetScratchConstantBuffer(a1, v9, 0LL);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1Fu, 0LL);
  return v7;
}
