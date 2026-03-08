/*
 * XREFs of LockObjectAssignment @ 0x1C00A7CA0
 * Callers:
 *     HMAllocObjectEx @ 0x1C00122BC (HMAllocObjectEx.c)
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00AEC48 (HMChangeOwnerThreadWorker.c)
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
