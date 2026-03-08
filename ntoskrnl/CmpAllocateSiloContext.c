/*
 * XREFs of CmpAllocateSiloContext @ 0x1407384A4
 * Callers:
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1407361AC (CmpGetOrCreateContextForSiloNoRef.c)
 * Callees:
 *     PsCreateSiloContext @ 0x140738810 (PsCreateSiloContext.c)
 */

__int64 __fastcall CmpAllocateSiloContext(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = PsCreateSiloContext(a1, 40, 1, (unsigned int)CmpFreeSiloContextCallback, (__int64)&v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    *a2 = v5;
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 24) = v4 + 16;
    *(_QWORD *)(v4 + 16) = v4 + 16;
    return 0LL;
  }
  return result;
}
