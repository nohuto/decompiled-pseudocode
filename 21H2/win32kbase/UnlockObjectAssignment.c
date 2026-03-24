/*
 * XREFs of UnlockObjectAssignment @ 0x1C0045F10
 * Callers:
 *     HMFreeObject @ 0x1C0007F10 (HMFreeObject.c)
 *     xxxDestroyThreadInfo @ 0x1C003EFB0 (xxxDestroyThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0045950 (DestroyProcessInfo.c)
 *     UserDeleteW32Thread @ 0x1C011C830 (UserDeleteW32Thread.c)
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
