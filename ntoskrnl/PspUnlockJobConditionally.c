/*
 * XREFs of PspUnlockJobConditionally @ 0x1406FB418
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     PspSendProcessNotificationToJobChain @ 0x1406F84CC (PspSendProcessNotificationToJobChain.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406FAE20 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspRemoveProcessFromJobChain @ 0x1406FB110 (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407512E4 (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetJobIoRateControl @ 0x140752E58 (PspSetJobIoRateControl.c)
 *     PspSetNetRateControl @ 0x1409B0054 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 */

void __fastcall PspUnlockJobConditionally(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = 0;
  while ( a1 != *a2 )
  {
    ++v2;
    ++a2;
    if ( v2 )
    {
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
      return;
    }
  }
}
