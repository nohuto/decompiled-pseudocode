/*
 * XREFs of PopEnableHiberFile @ 0x14079B350
 * Callers:
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 *     PoInitHiberServices @ 0x14079AED8 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x1407C4AA0 (PopNotifyPolicyDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1403A758C (PopOpenPowerKey.c)
 *     PopDisableS4Reason @ 0x1403AF5B8 (PopDisableS4Reason.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403F9D00 (ZwQueryValueKey.c)
 *     memset @ 0x140413800 (memset.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1406F441C (PopRemoveReasonRecordByReasonCode.c)
 *     MmReleaseDumpHibernateResources @ 0x140774230 (MmReleaseDumpHibernateResources.c)
 *     PopLogSleepDisabled @ 0x14077EB0C (PopLogSleepDisabled.c)
 *     PopCalculateHiberFileSize @ 0x14078D708 (PopCalculateHiberFileSize.c)
 *     PopClearHiberFileSignature @ 0x14078E594 (PopClearHiberFileSignature.c)
 *     MmAllocateDumpHibernateResources @ 0x14078EA9C (MmAllocateDumpHibernateResources.c)
 *     PopCheckDisabledReason @ 0x14079B864 (PopCheckDisabledReason.c)
 *     PopPreallocateHibernateMemory @ 0x14079B89C (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x14079BC20 (PopCreateHiberFile.c)
 *     PopResetCurrentPolicies @ 0x14079CB48 (PopResetCurrentPolicies.c)
 *     MmZeroPageFileAtShutdown @ 0x1408C4C44 (MmZeroPageFileAtShutdown.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C8530 (MmReturnChargesToLockPagedPool.c)
 *     PopSaveHibernateEnabled @ 0x1408E1674 (PopSaveHibernateEnabled.c)
 *     PopZeroHiberFile @ 0x1408E7514 (PopZeroHiberFile.c)
 *     EmClientQueryRuleState @ 0x1409900E0 (EmClientQueryRuleState.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopEnableHiberFile(char a1, char a2)
{
  char v4; // r14
  int v5; // eax
  int v6; // ebx
  char v7; // al
  char v8; // r11
  char v9; // di
  PVOID v10; // rdi
  PVOID v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  HANDLE v15; // rbx
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  PVOID PoolWithTag; // rax
  void *v20; // rbx
  char v22[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  __int64 v25; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING v28; // [rsp+78h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+17h] BYREF
  int v30; // [rsp+98h] [rbp+27h]

  v25 = 0LL;
  v22[0] = 0;
  ResultLength = 0;
  v30 = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v4 = 0;
  v28 = 0LL;
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  v5 = PopDisableS4Reason();
  if ( v5 )
    PopLogSleepDisabled(v5, 8, 0LL, 0LL);
  if ( !(unsigned __int8)PopCheckDisabledReason(2LL) && !(unsigned __int8)PopCheckDisabledReason(1LL) )
    PopCheckDisabledReason(15LL);
  if ( (unsigned __int8)PopCheckDisabledReason(16LL) )
    return (unsigned int)-1073741637;
  v7 = PopCheckDisabledReason(13LL);
  v9 = v8;
  if ( v7 )
    v9 = 1;
  if ( a1 )
  {
    if ( FileObject )
      return 0;
    dword_140C23E84 = 1;
    dword_140C23E64 = 1601;
    byte_140C23E81 = 0;
    dword_140C23F08 = 0;
    if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
      v15 = KeyHandle;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140C23E84 = HIDWORD(KeyValueInformation);
        if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
          dword_140C23E84 = 1;
      }
      RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
      v30 = 0;
      KeyValueInformation = 0LL;
      if ( ZwQueryValueKey(v15, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        dword_140C23E64 = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&v28, L"MultiPhaseResumeDisabled");
      v30 = 0;
      KeyValueInformation = 0LL;
      if ( ZwQueryValueKey(v15, &v28, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        byte_140C23E81 = HIDWORD(KeyValueInformation) == 1;
        dword_140C23F08 |= 0x20u;
      }
      ZwClose(v15);
    }
    if ( !PopHiberEnabled )
    {
      PopHiberEnabled = 1;
      v4 = 1;
    }
    if ( v9 )
    {
      v6 = -1073741637;
      goto LABEL_57;
    }
    DumpHibernateResources = MmAllocateDumpHibernateResources(0x13000uLL, v12, v13, v14);
    v17 = DumpHibernateResources;
    if ( !DumpHibernateResources )
      goto LABEL_35;
    v18 = DumpHibernateResources + 0x200000;
    if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
      v18 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
    if ( v18 - DumpHibernateResources >= 0xA000 )
      v18 = DumpHibernateResources;
    PopCalculateHiberFileSize(&v25, (unsigned __int8 *)v22);
    LODWORD(KeyHandle) = PopCreateHiberFile(v25);
    if ( (int)KeyHandle >= 0 )
    {
      qword_140C23E68 = v17;
      qword_140C23E70 = v18;
      v17 = 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C8uLL, 0x70616D48u);
      v20 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_35:
        v6 = -1073741670;
        goto LABEL_57;
      }
      memset(PoolWithTag, 0, 0x1C8uLL);
      MemoryMap = v20;
      v6 = PopPreallocateHibernateMemory();
      if ( v6 < 0 )
        goto LABEL_57;
      LODWORD(KeyHandle) = 1;
      EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
      if ( (_DWORD)KeyHandle == 2 )
      {
        dword_140C23F08 |= 0x10u;
        byte_140C23E81 = 1;
      }
      byte_140C233F6 = v22[0];
      BYTE8(PopCapabilities) = 1;
      if ( !InitSafeBootMode )
        byte_140C233F2 = 1;
      if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) == 0 )
        PopClearHiberFileSignature();
      v6 = 0;
    }
    else
    {
      PopLogSleepDisabled(6, 8, &KeyHandle, 4uLL);
      v6 = (int)KeyHandle;
    }
    if ( !v17 )
      goto LABEL_57;
    MmReleaseDumpHibernateResources(v17);
    v11 = 0LL;
    v10 = 0LL;
LABEL_53:
    if ( v10 )
    {
      MmReturnChargesToLockPagedPool(v10, Length);
      ExFreePoolWithTag(v10, 0);
      memset(&qword_140C23E90, 0, 0x78uLL);
    }
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x70616D48u);
      MemoryMap = 0LL;
    }
LABEL_57:
    if ( !v4 )
      return (unsigned int)v6;
    goto LABEL_58;
  }
  v4 = 1;
  PopHiberEnabled = 0;
  if ( FileObject )
  {
    if ( (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(*(HANDLE *)&PopHiberInfo);
    ObfDereferenceObjectWithTag(FileObject, 0x62486F50u);
    ZwClose(*(HANDLE *)&PopHiberInfo);
    ExFreePoolWithTag(qword_140C23E58, 0x72626968u);
    memset(&PopHiberInfo, 0, 0xD8uLL);
    v10 = qword_140C23E90;
    v11 = MemoryMap;
    BYTE8(PopCapabilities) = 0;
    byte_140C233F6 = 0;
    byte_140C233F2 = 0;
    v6 = PopResetCurrentPolicies();
    goto LABEL_53;
  }
  v6 = 0;
LABEL_58:
  if ( a2 )
    PopSaveHibernateEnabled();
  return (unsigned int)v6;
}
