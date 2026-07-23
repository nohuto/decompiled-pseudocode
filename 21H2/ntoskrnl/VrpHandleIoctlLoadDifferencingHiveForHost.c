/*
 * XREFs of VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140882EA0
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x1405D3110 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     VrpLoadDifferencingHive @ 0x1405D5E44 (VrpLoadDifferencingHive.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlLoadDifferencingHiveForHost(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  _WORD *PoolWithQuotaTag; // rdi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  void *Src[2]; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v17; // [rsp+50h] [rbp-20h] BYREF
  __int128 v18; // [rsp+60h] [rbp-10h] BYREF

  PoolWithQuotaTag = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  *(_OWORD *)Src = 0LL;
  if ( a2 < 0x20 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned __int16 *)(a1 + 8);
  if ( (v8 & 1) != 0
    || (v9 = *(unsigned __int16 *)(a1 + 10), (v9 & 1) != 0)
    || (v10 = *(unsigned __int16 *)(a1 + 12), (v10 & 1) != 0) )
  {
    v7 = -1073741811;
  }
  else
  {
    if ( !(_WORD)v8 )
      return (unsigned int)-1073741811;
    if ( !(_WORD)v9 )
      return (unsigned int)-1073741811;
    v11 = v8 + 24;
    v12 = v11 + v9;
    if ( v11 > v12 || v12 > v12 + v10 || a2 < v12 + v10 )
      return (unsigned int)-1073741811;
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, a3) || !SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
      return (unsigned int)-1073741727;
    v13 = *(unsigned __int16 *)(a1 + 8);
    Src[1] = (void *)(a1 + 24);
    WORD1(Src[0]) = v13;
    LOWORD(Src[0]) = v13;
    v14 = *(unsigned __int16 *)(a1 + 10);
    WORD1(v18) = v14;
    LOWORD(v18) = v14;
    *((_QWORD *)&v18 + 1) = a1 + 24 + 2 * (v13 >> 1);
    v17.Buffer = (wchar_t *)(*((_QWORD *)&v18 + 1) + 2 * (v14 >> 1));
    v17.MaximumLength = *(_WORD *)(a1 + 12);
    v17.Length = v17.MaximumLength;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v13 + 10, 0x67655256u);
    if ( !PoolWithQuotaTag )
      return (unsigned int)-1073741670;
    PoolWithQuotaTag[4] = Src[0];
    memmove(PoolWithQuotaTag + 5, Src[1], LOWORD(Src[0]));
    v7 = VrpLoadDifferencingHive(
           (PCUNICODE_STRING)Src,
           (__int64)&v18,
           &v17,
           *(_DWORD *)a1,
           *(_DWORD *)(a1 + 4) & 1,
           (*(_DWORD *)(a1 + 4) >> 1) & 1,
           0,
           *(_QWORD *)(a1 + 16));
    if ( v7 >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpHostLoadedHivesLock, 0LL);
      *(_QWORD *)PoolWithQuotaTag = VrpHostLoadedHives;
      VrpHostLoadedHives = (__int64)PoolWithQuotaTag;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&VrpHostLoadedHivesLock);
      KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
      return 0;
    }
  }
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)v7;
}
