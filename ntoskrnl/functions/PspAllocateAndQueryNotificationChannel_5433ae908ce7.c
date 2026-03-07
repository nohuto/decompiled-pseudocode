__int64 __fastcall PspAllocateAndQueryNotificationChannel(__int64 a1, __int64 a2, _OWORD *a3)
{
  bool v3; // zf
  ACL *v7; // r14
  PSECURITY_DESCRIPTOR v8; // rsi
  int ObjectSecurity; // eax
  int OwnerSecurityDescriptor; // edi
  void *v11; // r14
  unsigned __int8 *Src; // r13
  ACL *Pool2; // rax
  char v14; // r13
  _QWORD *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  char v19; // [rsp+40h] [rbp-59h]
  char v20; // [rsp+41h] [rbp-58h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+42h] [rbp-57h] BYREF
  _BYTE v22[5]; // [rsp+43h] [rbp-56h] BYREF
  __int64 v23; // [rsp+48h] [rbp-51h] BYREF
  int v24; // [rsp+50h] [rbp-49h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-41h] BYREF
  PVOID TokenInformation; // [rsp+60h] [rbp-39h] BYREF
  ULONG AclLength; // [rsp+68h] [rbp-31h]
  _BYTE v28[4]; // [rsp+6Ch] [rbp-2Dh] BYREF
  PSID Owner; // [rsp+70h] [rbp-29h] BYREF
  __int64 v30; // [rsp+78h] [rbp-21h] BYREF
  __int64 *v31; // [rsp+80h] [rbp-19h]
  _OWORD v32[2]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+Fh]
  __int64 v34; // [rsp+B0h] [rbp+17h] BYREF

  v3 = (*(_DWORD *)(a2 + 1536) & 0x800) == 0;
  v30 = 0LL;
  Owner = 0LL;
  v23 = 0LL;
  memset(v32, 0, sizeof(v32));
  v33 = 0LL;
  v7 = 0LL;
  v24 = 0;
  v8 = 0LL;
  v20 = 0;
  v19 = 0;
  SecurityDescriptor = 0LL;
  TokenInformation = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  if ( !v3 )
  {
    v14 = 1;
    PspLockRootJobExclusive(a2, a1, &v23);
    v16 = v23;
    if ( a2 != v23 )
    {
      ExConvertExclusiveToSharedLite((PERESOURCE)(v23 + 56));
      ExAcquireResourceExclusiveLite((PERESOURCE)(a2 + 56), 1u);
    }
LABEL_13:
    *a3 = *(_OWORD *)(a2 + 1096);
    a3[1] = *(_OWORD *)(a2 + 1112);
    a3[2] = *(_OWORD *)(a2 + 1128);
    a3[3] = *(_OWORD *)(a2 + 1144);
    if ( v14 )
      PspUnlockJobConditionally(a2, &v23);
    PspUnlockJob(v16, a1);
    if ( v19 )
    {
      ZwDeleteWnfStateName((__int64)&v34, v17);
    }
    else if ( !v14 )
    {
      PspDispatchWakeNotification((PVOID)a2);
    }
    OwnerSecurityDescriptor = 0;
    if ( v7 )
      goto LABEL_19;
    goto LABEL_20;
  }
  ObjectSecurity = ObpGetObjectSecurity(a2, &SecurityDescriptor, &v20, 0);
  v8 = SecurityDescriptor;
  OwnerSecurityDescriptor = ObjectSecurity;
  if ( ObjectSecurity < 0 )
    goto LABEL_20;
  if ( !SecurityDescriptor )
  {
    OwnerSecurityDescriptor = -1073741790;
    goto LABEL_20;
  }
  OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
  if ( OwnerSecurityDescriptor >= 0 )
  {
    v11 = (void *)PsReferenceEffectiveToken(a1, 0x74726853u, &v24, v22, (__int64)v28, 0LL);
    OwnerSecurityDescriptor = SeQueryInformationToken(v11, TokenUser, &TokenInformation);
    if ( v24 == 1 )
    {
      ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 184) + 1208LL), (unsigned __int64)v11, 0x74726853u);
    }
    else if ( v11 )
    {
      ObfDereferenceObjectWithTag(v11, 0x74726853u);
    }
    if ( OwnerSecurityDescriptor >= 0 )
    {
      Src = (unsigned __int8 *)Owner;
      AclLength = 4 * (*((unsigned __int8 *)Owner + 1) + *(unsigned __int8 *)(*(_QWORD *)TokenInformation + 1LL)) + 48;
      Pool2 = (ACL *)ExAllocatePool2(64LL, AclLength, 1717007184LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        RtlCreateAcl(Pool2, AclLength, 2u);
        RtlpAddKnownAce((__int64)v7, 2u, 0, 0x80000000, Src, 0);
        v14 = 0;
        RtlpAddKnownAce((__int64)v7, 2u, 0, 0x80000000, *(unsigned __int8 **)TokenInformation, 0);
        RtlCreateSecurityDescriptor(v32, 1u);
        RtlSetDaclSecurityDescriptor(v32, 1u, v7, 0);
        OwnerSecurityDescriptor = ZwCreateWnfStateName((__int64)&v34, 3LL);
        if ( OwnerSecurityDescriptor < 0 )
        {
LABEL_19:
          ExFreePoolWithTag(v7, 0x66577350u);
          goto LABEL_20;
        }
        PspLockRootJobExclusive(a2, a1, &v23);
        if ( (*(_DWORD *)(a2 + 1536) & 0x800) != 0 )
        {
          v19 = 1;
        }
        else
        {
          *(_QWORD *)(a2 + 1096) = v34;
          v31 = &v30;
          PspComputeReportWakeFilter(a2, &v30, a2 + 1168, 0LL);
          PspEnumJobsAndProcessesInJobHierarchy(
            v15,
            0,
            (int)PspEnableWakeCounters,
            (int)PspEnableProcessWakeCounters,
            0LL,
            2);
          _interlockedbittestandset((volatile signed __int32 *)(a2 + 1536), 0xBu);
          _InterlockedIncrement64(&PspJobTimeLimitsRequest);
          v8 = SecurityDescriptor;
        }
        v16 = v23;
        goto LABEL_13;
      }
    }
  }
LABEL_20:
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  if ( v8 )
    ObReleaseObjectSecurityEx(v8, v20, a2);
  return (unsigned int)OwnerSecurityDescriptor;
}
