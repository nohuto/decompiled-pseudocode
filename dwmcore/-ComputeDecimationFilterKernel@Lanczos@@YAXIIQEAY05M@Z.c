/*
 * XREFs of ?ComputeDecimationFilterKernel@Lanczos@@YAXIIQEAY05M@Z @ 0x1801FBFC8
 * Callers:
 *     ?ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x1801F2168 (-ComputeLanczosKernel@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     Lanczos::Lanczos @ 0x1801FC1C0 (Lanczos--Lanczos.c)
 */

void __fastcall Lanczos::ComputeDecimationFilterKernel(Lanczos *this, unsigned int a2, float *a3, float (*const a4)[6])
{
  double *v4; // rbx
  __int64 v6; // rdx
  __int64 v8; // rcx
  int v9; // esi
  double v10; // xmm7_8
  double v11; // xmm6_8
  int v12; // r14d
  double *v13; // rbp
  __int64 v14; // r15
  double v15; // xmm0_8
  __int64 v16; // rax
  double v17; // xmm0_8
  char v18; // [rsp+20h] [rbp-358h] BYREF

  v4 = (double *)&v18;
  v6 = 16 * (int)this % a2;
  v8 = 16 * (int)this / a2;
  v9 = -32;
  v10 = 16.0 / (double)(int)v8;
  do
  {
    v11 = 0.0;
    v12 = v9;
    v13 = v4;
    v14 = 6LL;
    do
    {
      v15 = Lanczos::Lanczos(v8, v6) * v10;
      v12 += 16;
      *v13 = v15;
      v11 = v11 + v15;
      ++v13;
      --v14;
    }
    while ( v14 );
    v16 = 6LL;
    do
    {
      v17 = *v4++;
      *a3++ = v17 / v11;
      --v16;
    }
    while ( v16 );
    --v9;
    v4 = v13;
  }
  while ( v9 > -48 );
}
