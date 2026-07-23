/*
 * XREFs of VerifierExfTryAcquirePushLockShared @ 0x1409E5BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViExCheckAPCsDisabled @ 0x1409E5DC4 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExfTryAcquirePushLockShared(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0xEAuLL, a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExfTryAcquirePushLockShared)(a1);
}
