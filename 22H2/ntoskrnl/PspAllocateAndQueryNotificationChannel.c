/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x14065CC90
 * Callers:
 *     NtQueryInformationJobObject @ 0x140616CE0 (NtQueryInformationJobObject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x140309910 (ExConvertExclusiveToSharedLite.c)
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1403FB3A0 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x1403FB540 (ZwDeleteWnfStateName.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140618450 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140618B90 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x1406193EC (PspUnlockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x14065CFF0 (PspLockRootJobExclusive.c)
 *     PspDispatchWakeNotification @ 0x14065D294 (PspDispatchWakeNotification.c)
 *     PspComputeReportWakeFilter @ 0x14065D308 (PspComputeReportWakeFilter.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x14065D3B0 (RtlGetOwnerSecurityDescriptor.c)
 *     SeQueryInformationToken @ 0x1406CF990 (SeQueryInformationToken.c)
 *     RtlpAddKnownAce @ 0x1406D5220 (RtlpAddKnownAce.c)
 *     PsReferenceEffectiveToken @ 0x1406D5B10 (PsReferenceEffectiveToken.c)
 *     ObReleaseObjectSecurity @ 0x1406D81D0 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1406D85C0 (ObpGetObjectSecurity.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D92C0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406D9330 (RtlCreateAcl.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  bool v3; // zf
  char v7; // r13
  char v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rdx
  int ObjectSecurity; // edi
  PSECURITY_DESCRIPTOR v13; // r12
  struct _DMA_ADAPTER *v14; // r15
  ACL *PoolWithTag; // rax
  ACL *v16; // r15
  _QWORD *v17; // rcx
  BOOLEAN MemoryAllocated; // [rsp+40h] [rbp-69h] BYREF
  char v19; // [rsp+41h] [rbp-68h] BYREF
  BOOLEAN OwnerDefaulted[6]; // [rsp+42h] [rbp-67h] BYREF
  __int64 v21; // [rsp+48h] [rbp-61h] BYREF
  int v22; // [rsp+50h] [rbp-59h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-51h] BYREF
  ULONG AclLength; // [rsp+60h] [rbp-49h]
  PSID Owner; // [rsp+68h] [rbp-41h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-39h] BYREF
  __int64 v27; // [rsp+78h] [rbp-31h] BYREF
  char v28; // [rsp+80h] [rbp-29h] BYREF
  __int64 v29; // [rsp+88h] [rbp-21h]
  _OWORD v30[2]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+7h]
  __int64 v32; // [rsp+B8h] [rbp+Fh] BYREF

  v3 = (*(_DWORD *)(a2 + 1320) & 0x800) == 0;
  MemoryAllocated = 0;
  v19 = 0;
  v27 = 0LL;
  Owner = 0LL;
  v7 = 0;
  SecurityDescriptor = 0LL;
  v21 = 0LL;
  memset(v30, 0, sizeof(v30));
  v31 = 0LL;
  v22 = 0;
  TokenInformation = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  if ( !v3 )
  {
    v8 = 1;
    PspLockRootJobExclusive(a2, a1, &v21);
    v9 = v21;
    if ( a2 != v21 )
    {
      ExConvertExclusiveToSharedLite((PERESOURCE)(v21 + 56));
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    }
    goto LABEL_4;
  }
  ObjectSecurity = ObpGetObjectSecurity(a2, &SecurityDescriptor, &MemoryAllocated);
  if ( ObjectSecurity < 0 )
    return (unsigned int)ObjectSecurity;
  v13 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    ObjectSecurity = -1073741790;
LABEL_25:
    ObReleaseObjectSecurity(v13, MemoryAllocated);
    return (unsigned int)ObjectSecurity;
  }
  ObjectSecurity = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, OwnerDefaulted);
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  v14 = (struct _DMA_ADAPTER *)PsReferenceEffectiveToken(
                                 a1,
                                 (unsigned int)&v22,
                                 (unsigned int)&v19,
                                 (unsigned int)&v28,
                                 0LL);
  ObjectSecurity = SeQueryInformationToken(v14, TokenUser, &TokenInformation);
  if ( v22 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 184) + 1208LL), v14);
  }
  else if ( v14 )
  {
    HalPutDmaAdapter(v14);
  }
  if ( ObjectSecurity < 0 )
    goto LABEL_25;
  AclLength = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, AclLength, 0x66577350u);
  v16 = PoolWithTag;
  if ( !PoolWithTag
    || (RtlCreateAcl(PoolWithTag, AclLength, 2u),
        RtlpAddKnownAce((int)v16, 2, 0, 0x80000000, Owner, 0),
        RtlpAddKnownAce((int)v16, 2, 0, 0x80000000, *(void **)TokenInformation, 0),
        RtlCreateSecurityDescriptor(v30, 1u),
        RtlSetDaclSecurityDescriptor(v30, 1u, v16, 0),
        ObjectSecurity = ZwCreateWnfStateName((__int64)&v32, 3LL),
        ExFreePoolWithTag(v16, 0x66577350u),
        ObjectSecurity < 0) )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    goto LABEL_25;
  }
  v8 = 0;
  PspLockRootJobExclusive(a2, a1, &v21);
  if ( (*(_DWORD *)(a2 + 1320) & 0x800) != 0 )
  {
    v9 = v21;
    v7 = 1;
  }
  else
  {
    *(_QWORD *)(a2 + 880) = v32;
    PspComputeReportWakeFilter(a2, &v27, a2 + 952, 0LL);
    PspEnumJobsAndProcessesInJobHierarchy(v17, 0, (int)PspEnableWakeCounters, (int)PspEnableProcessWakeCounters, 0LL, 2);
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 1320), 0xBu);
    _InterlockedIncrement64(&PspJobTimeLimitsRequest);
    v9 = v21;
  }
LABEL_4:
  *a3 = *(_OWORD *)(a2 + 880);
  a3[1] = *(_OWORD *)(a2 + 896);
  a3[2] = *(_OWORD *)(a2 + 912);
  a3[3] = *(_OWORD *)(a2 + 928);
  if ( v8 )
    PspUnlockJobConditionally(a2, &v21);
  PspUnlockJob(v9, a1);
  if ( v7 )
  {
    ZwDeleteWnfStateName((__int64)&v32, v10);
  }
  else if ( !v8 )
  {
    PspDispatchWakeNotification((PVOID)a2);
  }
  return 0LL;
}
