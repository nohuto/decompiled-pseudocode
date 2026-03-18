/*
 * XREFs of PoInitHiberServices @ 0x14080406C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14080CEA0 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x140374280 (ExIsSoftBoot.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     ExSubscribeWnfStateChange @ 0x1407DB2B0 (ExSubscribeWnfStateChange.c)
 *     PopAcquireTransitionLock @ 0x140802E90 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140802F44 (PopReleaseTransitionLock.c)
 *     PopBcdClearPendingResume @ 0x1408041B8 (PopBcdClearPendingResume.c)
 *     PopHibernateEvaluation @ 0x140804218 (PopHibernateEvaluation.c)
 *     PopBcdEstablishResumeObject @ 0x140804514 (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x140805378 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14080561C (BcdOpenStore.c)
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BcdCloseObject @ 0x140807480 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     PopInitializeHibernateGlobals @ 0x1408627D8 (PopInitializeHibernateGlobals.c)
 *     PopTraceHibernatePolicyUpdate @ 0x140863C5C (PopTraceHibernatePolicyUpdate.c)
 *     BcdFlushStore @ 0x140A5C298 (BcdFlushStore.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 (*PoInitHiberServices())(void)
{
  int v0; // eax
  int v1; // ecx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 (*result)(void); // rax
  int v11; // eax
  __int64 v12; // rbx
  char v13; // [rsp+40h] [rbp+10h] BYREF
  __int64 v14; // [rsp+48h] [rbp+18h] BYREF
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF

  v14 = 0LL;
  v13 = 0;
  RtlInitUnicodeString(&PoHiberFileRoot, L"\\OSDataRoot");
  PopInitializeHibernateGlobals();
  v0 = PopHiberFileTypeReg;
  if ( PopHiberFileTypeReg != -1 || (v0 = PopHiberFileTypeDefaultReg, PopHiberFileTypeDefaultReg != -1) )
    PopHiberFileType = v0;
  PopAcquireTransitionLock(2);
  PopAcquirePolicyLock(v1);
  v2 = PopAllowHibernateReg;
  LOBYTE(v3) = 1;
  LOBYTE(v4) = 1;
  PopHibernateEvaluation(v4, v3, &v13);
  PopReleasePolicyLock(v6, v5, v7);
  PopReleaseTransitionLock(2);
  LOBYTE(v8) = v13;
  PopTraceHibernatePolicyUpdate(v2, v8);
  if ( !ExIsSoftBoot() && (v13 || !PopHiberBootOptimizationEnabledReg) && (int)BcdOpenStore(0LL, 2LL, &v14) >= 0 )
  {
    v9 = v14;
    PopBcdEstablishResumeObject(v14, 0LL);
    PopBcdClearPendingResume(v9);
    BcdCloseStore(v9);
  }
  if ( (int)ExSubscribeWnfStateChange(
              (__int64)&PopHibernatePolicyWnfSubscription,
              (__int64)&WNF_PO_HIBERNATE_POLICY_CHANGE,
              1,
              0,
              (__int64)PopWnfHibernatePolicyCallback,
              (__int64)&PopAllowHibernateReg) < 0 )
    PopHibernatePolicyWnfSubscription = 0LL;
  v15 = -1LL;
  v14 = -1LL;
  if ( byte_140D53289 )
  {
    v11 = BcdOpenStore(0LL, 2LL, &v15);
    v12 = v15;
    if ( v11 >= 0 )
    {
      if ( (int)BcdOpenObject(v15, &GUID_CURRENT_BOOT_ENTRY, &v14) >= 0 )
      {
        BiDeleteElement(v14, 620757338LL);
        BcdFlushStore(v12);
      }
      if ( v14 != -1 )
        BcdCloseObject(v14);
    }
    if ( v12 != -1 )
      BcdCloseStore(v12);
  }
  result = qword_140C6B018;
  if ( qword_140C6B018 )
    return (__int64 (*)(void))qword_140C6B018();
  return result;
}
