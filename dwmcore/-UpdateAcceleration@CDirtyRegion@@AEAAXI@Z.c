void __fastcall CDirtyRegion::UpdateAcceleration(CDirtyRegion *this, unsigned int a2)
{
  __int64 v3; // r8
  __int64 v4; // rbx
  float *v5; // r9
  float *v6; // rax
  float *v7; // rcx
  float v8; // xmm1_4
  char v9; // r10
  float v10; // xmm2_4
  __int64 v11; // r9
  __int64 v12; // r10
  float *v13; // rdx
  float *v14; // rcx
  __int64 v15; // r9
  float v16; // xmm1_4
  char v17; // al
  float v18; // xmm2_4
  __int64 v19; // rax

  v3 = a2;
  if ( a2 )
  {
    v4 = a2;
    v5 = (float *)((char *)this + 16 * a2 + 1952);
    v6 = (float *)((char *)this + 32 * a2 + 2080);
    v7 = (float *)((char *)this + 1956);
    do
    {
      v8 = 0.0;
      v9 = *((_BYTE *)v5 + 12);
      if ( *((_BYTE *)v7 + 8) )
      {
        if ( !v9 )
          v8 = FLOAT_3_4028235e38;
      }
      else if ( !v9 )
      {
        v10 = (float)((float)(*v7 - v5[1]) * (float)(*v7 - v5[1]))
            + (float)((float)(*(v7 - 1) - *v5) * (float)(*(v7 - 1) - *v5));
        if ( v10 != 0.0 )
          v8 = (float)(v7[1] + v5[2]) / v10;
      }
      *v6 = v8;
      v7 += 4;
      ++v6;
      --v4;
    }
    while ( v4 );
  }
  v11 = a2 + 1;
  if ( (unsigned int)v11 < 8 )
  {
    v12 = 8 * v11 + 520;
    v13 = (float *)((char *)this + 16 * (unsigned int)v11 + 1956);
    v14 = (float *)((char *)this + 16 * v3 + 1952);
    v15 = (unsigned int)(8 - v11);
    do
    {
      v16 = 0.0;
      v17 = *((_BYTE *)v14 + 12);
      if ( *((_BYTE *)v13 + 8) )
      {
        if ( !v17 )
          v16 = FLOAT_3_4028235e38;
      }
      else if ( !v17 )
      {
        v18 = (float)((float)(*v13 - v14[1]) * (float)(*v13 - v14[1]))
            + (float)((float)(*(v13 - 1) - *v14) * (float)(*(v13 - 1) - *v14));
        if ( v18 != 0.0 )
          v16 = (float)(v13[1] + v14[2]) / v18;
      }
      v19 = v12 + v3;
      v13 += 4;
      v12 += 8LL;
      *((float *)this + v19) = v16;
      --v15;
    }
    while ( v15 );
  }
}
