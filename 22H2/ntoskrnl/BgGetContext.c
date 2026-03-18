/*
 * XREFs of BgGetContext @ 0x140AF226C
 * Callers:
 *     BgkResumePrepare @ 0x140A99B34 (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140384860 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403848B0 (BgpFwAcquireLock.c)
 *     ResFwGetContext @ 0x140AF3010 (ResFwGetContext.c)
 */

__int64 BgGetContext()
{
  __int64 v1; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  v1 = 0LL;
  v2 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E4B0 & 1) != 0 )
  {
    ResFwGetContext(&v2);
    v1 = v2;
  }
  BgpFwReleaseLock();
  return v1;
}
