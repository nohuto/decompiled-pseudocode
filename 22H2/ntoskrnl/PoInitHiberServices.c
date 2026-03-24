/*
 * XREFs of PoInitHiberServices @ 0x14079AED8
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14079A330 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     ExIsSoftBoot @ 0x14039AD70 (ExIsSoftBoot.c)
 *     ZwQuerySystemInformation @ 0x1403FA0E0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PopBcdClearPendingResume @ 0x140781C60 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140782180 (PopBcdEstablishResumeObject.c)
 *     PopAcquireTransitionLock @ 0x14078D978 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14078D9D4 (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x14079B350 (PopEnableHiberFile.c)
 *     PoDisableSleepStates @ 0x1408E3C70 (PoDisableSleepStates.c)
 *     PoShutdownBugCheck @ 0x1408E7610 (PoShutdownBugCheck.c)
 *     PopBcdClose @ 0x1408F589C (PopBcdClose.c)
 *     PopBcdOpen @ 0x1408F58B4 (PopBcdOpen.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x1409900E0 (EmClientQueryRuleState.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void PoInitHiberServices()
{
  _DWORD *v0; // rsi
  bool v1; // di
  int v2; // eax
  __int64 v3; // rbx
  _DWORD *PoolWithTag; // rax
  unsigned int v5; // r14d
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // [rsp+78h] [rbp+48h] BYREF
  __int64 v13; // [rsp+80h] [rbp+50h] BYREF

  v13 = 0LL;
  RtlInitUnicodeString(&PoHiberFileRoot, L"\\OSDataRoot");
  v0 = 0LL;
  if ( PopHiberEnabledReg == -1 )
    v1 = (unsigned int)(PopHiberEnabledDefaultReg - 1) > 0xFFFFFFFD;
  else
    v1 = PopHiberEnabledReg == 0;
  v2 = PopHiberFileTypeReg;
  if ( PopHiberFileTypeReg != -1 || (v2 = PopHiberFileTypeDefaultReg, PopHiberFileTypeDefaultReg != -1) )
    PopHiberFileType = v2;
  EmClientQueryRuleState(&GUID_EM_REMOVE_BAD_S3_PAGE_RULE, &v12);
  if ( !ExIsSoftBoot() && (int)PopBcdOpen(&v13) >= 0 )
  {
    v3 = v13;
    PopBcdEstablishResumeObject(v13, 0LL);
    PopBcdClearPendingResume(v3);
    PopBcdClose(v3);
  }
  if ( (unsigned int)ZwQuerySystemInformation(112LL, 0LL) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0LL, 0x72626968u);
    v0 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (int)ZwQuerySystemInformation(112LL, (__int64)PoolWithTag) >= 0 && *(_BYTE *)v0 && v0[1] != -1 )
      {
        v1 = 1;
        PoDisableSleepStates(2LL, 8LL, &v12);
      }
    }
  }
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( *(_DWORD *)((char *)&PopHiberForceDisabledReg + v6) )
    {
      v1 = 1;
      if ( (int)PoDisableSleepStates(*(unsigned int *)((char *)PopHiberForceDisabledReasonMap + v6), 8LL, &v12) < 0 )
      {
        LOBYTE(v11) = 1;
        PoShutdownBugCheck(v11, 160LL, 272LL, 0LL, 0LL, 0LL);
      }
    }
    ++v5;
    v6 += 4LL;
  }
  while ( v5 < 2 );
  PopAcquireTransitionLock(2);
  PopAcquirePolicyLock(v7);
  LOBYTE(v8) = !v1;
  PopEnableHiberFile(v8, 0LL);
  PopReleasePolicyLock(v10, v9);
  PopReleaseTransitionLock(2);
  if ( qword_140C543C8 )
    qword_140C543C8();
  if ( v0 )
    ExFreePoolWithTag(v0, 0x72626968u);
}
