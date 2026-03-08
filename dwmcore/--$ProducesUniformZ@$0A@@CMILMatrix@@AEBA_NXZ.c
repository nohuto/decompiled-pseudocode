/*
 * XREFs of ??$ProducesUniformZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180061FEC
 * Callers:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800620E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18026C728 (--$IsPure2DUniformZ@$0A@@CMILMatrix@@AEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::ProducesUniformZ<0>(__int64 a1)
{
  float v1; // xmm0_4
  char v2; // dl

  if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0)
                     + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0))
             + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) != 1.0 )
    return 0;
  v1 = *(float *)(a1 + 8);
  *(_BYTE *)(a1 + 65) = *(_BYTE *)(a1 + 65) & 0xCF | 0x10;
  if ( v1 != 0.0 || *(float *)(a1 + 24) != 0.0 )
    return 0;
  v2 = 1;
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a1 + 64) & 0xF3 | 4;
  return v2;
}
