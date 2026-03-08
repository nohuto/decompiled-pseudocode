/*
 * XREFs of ?bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z @ 0x1C0002E84
 * Callers:
 *     NtGdiModifyWorldTransform @ 0x1C0002990 (NtGdiModifyWorldTransform.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0016964 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall bWorldMatrixInRange(struct MATRIX *a1)
{
  unsigned int v1; // r9d
  unsigned int v3; // edx
  int IsZero; // eax
  float *v5; // r8
  float *v6; // r10
  EFLOAT *v7; // r11
  __int64 v8; // rcx
  EFLOAT *v9; // rcx
  EFLOAT *v10; // r10
  unsigned int v11; // edx
  float v12; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  if ( *((float *)a1 + 1) == 0.0 && *((float *)a1 + 2) == 0.0 )
  {
    if ( *(float *)a1 != 0.0 && *((float *)a1 + 3) != 0.0 )
      return v1;
    return 0;
  }
  IsZero = EFLOAT::bIsZero(a1);
  v9 = (EFLOAT *)(v8 + 12);
  if ( IsZero && (unsigned int)EFLOAT::bIsZero(v9) )
  {
    if ( (unsigned int)EFLOAT::bIsZero(v7) || (unsigned int)EFLOAT::bIsZero(v10) )
      return v3;
  }
  else
  {
    v12 = (float)(*(float *)v9 * *v5) - (float)(*(float *)v7 * *v6);
    if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v12) )
      return v11;
  }
  return v1;
}
