/*
 * XREFs of ??0MLOCKFAST@@QEAA@XZ @ 0x1C026B494
 * Callers:
 *     GreCancelDC @ 0x1C029E32C (GreCancelDC.c)
 * Callees:
 *     <none>
 */

MLOCKFAST *__fastcall MLOCKFAST::MLOCKFAST(MLOCKFAST *this, __int64 a2, __int64 a3, __int64 a4)
{
  GreAcquireHmgrSemaphore(this, a2, a3, a4);
  return this;
}
