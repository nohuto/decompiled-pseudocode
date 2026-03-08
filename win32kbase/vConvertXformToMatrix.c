/*
 * XREFs of vConvertXformToMatrix @ 0x1C000DEE0
 * Callers:
 *     GreExtCreateRegion @ 0x1C0019830 (GreExtCreateRegion.c)
 * Callees:
 *     bFToL @ 0x1C0002B7C (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C000DEC0 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?bIs1@EFLOAT@@QEBAHXZ @ 0x1C000DFC8 (-bIs1@EFLOAT@@QEBAHXZ.c)
 */

__int64 __fastcall vConvertXformToMatrix(float *a1, _DWORD *a2)
{
  float *v2; // rdi
  float v4; // xmm0_4
  unsigned int v5; // r8d
  __int64 result; // rax
  int v7; // edx
  int v8; // edx

  v2 = (float *)(a2 + 5);
  *a2 = *(_DWORD *)a1;
  a2[1] = *((_DWORD *)a1 + 1);
  a2[2] = *((_DWORD *)a1 + 2);
  a2[3] = *((_DWORD *)a1 + 3);
  v4 = a1[4];
  *((float *)a2 + 4) = v4;
  a2[5] = *((_DWORD *)a1 + 5);
  if ( !(unsigned int)bFToL(v4, a2 + 6, 6u) )
    a2[6] = 0;
  if ( !(unsigned int)bFToL(*v2, a2 + 7, v5) )
    a2[7] = 0;
  a2[8] = 32;
  if ( *((float *)a2 + 4) == *v2 && EFLOAT::bIsZero((EFLOAT *)v2) )
    a2[8] = 96;
  result = EFLOAT::bIsZero((EFLOAT *)(a2 + 1));
  if ( (_DWORD)result )
  {
    result = EFLOAT::bIsZero((EFLOAT *)(a2 + 2));
    if ( (_DWORD)result )
    {
      a2[8] = v7 | 1;
      result = EFLOAT::bIs1((EFLOAT *)a2);
      if ( (_DWORD)result )
      {
        result = EFLOAT::bIs1((EFLOAT *)(a2 + 3));
        if ( (_DWORD)result )
          a2[8] = v8 | 2;
      }
    }
  }
  return result;
}
