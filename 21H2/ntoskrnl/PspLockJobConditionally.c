/*
 * XREFs of PspLockJobConditionally @ 0x140616368
 * Callers:
 *     PspJobDelete @ 0x140287530 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405D7F68 (PspSetJobIoRateControl.c)
 *     PspSendProcessNotificationToJobChain @ 0x140605088 (PspSendProcessNotificationToJobChain.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     PspRemoveProcessFromJobChain @ 0x140616398 (PspRemoveProcessFromJobChain.c)
 *     PspSetNetRateControl @ 0x1409098C4 (PspSetNetRateControl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall PspLockJobConditionally(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = 0;
  while ( a1 != *a2 )
  {
    ++v2;
    ++a2;
    if ( v2 )
    {
      LOBYTE(v2) = ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      return v2;
    }
  }
  return v2;
}
