__int64 __fastcall ConvertToMatrix_3x4(const struct _D3DKMDT_GAMMA_RAMP *a1, struct _D3DKMDT_GAMMA_RAMP *a2)
{
  unsigned int v2; // ebx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // rbp
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v6; // rdi
  struct D3DDDI_DXGI_RGB *v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // ecx
  __int64 v12; // r8
  int v13; // xmm0_4
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v14; // rcx

  v2 = 0;
  if ( a1->Type == (D3DDDI_GAMMARAMP_MATRIX_3x4|D3DDDI_GAMMARAMP_DEFAULT) )
  {
    pRgb256x3x16 = a1->Data.pRgb256x3x16;
    v6 = a2->Data.pRgb256x3x16;
    *(_DWORD *)&v6->Red[24] = 1065353216;
    v7 = (struct D3DDDI_DXGI_RGB *)&v6->Red[26];
    if ( *(_DWORD *)&pRgb256x3x16[32].Red[22] == 1 )
      memmove(v7, &pRgb256x3x16[32].Red[24], 0xC000uLL);
    else
      InitializeIdentityLut(v7, 0x1000u, 0.0, 1.0);
    if ( *(_DWORD *)&pRgb256x3x16[32].Red[2] == 1 )
    {
      v9 = 0LL;
      v10 = 3LL;
      do
      {
        v11 = 0;
        v12 = 0LL;
        do
        {
          if ( v11 >= 3 )
            v13 = 0;
          else
            v13 = *(_DWORD *)&pRgb256x3x16[32].Red[2 * v9 + 4 + 2 * v12];
          *(_DWORD *)v6->Red = v13;
          ++v11;
          v6 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)v6 + 4);
          ++v12;
        }
        while ( v11 < 4 );
        v9 += 3LL;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      InitializeIdentityMatrix((float *)v6->Red, v8, 4u);
    }
  }
  else if ( (unsigned int)(a1->Type - 2) <= 1 )
  {
    v14 = a2->Data.pRgb256x3x16;
    *(_DWORD *)&v14->Red[24] = 1065353216;
    InitializeIdentityMatrix((float *)v14->Red, (unsigned int)a2, 4u);
    return (unsigned int)ColorSpaceTransformCombine(0LL, a1, a2);
  }
  return v2;
}
