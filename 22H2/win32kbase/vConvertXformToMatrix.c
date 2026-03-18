/*
 * XREFs of vConvertXformToMatrix @ 0x1C0001B20
 * Callers:
 *     GreExtCreateRegion @ 0x1C007C890 (GreExtCreateRegion.c)
 * Callees:
 *     ?bIs1@EFLOAT@@QEBAHXZ @ 0x1C0001B00 (-bIs1@EFLOAT@@QEBAHXZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0001C08 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00038EC (bFToL.c)
 */

__int64 __fastcall vConvertXformToMatrix(float *a1, float *a2)
{
  EFLOAT *v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax
  int v7; // edx
  int v8; // edx

  v2 = (EFLOAT *)(a2 + 5);
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[3];
  a2[4] = a1[4];
  a2[5] = a1[5];
  if ( !(unsigned int)bFToL(a1, a2 + 6, 6LL) )
    a2[6] = 0.0;
  if ( !(unsigned int)bFToL(v4, a2 + 7, v5) )
    a2[7] = 0.0;
  *((_DWORD *)a2 + 8) = 32;
  if ( a2[4] == *(float *)v2 && (unsigned int)EFLOAT::bIsZero(v2) )
    *((_DWORD *)a2 + 8) = 96;
  result = EFLOAT::bIsZero((EFLOAT *)(a2 + 1));
  if ( (_DWORD)result )
  {
    result = EFLOAT::bIsZero((EFLOAT *)(a2 + 2));
    if ( (_DWORD)result )
    {
      *((_DWORD *)a2 + 8) = v7 | 1;
      result = EFLOAT::bIs1((EFLOAT *)a2);
      if ( (_DWORD)result )
      {
        result = EFLOAT::bIs1((EFLOAT *)(a2 + 3));
        if ( (_DWORD)result )
          *((_DWORD *)a2 + 8) = v8 | 2;
      }
    }
  }
  return result;
}
