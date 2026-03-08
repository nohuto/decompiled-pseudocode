/*
 * XREFs of NtSetUuidSeed @ 0x14084E2E0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetUuidSeed(__int64 a1)
{
  void *Pool2; // rax
  void *v3; // r15
  int v4; // eax
  ULONG v5; // r14d
  ULONG v6; // ebx
  ULONG v7; // r14d
  ACL *v8; // rax
  ACL *v9; // rbx
  int Acl; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  int v13; // eax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v15; // rax
  __int64 v16; // rbx
  char v18; // r14
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-B4h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp-B0h] BYREF
  int v23; // [rsp+64h] [rbp-A4h]
  __int16 v24; // [rsp+68h] [rbp-A0h]
  ULONG v25; // [rsp+6Ch] [rbp-9Ch]
  ACCESS_MASK GrantedAccess; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h]
  PVOID v28; // [rsp+80h] [rbp-88h]
  ULONG v29; // [rsp+88h] [rbp-80h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+90h] [rbp-78h] BYREF
  _BYTE SecurityDescriptor[32]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-38h]
  _DWORD v33[6]; // [rsp+D8h] [rbp-30h]

  AccessStatus = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v33[0] = 80;
  v33[1] = 521322694;
  v33[2] = 906040134;
  v33[3] = -430256637;
  v33[4] = 1525148216;
  v33[5] = -843743134;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  GrantedAccess = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v32 = 0LL;
  v28 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  Pool2 = (void *)ExAllocatePool2(256LL, 32LL, 1684624725LL);
  v3 = Pool2;
  P = Pool2;
  if ( !Pool2 )
    RtlRaiseStatus(-1073741670);
  v4 = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
  AccessStatus = v4;
  if ( v4 < 0 )
    RtlRaiseStatus(v4);
  v5 = 0;
  v25 = 0;
  while ( v5 < 6 )
  {
    v6 = v33[v5];
    *RtlSubAuthoritySid(v3, v5++) = v6;
    v25 = v5;
  }
  v7 = RtlLengthSid(v3) + 20;
  v29 = v7;
  v8 = (ACL *)ExAllocatePool2(256LL, v7, 1684624725LL);
  v9 = v8;
  v28 = v8;
  if ( !v8 )
    RtlRaiseStatus(-1073741670);
  Acl = RtlCreateAcl(v8, v7, 2u);
  AccessStatus = Acl;
  if ( Acl < 0 )
    RtlRaiseStatus(Acl);
  v11 = RtlpAddKnownAce((__int64)v9, 2u, 0, 1, (unsigned __int8 *)v3, 0);
  AccessStatus = v11;
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
  v12 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  AccessStatus = v12;
  if ( v12 < 0 )
    RtlRaiseStatus(v12);
  v13 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
  AccessStatus = v13;
  if ( v13 < 0 )
    RtlRaiseStatus(v13);
  if ( !SeAccessCheck(
          SecurityDescriptor,
          &SubjectSecurityContext,
          0,
          1u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpUuidSeedGenericMapping,
          1,
          &GrantedAccess,
          &AccessStatus) )
    RtlRaiseStatus(-1073741790);
  v23 = *(_DWORD *)a1;
  v24 = *(_WORD *)(a1 + 4);
  AccessStatus = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v28 )
    ExFreePoolWithTag(v28, 0);
  if ( !AccessStatus )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = KeAbPreAcquire((__int64)&ExpUuidLock, 0LL);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v15, (__int64)&ExpUuidLock);
    if ( v16 )
      *(_BYTE *)(v16 + 18) = 1;
    *(int *)((char *)&dword_140D53274 + 2) = v23;
    word_140D5327A = v24;
    ExpUuidCacheValid = (unsigned __int8)v23 >> 7 == 0;
    v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return (unsigned int)AccessStatus;
}
