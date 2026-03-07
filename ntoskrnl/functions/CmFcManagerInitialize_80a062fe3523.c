__int64 *CmFcManagerInitialize()
{
  void *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rdx
  int v3; // edx
  __int64 v4; // r9
  __int64 *result; // rax

  memset(CmFcSystemManager, 0, 0x368uLL);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140C13F08);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140C13F10);
  v0 = &unk_140C13F28;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (void *)(v1 + 24);
  }
  while ( v2 != 1 );
  memset(qword_140C13F70, 0, 0xB8uLL);
  RtlInitializeSwapReference(qword_140C13F70);
  memset(&unk_140C13F88, 0, 0x90uLL);
  RtlInitializeSwapReference(qword_140C14030);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140C14048);
  LODWORD(dword_140C14068[0]) = 275;
  qword_140C140A0 = 0LL;
  qword_140C14078 = 0LL;
  qword_140C14080 = (__int64)CmFcpManagerDrainUsageNotificationsDpc;
  qword_140C14088 = (__int64)CmFcSystemManager;
  CmpWorkItemInitialize(
    (__int64)&stru_140C140A8,
    4,
    (__int64)CmFcpManagerDrainUsageNotificationsWorker,
    (__int64)CmFcSystemManager);
  CmpWorkItemInitialize((__int64)&unk_140C140F0, v3, (__int64)CmFcpManagerRetryUsageNotificationsWorker, v4);
  CmSiRWLockInitialize((PRTL_RUN_ONCE)&stru_140C14130);
  result = &qword_140C14138;
  qword_140C14140 = (__int64)&qword_140C14138;
  qword_140C14138 = (__int64)&qword_140C14138;
  return result;
}
