/*
 * XREFs of ExpTimeRefreshWork @ 0x140A8EE20
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x14024EB20 (KeSetTimer2.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExReleaseTimeRefreshLock @ 0x1407E2A30 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407E2A54 (ExAcquireTimeRefreshLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140A850B4 (ExUpdateSystemTimeFromCmos.c)
 */

_BOOL8 ExpTimeRefreshWork()
{
  struct _LIST_ENTRY *Blink; // rcx
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  do
  {
    ExAcquireTimeRefreshLock(1u);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0, 0);
    ExReleaseTimeRefreshLock();
    Blink = PsGetCurrentServerSiloGlobals()[56].Blink;
    if ( qword_140D534E0 )
      qword_140D534E0(Blink);
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v2[0] = 0LL;
  v2[1] = -1LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v2);
}
