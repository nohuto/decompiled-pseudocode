/*
 * XREFs of IopCloseIoCompletion @ 0x1406F7AA0
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x140292B28 (IopDeleteIoCompletionInternal.c)
 */

KSPIN_LOCK *__fastcall IopCloseIoCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *result; // rax

  result = (KSPIN_LOCK *)a2;
  if ( a4 == 1 )
  {
    LOBYTE(a2) = 1;
    return (KSPIN_LOCK *)IopDeleteIoCompletionInternal(result, a2);
  }
  return result;
}
