/*
 * XREFs of ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C000E0A0
 * Callers:
 *     <none>
 * Callees:
 *     bFToL @ 0x1C0002B7C (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C000DEC0 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0059750 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 */

__int64 __fastcall EXFORMOBJ::bMultiply(EXFORMOBJ *this, struct MATRIX *a2, struct MATRIX *a3, char a4)
{
  __int64 v4; // rbx
  float *v7; // rdx
  float *v8; // r8
  float *v9; // r11
  BOOL IsZero; // eax
  __int64 v11; // r8
  float *v12; // r9
  float *v13; // r10
  float *v14; // r11
  __int64 v15; // rdx
  EFLOAT *v16; // rcx
  float v18; // xmm6_4
  unsigned int v19; // r8d

  v4 = *(_QWORD *)this;
  if ( EFLOAT::bIsZero((struct MATRIX *)((char *)a2 + 4))
    && EFLOAT::bIsZero((EFLOAT *)(v7 + 2))
    && EFLOAT::bIsZero((EFLOAT *)(v8 + 1))
    && EFLOAT::bIsZero((EFLOAT *)(v8 + 2)) )
  {
    *(float *)v4 = *v8 * *v7;
    *(float *)(v4 + 12) = v8[3] * v7[3];
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
  }
  else
  {
    *(float *)v4 = (float)(v8[2] * *v9) + (float)(*v8 * *v7);
    *(float *)(v4 + 4) = (float)(v8[3] * *v9) + (float)(v8[1] * *v7);
    *(float *)(v4 + 8) = (float)(v8[2] * v7[3]) + (float)(*v8 * v7[2]);
    *(float *)(v4 + 12) = (float)(v8[3] * v7[3]) + (float)(v8[1] * v7[2]);
  }
  IsZero = EFLOAT::bIsZero((EFLOAT *)(v7 + 4));
  v16 = (EFLOAT *)(v15 + 20);
  if ( IsZero && EFLOAT::bIsZero(v16) )
  {
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(v11 + 16);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(v11 + 20);
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(v11 + 24);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v11 + 28);
  }
  else
  {
    v18 = (float)((float)(*v13 * *(float *)v16) + *(float *)(v11 + 16)) + (float)(*(float *)v11 * *v14);
    *(float *)(v4 + 16) = v18;
    *(float *)(v4 + 20) = (float)((float)(*(float *)(v11 + 12) * *(float *)v16) + *(float *)(v11 + 20))
                        + (float)(*v12 * *v14);
    if ( !(unsigned int)bFToL(v18, (int *)(v4 + 24), 6u)
      || !(unsigned int)bFToL(*(float *)(v4 + 20), (int *)(v4 + 28), v19) )
    {
      return 0LL;
    }
  }
  if ( (a4 & 1) != 0 )
    EXFORMOBJ::vComputeAccelFlags(this, a4 & 0x38);
  return 1LL;
}
