/*
 * XREFs of ?GetProperty@?$CParticleGeneratorGeneratedT@VCParticleGenerator@@VCPropertyChangeResource@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1801C1640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGeneratorGeneratedT<CParticleGenerator,CPropertyChangeResource>::GetProperty(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  __m128i v10; // xmm0
  int v11; // xmm0_4
  __int64 v12; // xmm0_8
  int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx

  v3 = 0;
  if ( a2 > 9 )
  {
    v14 = a2 - 10;
    if ( !v14 )
    {
      v10 = _mm_loadu_si128((const __m128i *)(a1 + 172));
      goto LABEL_37;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v11 = *(_DWORD *)(a1 + 188);
      goto LABEL_14;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v11 = *(_DWORD *)(a1 + 192);
      goto LABEL_14;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 2;
        if ( v19 )
        {
          if ( v19 != 1 )
            return (unsigned int)-2147024809;
          v11 = *(_DWORD *)(a1 + 228);
        }
        else
        {
          v11 = *(_DWORD *)(a1 + 224);
        }
        goto LABEL_14;
      }
      v12 = *(_QWORD *)(a1 + 208);
      v13 = *(_DWORD *)(a1 + 216);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 196);
      v13 = *(_DWORD *)(a1 + 204);
    }
LABEL_19:
    *(_QWORD *)a3 = v12;
    *(_DWORD *)(a3 + 8) = v13;
    *(_DWORD *)(a3 + 72) = 52;
    goto LABEL_38;
  }
  if ( a2 == 9 )
  {
    v10 = _mm_loadu_si128((const __m128i *)(a1 + 156));
    goto LABEL_37;
  }
  if ( !a2 )
  {
    v12 = *(_QWORD *)(a1 + 80);
    v13 = *(_DWORD *)(a1 + 88);
    goto LABEL_19;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v12 = *(_QWORD *)(a1 + 92);
    v13 = *(_DWORD *)(a1 + 100);
    goto LABEL_19;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    v11 = *(_DWORD *)(a1 + 108);
    goto LABEL_14;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v11 = *(_DWORD *)(a1 + 112);
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = *(_DWORD *)(a1 + 116);
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v11 = *(_DWORD *)(a1 + 120);
LABEL_14:
    *(_DWORD *)a3 = v11;
    *(_DWORD *)(a3 + 72) = 18;
LABEL_38:
    *(_BYTE *)(a3 + 76) = 1;
    return v3;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = _mm_loadu_si128((const __m128i *)(a1 + 124));
    goto LABEL_37;
  }
  if ( v9 == 1 )
  {
    v10 = _mm_loadu_si128((const __m128i *)(a1 + 140));
LABEL_37:
    *(__m128i *)a3 = v10;
    *(_DWORD *)(a3 + 72) = 69;
    goto LABEL_38;
  }
  return (unsigned int)-2147024809;
}
