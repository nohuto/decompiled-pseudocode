void __fastcall Lanczos::ComputeInterpolationFilterKernel(Lanczos *this, float (*const a2)[6])
{
  float *v2; // rdi
  double *v3; // rbx
  int v4; // esi
  double v5; // xmm6_8
  int v6; // r14d
  double *v7; // rbp
  __int64 v8; // r15
  double v9; // xmm0_8
  __int64 v10; // rax
  double v11; // xmm0_8
  char v12; // [rsp+20h] [rbp-338h] BYREF

  v2 = (float *)this;
  v3 = (double *)&v12;
  v4 = -32;
  do
  {
    v5 = 0.0;
    v6 = v4;
    v7 = v3;
    v8 = 6LL;
    do
    {
      v9 = Lanczos::Lanczos(this, (float *)a2);
      *v7 = v9;
      v5 = v5 + v9;
      ++v7;
      v6 += 16;
      --v8;
    }
    while ( v8 );
    v10 = 6LL;
    do
    {
      v11 = *v3++;
      *v2++ = v11 / v5;
      --v10;
    }
    while ( v10 );
    --v4;
    v3 = v7;
  }
  while ( v4 > -48 );
}
