/*
 * XREFs of UnlockObjectAssignment @ 0x1C0038710
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0038040 (UserDeleteW32Thread.c)
 *     HMFreeObject @ 0x1C004F310 (HMFreeObject.c)
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00C5EA0 (DestroyProcessInfo.c)
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
