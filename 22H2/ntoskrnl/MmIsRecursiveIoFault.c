/*
 * XREFs of MmIsRecursiveIoFault @ 0x14029CA10
 * Callers:
 *     IoPageReadEx @ 0x14029C7C0 (IoPageReadEx.c)
 * Callees:
 *     <none>
 */

BOOLEAN MmIsRecursiveIoFault(void)
{
  struct _KTHREAD *CurrentThread; // rcx
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  result = 0;
  if ( BYTE5(CurrentThread[1].Queue) || BYTE4(CurrentThread[1].Queue) == 1 )
    return 1;
  return result;
}
