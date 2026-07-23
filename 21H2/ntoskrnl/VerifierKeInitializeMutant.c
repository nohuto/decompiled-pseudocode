/*
 * XREFs of VerifierKeInitializeMutant @ 0x1409DBBD0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutantCommon @ 0x1409DCFF0 (ViKeInitializeMutantCommon.c)
 *     VfDeadlockAcquireResource @ 0x1409DE5C8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1409DF1B4 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutant(int a1, char a2)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViKeInitializeMutantCommon();
  result = VfDeadlockInitializeResource(a1);
  if ( a2 )
    return VfDeadlockAcquireResource(a1, retaddr);
  return result;
}
