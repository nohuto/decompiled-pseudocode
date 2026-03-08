/*
 * XREFs of ??$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXAEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z @ 0x1802B2EDC
 * Callers:
 *     ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x1802B317C (-ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ApplyRangeColorKey<_D3DCOLORVALUE>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        float *a5,
        float *a6)
{
  int v6; // r8d
  __int64 v7; // rbx
  int v8; // edx
  float *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4

  v6 = 0;
  if ( *(int *)(a1 + 12) > 0 )
  {
    v7 = a2;
    do
    {
      v8 = 0;
      if ( *(int *)(a1 + 8) > 0 )
      {
        v9 = (float *)(a4 + 4);
        do
        {
          v10 = v9[2];
          if ( v10 >= a5[3] && a6[3] >= v10 )
          {
            v11 = *(v9 - 1);
            if ( v11 >= *a5 && *a6 >= v11 && *v9 >= a5[1] && a6[1] >= *v9 )
            {
              v12 = v9[1];
              if ( v12 >= a5[2] && a6[2] >= v12 )
                *(_OWORD *)(v9 - 1) = 0LL;
            }
          }
          v9 += 4;
          ++v8;
        }
        while ( v8 < *(_DWORD *)(a1 + 8) );
      }
      a4 += v7;
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a1 + 12) );
  }
}
