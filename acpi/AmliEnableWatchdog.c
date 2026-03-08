/*
 * XREFs of AmliEnableWatchdog @ 0x1C0046DC8
 * Callers:
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AmliEnableWatchdog(char *DeferredContext)
{
  __int64 v2; // rbp
  BOOLEAN result; // al

  if ( AmliWatchdogEnabled )
  {
    v2 = (unsigned int)AmliWatchdogTimeout;
    if ( AmliWatchdogTimeout )
    {
      DeferredContext[88] = 1;
      KeInitializeDpc((PRKDPC)(DeferredContext + 24), AmliWatchdog, DeferredContext);
      KeInitializeTimer((PKTIMER)(DeferredContext + 104));
      *((_QWORD *)DeferredContext + 12) = MEMORY[0xFFFFF78000000008];
      return KeSetTimer(
               (PKTIMER)(DeferredContext + 104),
               (LARGE_INTEGER)(-10000000 * v2),
               (PKDPC)(DeferredContext + 24));
    }
  }
  return result;
}
