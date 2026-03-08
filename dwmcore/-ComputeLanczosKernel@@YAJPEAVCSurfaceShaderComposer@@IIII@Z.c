/*
 * XREFs of ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x1801F2168
 * Callers:
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801F27D4 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z @ 0x1801FBFC8 (-ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z.c)
 *     ?ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z @ 0x1801FC0E0 (-ComputeInterpolationFilterKernel@Lanczos@@YAXQEAY05M@Z.c)
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180296ED0 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 */

__int64 __fastcall ComputeLanczosKernel(
        struct CSurfaceShaderComposer *a1,
        signed int a2,
        int a3,
        signed int a4,
        unsigned int a5)
{
  float *v9; // rdx
  float *v10; // r9
  float *v11; // r9
  __int64 v12; // rdx
  unsigned int *v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  _QWORD v21[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-C0h] BYREF
  signed int v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+54h] [rbp-ACh]
  signed int v25; // [rsp+58h] [rbp-A8h]
  float (*v26)[6]; // [rsp+5Ch] [rbp-A4h]
  char v27; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v28[96]; // [rsp+660h] [rbp+560h] BYREF
  unsigned int v29[96]; // [rsp+7E0h] [rbp+6E0h] BYREF

  memset_0(v22, 0, 0x620uLL);
  LODWORD(v26) = a5;
  v23 = a2;
  v24 = a3;
  v25 = a4;
  if ( a2 > a4 )
    Lanczos::ComputeDecimationFilterKernel((Lanczos *)(unsigned int)a2, a4, (unsigned int)v28, (float (*const)[6])v10);
  else
    Lanczos::ComputeInterpolationFilterKernel((Lanczos *)v28, (float (*const)[6])v9);
  if ( v24 > (int)v26 )
    Lanczos::ComputeDecimationFilterKernel(
      (Lanczos *)(unsigned int)v24,
      (unsigned int)v26,
      (unsigned int)v29,
      (float (*const)[6])v11);
  else
    Lanczos::ComputeInterpolationFilterKernel((Lanczos *)v29, (float (*const)[6])(unsigned int)v26);
  v12 = 0LL;
  v13 = (unsigned int *)&v27;
  v14 = 16LL;
  do
  {
    v15 = 6LL;
    do
    {
      *(v13 - 1) = v28[v12];
      v16 = v29[v12++];
      *v13 = v16;
      v13 += 4;
      --v15;
    }
    while ( v15 );
    --v14;
  }
  while ( v14 );
  v21[0] = 1568LL;
  v21[1] = v22;
  v17 = CSurfaceShaderComposer::SetScratchConstantBuffer(a1, v21, 0LL);
  v19 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x59u, 0LL);
  return v19;
}
