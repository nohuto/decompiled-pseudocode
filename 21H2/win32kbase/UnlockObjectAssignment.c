/*
 * XREFs of UnlockObjectAssignment @ 0x1C00199F0
 * Callers:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 *     UserDeleteW32Thread @ 0x1C0019A70 (UserDeleteW32Thread.c)
 *     HMFreeObject @ 0x1C004E3F0 (HMFreeObject.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

void *__fastcall UnlockObjectAssignment(void **a1)
{
  void *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (void *)ObfDereferenceObject(result);
  }
  return result;
}
