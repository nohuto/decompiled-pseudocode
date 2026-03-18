/*
 * XREFs of PspAllocateAndQueryNotificationChannel @ 0x140678C4C
 * Callers:
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140239790 (ExConvertExclusiveToSharedLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14041D180 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x14041D320 (ZwDeleteWnfStateName.c)
 *     PspLockRootJobExclusive @ 0x140678FCC (PspLockRootJobExclusive.c)
 *     PspDispatchWakeNotification @ 0x140679280 (PspDispatchWakeNotification.c)
 *     PspComputeReportWakeFilter @ 0x1406793A4 (PspComputeReportWakeFilter.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140679440 (RtlGetOwnerSecurityDescriptor.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1406FFE90 (PspUnlockJob.c)
 *     ObReleaseObjectSecurityEx @ 0x140722890 (ObReleaseObjectSecurityEx.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x1407248C0 (ObpGetObjectSecurity.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     PsReferenceEffectiveToken @ 0x1407B3B60 (PsReferenceEffectiveToken.c)
 *     RtlpAddKnownAce @ 0x1407B4900 (RtlpAddKnownAce.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  bool v3; // zf
  char v7; // r13
  __int64 v8; // rdx
  int ObjectSecurity; // edi
  __int64 v10; // r9
  PSECURITY_DESCRIPTOR v11; // r12
  void *v12; // r15
  ACL *PoolWithTag; // rax
  ACL *v14; // r15
  char v15; // r15
  PVOID v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  char v20; // [rsp+40h] [rbp-59h] BYREF
  char v21; // [rsp+41h] [rbp-58h] BYREF
  BOOLEAN OwnerDefaulted[2]; // [rsp+42h] [rbp-57h] BYREF
  int v23; // [rsp+44h] [rbp-55h] BYREF
  __int64 v24; // [rsp+48h] [rbp-51h] BYREF
  PVOID TokenInformation; // [rsp+50h] [rbp-49h] BYREF
  ULONG AclLength; // [rsp+58h] [rbp-41h]
  PSID Owner; // [rsp+60h] [rbp-39h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp-31h] BYREF
  __int64 v29; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v30[8]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v31; // [rsp+80h] [rbp-19h]
  _OWORD v32[2]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+Fh]
  __int64 v34; // [rsp+B0h] [rbp+17h] BYREF

  v3 = (*(_DWORD *)(a2 + 1512) & 0x800) == 0;
  v20 = 0;
  v21 = 0;
  v29 = 0LL;
  Owner = 0LL;
  v7 = 0;
  SecurityDescriptor = 0LL;
  v24 = 0LL;
  memset(v32, 0, sizeof(v32));
  v33 = 0LL;
  v23 = 0;
  TokenInformation = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  if ( !v3 )
  {
    v15 = 1;
    PspLockRootJobExclusive(a2, a1, &v24);
    v17 = v24;
    if ( a2 != v24 )
    {
      ExConvertExclusiveToSharedLite((PERESOURCE)(v24 + 56));
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    }
    goto LABEL_12;
  }
  ObjectSecurity = ObpGetObjectSecurity(a2, &SecurityDescriptor, &v20, 0LL);
  if ( ObjectSecurity < 0 )
    return (unsigned int)ObjectSecurity;
  v11 = SecurityDescriptor;
  if ( !SecurityDescriptor )
  {
    ObjectSecurity = -1073741790;
LABEL_27:
    LOBYTE(v8) = v20;
    ObReleaseObjectSecurityEx(v11, v8, a2, v10);
    return (unsigned int)ObjectSecurity;
  }
  ObjectSecurity = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, OwnerDefaulted);
  if ( ObjectSecurity < 0 )
    goto LABEL_27;
  v12 = (void *)PsReferenceEffectiveToken(a1, 1953654867LL, &v23, &v21, v30, 0LL);
  ObjectSecurity = SeQueryInformationToken(v12, TokenUser, &TokenInformation);
  if ( v23 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 184) + 1208LL), (unsigned __int64)v12, 0x74726853u);
  }
  else if ( v12 )
  {
    ObfDereferenceObjectWithTag(v12, 0x74726853u);
  }
  if ( ObjectSecurity < 0 )
    goto LABEL_27;
  AclLength = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, AclLength, 0x66577350u);
  v14 = PoolWithTag;
  if ( !PoolWithTag
    || (RtlCreateAcl(PoolWithTag, AclLength, 2u),
        RtlpAddKnownAce((int)v14, 2, 0, 0x80000000, Owner, 0),
        RtlpAddKnownAce((int)v14, 2, 0, 0x80000000, *(void **)TokenInformation, 0),
        RtlCreateSecurityDescriptor(v32, 1u),
        RtlSetDaclSecurityDescriptor(v32, 1u, v14, 0),
        ObjectSecurity = ZwCreateWnfStateName((__int64)&v34, 3LL),
        ExFreePoolWithTag(v14, 0x66577350u),
        ObjectSecurity < 0) )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    goto LABEL_27;
  }
  v15 = 0;
  PspLockRootJobExclusive(a2, a1, &v24);
  if ( (*(_DWORD *)(a2 + 1512) & 0x800) != 0 )
  {
    v17 = v24;
    v7 = 1;
  }
  else
  {
    *(_QWORD *)(a2 + 1072) = v34;
    PspComputeReportWakeFilter(a2, &v29, a2 + 1144, 0LL);
    PspEnumJobsAndProcessesInJobHierarchy(v16, 0LL, 2);
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 1512), 0xBu);
    _InterlockedIncrement64(&PspJobTimeLimitsRequest);
    v17 = v24;
  }
LABEL_12:
  *a3 = *(_OWORD *)(a2 + 1072);
  a3[1] = *(_OWORD *)(a2 + 1088);
  a3[2] = *(_OWORD *)(a2 + 1104);
  a3[3] = *(_OWORD *)(a2 + 1120);
  if ( v15 && a2 != v17 )
    ExReleaseResourceLite((PERESOURCE)(a2 + 56));
  PspUnlockJob(v17, a1);
  if ( v7 )
  {
    ZwDeleteWnfStateName((__int64)&v34, v18);
  }
  else if ( !v15 )
  {
    PspDispatchWakeNotification((PVOID)a2);
  }
  return 0LL;
}
