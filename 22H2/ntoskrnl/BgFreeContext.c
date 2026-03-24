/*
 * XREFs of BgFreeContext @ 0x1409F1038
 * Callers:
 *     BgkResumeFinished @ 0x1409905DC (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14021FA90 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14039BBA8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BBF8 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x1409F107C (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = qword_140C50648;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_140C134F0 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
