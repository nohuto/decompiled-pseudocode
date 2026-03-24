/*
 * XREFs of ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C0023D00
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C002313C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0023B10 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     bFToL @ 0x1C0081930 (bFToL.c)
 */

__int64 __fastcall EXFORMOBJ::bMultiply(float **this, struct MATRIX *a2, struct MATRIX *a3, char a4)
{
  float *v4; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8

  v4 = *this;
  if ( *((float *)a2 + 1) == 0.0 && *((float *)a2 + 2) == 0.0 && *((float *)a3 + 1) == 0.0 && *((float *)a3 + 2) == 0.0 )
  {
    *v4 = *(float *)a3 * *(float *)a2;
    v4[3] = *((float *)a3 + 3) * *((float *)a2 + 3);
    v4[1] = 0.0;
    v4[2] = 0.0;
  }
  else
  {
    *v4 = (float)(*((float *)a3 + 2) * *((float *)a2 + 1)) + (float)(*(float *)a3 * *(float *)a2);
    v4[1] = (float)(*((float *)a3 + 3) * *((float *)a2 + 1)) + (float)(*((float *)a3 + 1) * *(float *)a2);
    v4[2] = (float)(*((float *)a3 + 2) * *((float *)a2 + 3)) + (float)(*(float *)a3 * *((float *)a2 + 2));
    v4[3] = (float)(*((float *)a3 + 3) * *((float *)a2 + 3)) + (float)(*((float *)a3 + 1) * *((float *)a2 + 2));
  }
  if ( *((float *)a2 + 4) == 0.0 && EFLOAT::bIsZero((struct MATRIX *)((char *)a2 + 20)) )
  {
    v4[4] = *((float *)a3 + 4);
    v4[5] = *((float *)a3 + 5);
    v4[6] = *((float *)a3 + 6);
    v4[7] = *((float *)a3 + 7);
  }
  else
  {
    v4[4] = (float)((float)(*((float *)a3 + 2) * *((float *)a2 + 5)) + *((float *)a3 + 4))
          + (float)(*(float *)a3 * *((float *)a2 + 4));
    v4[5] = (float)((float)(*((float *)a3 + 3) * *((float *)a2 + 5)) + *((float *)a3 + 5))
          + (float)(*((float *)a3 + 1) * *((float *)a2 + 4));
    if ( !(unsigned int)bFToL(this, v4 + 6, 6LL) || !(unsigned int)bFToL(v8, v4 + 7, v9) )
      return 0LL;
  }
  if ( (a4 & 1) != 0 )
    EXFORMOBJ::vComputeAccelFlags(this, a4 & 0x38);
  return 1LL;
}
