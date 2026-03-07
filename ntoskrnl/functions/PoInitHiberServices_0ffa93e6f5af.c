__int64 (*PoInitHiberServices())(void)
{
  int v0; // eax
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 (*result)(void); // rax
  int v9; // eax
  __int64 v10; // rbx
  char v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+48h] [rbp+18h] BYREF
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0;
  RtlInitUnicodeString(&PoHiberFileRoot, L"\\OSDataRoot");
  PopInitializeHibernateGlobals();
  v0 = PopHiberFileTypeReg;
  if ( PopHiberFileTypeReg != -1 || (v0 = PopHiberFileTypeDefaultReg, PopHiberFileTypeDefaultReg != -1) )
    PopHiberFileType = v0;
  PopAcquireTransitionLock(2);
  PopAcquirePolicyLock(v1);
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 1;
  PopHibernateEvaluation(v3, v2, &v11);
  PopReleasePolicyLock(v5, v4, v6);
  PopReleaseTransitionLock(2);
  PopTraceHibernatePolicyUpdate();
  if ( !ExIsSoftBoot() && (v11 || !PopHiberBootOptimizationEnabledReg) && (int)BcdOpenStore(0LL, 2LL, &v12) >= 0 )
  {
    v7 = v12;
    PopBcdEstablishResumeObject(v12, 0LL);
    PopBcdClearPendingResume(v7);
    BcdCloseStore(v7);
  }
  if ( (int)ExSubscribeWnfStateChange(
              (__int64)&PopHibernatePolicyWnfSubscription,
              (__int64)&WNF_PO_HIBERNATE_POLICY_CHANGE,
              1,
              0,
              (__int64)PopWnfHibernatePolicyCallback,
              (__int64)&PopAllowHibernateReg) < 0 )
    PopHibernatePolicyWnfSubscription = 0LL;
  v13 = -1LL;
  v12 = -1LL;
  if ( byte_140D53281 )
  {
    v9 = BcdOpenStore(0LL, 2LL, &v13);
    v10 = v13;
    if ( v9 >= 0 )
    {
      if ( (int)BcdOpenObject(v13, &GUID_CURRENT_BOOT_ENTRY, &v12) >= 0 )
      {
        BiDeleteElement(v12, 620757338LL);
        BcdFlushStore(v10);
      }
      if ( v12 != -1 )
        BcdCloseObject(v12);
    }
    if ( v10 != -1 )
      BcdCloseStore(v10);
  }
  result = qword_140C6ABA8;
  if ( qword_140C6ABA8 )
    return (__int64 (*)(void))qword_140C6ABA8();
  return result;
}
