/*
 * XREFs of PopUserShutdownCancelled @ 0x1406EADD4
 * Callers:
 *     PoUserShutdownCancelled @ 0x1406EADA0 (PoUserShutdownCancelled.c)
 *     PopUserShutdownDelayWorkerCallback @ 0x140990340 (PopUserShutdownDelayWorkerCallback.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14025DC0C (PpmEndHighPerfRequest.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 (__fastcall *__fastcall PopUserShutdownCancelled(int a1))(_QWORD)
{
  char v1; // di
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 (__fastcall *result)(_QWORD); // rax

  v1 = a1;
  v2 = 0;
  PopAcquirePolicyLock(a1);
  if ( PopUserShutdownInProgress )
  {
    KeCancelTimer(&PopUserShutdownDelayTimer);
    PopBsdShutdownInProgress = 0;
    PopUserShutdownInProgress = 0;
    v2 = 1;
  }
  PopReleasePolicyLock(v4, v3);
  result = qword_140C5AD50;
  if ( qword_140C5AD50 )
  {
    LOBYTE(v5) = v1;
    result = (__int64 (__fastcall *)(_QWORD))qword_140C5AD50(v5);
    v2 = (char)result;
  }
  if ( v2 )
    return (__int64 (__fastcall *)(_QWORD))PpmEndHighPerfRequest(3);
  return result;
}
