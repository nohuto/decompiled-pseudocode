/*
 * XREFs of SymCryptCrtGenerateInverses @ 0x1403F8190
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F1A48 (SymCryptRsakeyCalculatePrivateFields.c)
 * Callees:
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403F7FE0 (SymCryptCrtGenerateForTwoCoprimes.c)
 */

__int64 __fastcall SymCryptCrtGenerateInverses(
        int a1,
        PRKSEMAPHORE *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        PRKSEMAPHORE a6)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( a1 == 2 )
    SymCryptCrtGenerateForTwoCoprimes(*a2, a2[1], a3, *a4, a4[1], a5, a6);
  else
    return 32782;
  return v6;
}
