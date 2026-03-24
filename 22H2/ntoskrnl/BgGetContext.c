/*
 * XREFs of BgGetContext @ 0x1409F1248
 * Callers:
 *     BgkResumePrepare @ 0x1409961C8 (BgkResumePrepare.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14021FA90 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14039BBA8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BBF8 (BgpFwAcquireLock.c)
 *     ResFwGetContext @ 0x1409F1298 (ResFwGetContext.c)
 */

__int64 BgGetContext()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v0 = 0LL;
  v2 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140C134F0 & 1) != 0 )
  {
    ResFwGetContext(&v2);
    v0 = v2;
  }
  BgpFwReleaseLock();
  return v0;
}
