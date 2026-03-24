/*
 * XREFs of ?ConfigureSampler@CRenderingTechnique@@QEAAXIW4Enum@InterpolationMode@@PEAUShaderLinkingSamplerDesc@@AEBUSurfaceSamplerData@1@@Z @ 0x180053340
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180052640 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800F3FFF (memcmp_0.c)
 */

char __fastcall CRenderingTechnique::ConfigureSampler(__int64 a1, unsigned int a2, char a3, _BYTE *a4, float *Buf2)
{
  __int64 v6; // rcx
  char v7; // dl
  int v8; // eax
  __int64 v9; // rsi

  v6 = 44LL * a2;
  if ( a4[22] )
    goto LABEL_13;
  v7 = *(_BYTE *)(v6 + a1 + 79);
  a4[19] = v7;
  LOBYTE(v8) = Buf2[2] <= *Buf2 || Buf2[3] <= Buf2[1];
  if ( *(_BYTE *)(v6 + a1 + 78) && !(_BYTE)v8 )
  {
    a4[18] = 1;
    a4[16] = *(_BYTE *)(v6 + a1 + 76);
    a4[17] = *(_BYTE *)(v6 + a1 + 77);
    LOBYTE(v8) = a3 == 1 && (*(_BYTE *)(v6 + a1 + 76) == 2 || *(_BYTE *)(v6 + a1 + 77) == 2);
    a4[20] = v8;
  }
  if ( a4[18] || v7 )
  {
LABEL_13:
    v9 = v6 + a1;
    v8 = memcmp_0((const void *)(v6 + a1 + 80), Buf2, 0x20uLL);
    if ( v8 )
    {
      *(_OWORD *)(v9 + 80) = *(_OWORD *)Buf2;
      *(_OWORD *)(v9 + 96) = *((_OWORD *)Buf2 + 1);
      *(_BYTE *)(a1 + 252) = 1;
    }
  }
  return v8;
}
