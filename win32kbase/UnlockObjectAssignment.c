/*
 * XREFs of UnlockObjectAssignment @ 0x1C0070750
 * Callers:
 *     UserDeleteW32Thread @ 0x1C00702A0 (UserDeleteW32Thread.c)
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     HMFreeObject @ 0x1C0077F50 (HMFreeObject.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
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
