__int64 __fastcall PopEnableHiberFile(char a1)
{
  PVOID v2; // r14
  __int64 v3; // rbx
  PVOID v4; // r15
  unsigned __int64 HighestPhysicalPage; // rax
  unsigned int v6; // edi
  bool v7; // si
  unsigned int v8; // r11d
  unsigned int v9; // r11d
  unsigned int v10; // r11d
  HANDLE v11; // rbx
  ULONG_PTR DumpHibernateResources; // rax
  unsigned __int64 v13; // rsi
  void *Pool2; // rax
  int v15; // eax
  char v18[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-29h] BYREF
  LARGE_INTEGER v21; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-9h] BYREF
  UNICODE_STRING v24; // [rsp+78h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+17h] BYREF
  int v26; // [rsp+98h] [rbp+27h]

  v21.QuadPart = 0LL;
  v18[0] = 0;
  ResultLength = 0;
  DestinationString = 0LL;
  v26 = 0;
  v24 = 0LL;
  KeyHandle = 0LL;
  v2 = 0LL;
  KeyValueInformation = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  ValueName = 0LL;
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  PopRemoveReasonRecordByReasonCode();
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v6 = HighestPhysicalPage >= 0x100000000LL ? 8 : 0;
  v7 = HighestPhysicalPage >= 0x100000000LL;
  if ( !BYTE6(PopCapabilities) )
  {
    v6 = 22;
    v7 = 1;
  }
  if ( (unsigned __int8)PopCheckDisabledReason(2LL)
    || (unsigned __int8)PopCheckDisabledReason(1LL)
    || (unsigned __int8)PopCheckDisabledReason(15LL) )
  {
    v6 = v8;
    v7 = 1;
  }
  if ( (unsigned __int8)PopCheckDisabledReason(16LL) )
  {
    v6 = v9;
    LODWORD(KeyHandle) = -1073741637;
    goto LABEL_42;
  }
  if ( (unsigned __int8)PopCheckDisabledReason(13LL) )
  {
    v6 = v10;
    v7 = 1;
  }
  if ( !a1 )
  {
    PopHiberEnabled = 0;
    if ( FileObject )
    {
      if ( (unsigned int)MmZeroPageFileAtShutdown() )
        PopZeroHiberFile(PopHiberInfo);
      ObfDereferenceObjectWithTag(FileObject, 0x62486F50u);
      ZwClose(PopHiberInfo);
      ExFreePoolWithTag(qword_140C3CA78, 0x72626968u);
      memset(&PopHiberInfo, 0, 0xD8uLL);
      v4 = qword_140C3CAB0;
      v2 = MemoryMap;
      BYTE8(PopCapabilities) = 0;
      byte_140C3D6F6 = 0;
      byte_140C3D6F2 = 0;
      v15 = PopResetCurrentPolicies();
LABEL_32:
      LODWORD(KeyHandle) = v15;
      v3 = 0LL;
      if ( !v6 )
        goto LABEL_33;
      goto LABEL_42;
    }
LABEL_31:
    v15 = 0;
    goto LABEL_32;
  }
  if ( FileObject )
    goto LABEL_31;
  dword_140C3CA84 = 1601;
  dword_140C3CAA4 = 1;
  byte_140C3CAA1 = 0;
  dword_140C3CB28 = 0;
  if ( (int)PopOpenPowerKey((__int64)&KeyHandle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MaxHuffRatio");
    v11 = KeyHandle;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      dword_140C3CAA4 = HIDWORD(KeyValueInformation);
      if ( (unsigned int)(HIDWORD(KeyValueInformation) - 1) > 0x62 )
        dword_140C3CAA4 = 1;
    }
    RtlInitUnicodeString(&ValueName, L"HybridBootAnimationTime");
    v26 = 0;
    KeyValueInformation = 0LL;
    if ( ZwQueryValueKey(v11, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      dword_140C3CA84 = HIDWORD(KeyValueInformation);
    }
    RtlInitUnicodeString(&v24, L"MultiPhaseResumeDisabled");
    v26 = 0;
    KeyValueInformation = 0LL;
    if ( ZwQueryValueKey(v11, &v24, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      byte_140C3CAA1 = HIDWORD(KeyValueInformation) == 1;
      dword_140C3CB28 |= 0x20u;
    }
    ZwClose(v11);
  }
  PopHiberEnabled = 1;
  if ( v7 )
  {
    v15 = -1073741637;
    goto LABEL_32;
  }
  DumpHibernateResources = MmAllocateDumpHibernateResources(0x13000uLL);
  v3 = DumpHibernateResources;
  if ( !DumpHibernateResources )
  {
    v6 = 23;
LABEL_57:
    LODWORD(KeyHandle) = -1073741670;
    goto LABEL_42;
  }
  v13 = DumpHibernateResources + 0x200000;
  if ( (DumpHibernateResources & 0x1FFFFF) != 0 )
    v13 = (DumpHibernateResources + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  if ( v13 - DumpHibernateResources >= 0xA000 )
    v13 = DumpHibernateResources;
  PopCalculateHiberFileSize(&v21, (unsigned __int8 *)v18);
  LODWORD(KeyHandle) = PopCreateHiberFile(v21);
  if ( (int)KeyHandle < 0 )
  {
    v6 = 6;
    goto LABEL_42;
  }
  qword_140C3CA88 = v3;
  qword_140C3CA90 = v13;
  v3 = 0LL;
  Pool2 = (void *)ExAllocatePool2(64LL, 456LL, 1885433160LL);
  v2 = Pool2;
  if ( !Pool2 )
  {
    v6 = 24;
    goto LABEL_57;
  }
  MemoryMap = Pool2;
  v2 = 0LL;
  LODWORD(KeyHandle) = PopPreallocateHibernateMemory();
  if ( (int)KeyHandle >= 0 )
  {
    LODWORD(KeyHandle) = 1;
    EmClientQueryRuleState(EM_RULE_DISABLE_MULTI_PHASE_RESUME, &KeyHandle);
    if ( (_DWORD)KeyHandle == 2 )
    {
      dword_140C3CB28 |= 0x10u;
      byte_140C3CAA1 = 1;
    }
    byte_140C3D6F6 = v18[0];
    BYTE8(PopCapabilities) = 1;
    if ( !(_DWORD)InitSafeBootMode )
      byte_140C3D6F2 = 1;
    if ( (BYTE8(PopBsdPowerTransitionAtBoot) & 1) == 0 )
      PopClearHiberFileSignature();
    goto LABEL_31;
  }
  v6 = 25;
LABEL_42:
  PopLogSleepDisabled(v6, 8LL, &KeyHandle, 4LL);
  if ( v3 )
    MmReleaseDumpHibernateResources(v3, 77824LL);
LABEL_33:
  if ( v4 )
  {
    MmReturnChargesToLockPagedPool(v4, Length);
    ExFreePoolWithTag(v4, 0);
    memset(&qword_140C3CAB0, 0, 0x78uLL);
  }
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x70616D48u);
    MemoryMap = 0LL;
  }
  return (unsigned int)KeyHandle;
}
