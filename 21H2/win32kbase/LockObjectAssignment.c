/*
 * XREFs of LockObjectAssignment @ 0x1C00983D0
 * Callers:
 *     HMAllocObjectEx @ 0x1C002D20C (HMAllocObjectEx.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00C2298 (HMChangeOwnerThreadWorker.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall LockObjectAssignment(void **a1, void *a2)
{
  void *v2; // rdi
  LONG_PTR result; // rax

  v2 = *a1;
  if ( a2 )
    result = ObfReferenceObject(a2);
  *a1 = a2;
  if ( v2 )
    return ObfDereferenceObject(v2);
  return result;
}
