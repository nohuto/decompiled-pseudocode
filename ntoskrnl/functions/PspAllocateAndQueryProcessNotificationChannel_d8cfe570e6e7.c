__int64 __fastcall PspAllocateAndQueryProcessNotificationChannel(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // rdi
  char v5; // bl
  char v9; // r15
  __int64 result; // rax
  unsigned int v11; // ecx
  int *v12; // rdx
  int v13; // r8d
  int v14; // eax
  unsigned __int8 v15; // cf
  char v16; // [rsp+40h] [rbp-89h]
  char v17; // [rsp+41h] [rbp-88h]
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v19; // [rsp+68h] [rbp-61h]
  _QWORD v20[2]; // [rsp+70h] [rbp-59h] BYREF
  ACL Acl; // [rsp+80h] [rbp-49h] BYREF

  v3 = 0;
  v4 = a2 + 2464;
  v19 = 0LL;
  v5 = 0;
  v9 = 0;
  v17 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v16 = 0;
  v20[0] = 0LL;
  if ( !*(_QWORD *)(a2 + 2464) )
  {
    RtlCreateAcl(&Acl, 0x58u, 2u);
    RtlpAddKnownAce((__int64)&Acl, 2u, 0, 1, (unsigned __int8 *)SeWorldSid, 0);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    result = ZwCreateWnfStateName((__int64)v20, 3LL);
    if ( (int)result < 0 )
      return result;
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockExclusiveEx(a2 + 1080, 0LL);
    if ( *(_QWORD *)v4 )
    {
      v17 = 1;
    }
    else
    {
      *(_QWORD *)v4 = v20[0];
      *(_QWORD *)(a2 + 2500) = *(_QWORD *)(a3 + 36);
      v16 = 1;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1080));
    KeAbPostRelease(a2 + 1080);
    KeLeaveCriticalRegionThread(a1);
    v5 = v17;
    v3 = v16;
  }
  v11 = 0;
  v12 = (int *)(a3 + 8);
  *(_OWORD *)a3 = *(_OWORD *)v4;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(v4 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(v4 + 32);
  do
  {
    v13 = *v12 & 0x7FFFFFFF;
    *v12 = v13;
    if ( v3 )
    {
      v14 = *(_DWORD *)(a3 + 36);
      v15 = _bittest(&v14, v11);
      v3 = v16;
      if ( v15 )
      {
        if ( v13 )
          v9 = 1;
      }
    }
    ++v11;
    ++v12;
  }
  while ( v11 < 7 );
  if ( v9 )
    ZwUpdateWnfStateData(v4, 0LL);
  if ( v5 )
    ZwDeleteWnfStateName((__int64)v20, (__int64)v12);
  return 0LL;
}
