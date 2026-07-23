/*
 * XREFs of CmFcManagerInitialize @ 0x140A38D64
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140A38340 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     CmFcpInitializeSectionState @ 0x1406A6700 (CmFcpInitializeSectionState.c)
 *     CmSiRWLockInitialize @ 0x1407905A0 (CmSiRWLockInitialize.c)
 *     CmFcpWorkItemInitialize @ 0x1407D2700 (CmFcpWorkItemInitialize.c)
 *     RtlInitializeSwapReference @ 0x1407D43CC (RtlInitializeSwapReference.c)
 */

__int64 *CmFcManagerInitialize()
{
  _QWORD *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 *result; // rax

  memset(CmFcSystemManager, 0, 0x368uLL);
  CmSiRWLockInitialize(&RunOnce);
  CmSiRWLockInitialize(&stru_140C48190);
  v0 = qword_140C481A8;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (_QWORD *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset(qword_140C481F0, 0, 0xB8uLL);
  RtlInitializeSwapReference(qword_140C481F0);
  memset(&unk_140C48208, 0, 0x90uLL);
  RtlInitializeSwapReference(qword_140C482B0);
  CmSiRWLockInitialize(&stru_140C482C8);
  stru_140C482E8.TargetInfoAsUlong = 275;
  stru_140C482E8.DpcData = 0LL;
  stru_140C482E8.ProcessorHistory = 0LL;
  stru_140C482E8.DeferredRoutine = (PKDEFERRED_ROUTINE)CmFcpManagerDrainUsageNotificationsDpc;
  stru_140C482E8.DeferredContext = CmFcSystemManager;
  CmFcpWorkItemInitialize(
    (KSPIN_LOCK *)&stru_140C48328,
    v3,
    (KSPIN_LOCK)CmFcpManagerDrainUsageNotificationsWorker,
    (KSPIN_LOCK)CmFcSystemManager);
  CmFcpWorkItemInitialize(
    qword_140C48370,
    v4,
    (KSPIN_LOCK)CmFcpManagerRetryUsageNotificationsWorker,
    (KSPIN_LOCK)CmFcSystemManager);
  CmSiRWLockInitialize(&stru_140C483B0);
  result = &qword_140C483B8;
  qword_140C483C0 = (__int64)&qword_140C483B8;
  qword_140C483B8 = (__int64)&qword_140C483B8;
  return result;
}
