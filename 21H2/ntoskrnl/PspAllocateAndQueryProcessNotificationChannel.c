/*
 * XREFs of PspAllocateAndQueryProcessNotificationChannel @ 0x1406F4388
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1403FBF00 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x1403FC0A0 (ZwDeleteWnfStateName.c)
 *     ZwUpdateWnfStateData @ 0x1403FDF80 (ZwUpdateWnfStateData.c)
 *     RtlpAddKnownAce @ 0x140651280 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 */

NTSTATUS __fastcall PspAllocateAndQueryProcessNotificationChannel(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // rdi
  char v5; // bl
  char v9; // r15
  NTSTATUS result; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ecx
  int *v15; // rdx
  int v16; // r8d
  int v17; // eax
  unsigned __int8 v18; // cf
  char v19; // [rsp+40h] [rbp-89h]
  char v20; // [rsp+41h] [rbp-88h]
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v22; // [rsp+68h] [rbp-61h]
  _WNF_STATE_NAME StateName; // [rsp+70h] [rbp-59h] BYREF
  ACL Acl; // [rsp+80h] [rbp-49h] BYREF

  v3 = 0;
  v4 = a2 + 2464;
  v22 = 0LL;
  v5 = 0;
  v9 = 0;
  v20 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v19 = 0;
  StateName = 0LL;
  if ( !*(_QWORD *)(a2 + 2464) )
  {
    RtlCreateAcl(&Acl, 0x58u, 2u);
    RtlpAddKnownAce(&Acl, 2u, 0, 1, (unsigned __int8 *)SeWorldSid, 0);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    result = ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0, SecurityDescriptor);
    if ( result < 0 )
      return result;
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockExclusiveEx(a2 + 1080, 0LL);
    if ( *(_QWORD *)v4 )
    {
      v20 = 1;
    }
    else
    {
      *(_WNF_STATE_NAME *)v4 = StateName;
      *(_QWORD *)(a2 + 2500) = *(_QWORD *)(a3 + 36);
      v19 = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 1080);
    KeAbPostRelease(a2 + 1080);
    KeLeaveCriticalRegionThread(a1, v11, v12, v13);
    v5 = v20;
    v3 = v19;
  }
  v14 = 0;
  v15 = (int *)(a3 + 8);
  *(_OWORD *)a3 = *(_OWORD *)v4;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(v4 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(v4 + 32);
  do
  {
    v16 = *v15 & 0x7FFFFFFF;
    *v15 = v16;
    if ( v3 )
    {
      v17 = *(_DWORD *)(a3 + 36);
      v18 = _bittest(&v17, v14);
      v3 = v19;
      if ( v18 )
      {
        if ( v16 )
          v9 = 1;
      }
    }
    ++v14;
    ++v15;
  }
  while ( v14 < 7 );
  if ( v9 )
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)v4, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( v5 )
    ZwDeleteWnfStateName(&StateName);
  return 0;
}
