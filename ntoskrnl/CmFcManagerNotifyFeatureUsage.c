/*
 * XREFs of CmFcManagerNotifyFeatureUsage @ 0x140614CE8
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140263260 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     RtlNotifyFeatureUsage @ 0x1405A5220 (RtlNotifyFeatureUsage.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlReleaseSwapReference @ 0x1402F03F8 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x1402F04A0 (RtlAcquireSwapReference.c)
 *     CmpWorkItemQueueWork @ 0x14038897C (CmpWorkItemQueueWork.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x1405B25C4 (RtlpFcAddDelayedUsageReportToBuffer.c)
 */

__int64 __fastcall CmFcManagerNotifyFeatureUsage(__int64 a1, _QWORD *a2)
{
  char v3; // bp
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rcx
  int v8; // ebx

  v3 = 0;
  CurrentIrql = ObGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 1;
    --CurrentThread->KernelApcDisable;
  }
  v6 = (unsigned int)RtlAcquireSwapReference(qword_140C14030);
  v7 = (volatile signed __int32 *)qword_140C14058[v6];
  if ( !v7 )
  {
    v8 = -1073741670;
    goto LABEL_5;
  }
  v8 = RtlpFcAddDelayedUsageReportToBuffer(v7, a2);
  if ( v8 < 0 )
  {
LABEL_5:
    if ( (_DWORD)v6 != -1 )
      RtlReleaseSwapReference(qword_140C14030, v6);
    goto LABEL_7;
  }
  RtlReleaseSwapReference(qword_140C14030, v6);
  if ( byte_140C14050 )
  {
    if ( CurrentIrql >= 2u )
      KiInsertQueueDpc((ULONG_PTR)&dword_140C14068, 0LL, 0LL, 0LL, 0);
    else
      CmpWorkItemQueueWork(&stru_140C140A8);
  }
  v8 = 0;
LABEL_7:
  if ( v3 )
    KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
