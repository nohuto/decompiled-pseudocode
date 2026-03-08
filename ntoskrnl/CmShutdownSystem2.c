/*
 * XREFs of CmShutdownSystem2 @ 0x1406139DC
 * Callers:
 *     CmShutdownSystem @ 0x140A0E674 (CmShutdownSystem.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1402BFCE8 (CmpUnJoinClassOfTrust.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpGetNextActiveHive @ 0x1406BD940 (CmpGetNextActiveHive.c)
 *     LOCK_HIVE_LOAD @ 0x1406C00DC (LOCK_HIVE_LOAD.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406C0154 (UNLOCK_HIVE_LOAD.c)
 *     CmpDoFileSetSizeEx @ 0x140731FA4 (CmpDoFileSetSizeEx.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14074AE98 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpCmdHiveClose @ 0x14074B34C (CmpCmdHiveClose.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14074B4AC (CmpVolumeContextDecrementRefCount.c)
 *     HvHiveCleanup @ 0x1407A56B8 (HvHiveCleanup.c)
 *     CmpFreeAllMemory @ 0x140A0E6C8 (CmpFreeAllMemory.c)
 *     CmFcShutdownSystem @ 0x140A0EFB8 (CmFcShutdownSystem.c)
 *     CmpFlushTraceLoggingProvider @ 0x140A0FAB0 (CmpFlushTraceLoggingProvider.c)
 *     CmpTraceShutdownRundownComplete @ 0x140A1048C (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStop @ 0x140A1056C (CmpTraceShutdownStop.c)
 *     CmpWaitForShutdownRundownRelease @ 0x140A1C9F8 (CmpWaitForShutdownRundownRelease.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 CmShutdownSystem2()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 i; // rcx
  unsigned int v5; // edi
  struct _PRIVILEGE_SET *v6; // rcx
  __int64 NextActiveHive; // rax
  __int64 v8; // rbx
  int v9; // ebx
  __int64 **v10; // rax
  struct _PRIVILEGE_SET *v11; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState.ApcListHead[1], 0, 32);
  CmFcShutdownSystem(2LL);
  CmpWaitForShutdownRundownRelease(v1, v0, v2, v3, 0LL, 0LL);
  CmpTraceShutdownRundownComplete();
  if ( CmpRegistryRootObject )
    ObfDereferenceObjectWithTag(CmpRegistryRootObject, 0x746C6644u);
  CmpFlushTraceLoggingProvider();
  LOCK_HIVE_LOAD();
  CmpLockRegistryExclusive();
  for ( i = 0LL; ; i = v8 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v8 = NextActiveHive;
    if ( !NextActiveHive )
      break;
    CmpUnJoinClassOfTrust(NextActiveHive);
    CmpVERemoveHiveFromSIDMappingTable(v8);
    v5 = *(_DWORD *)(v8 + 280) + 4096;
    CmpAttachToRegistryProcess(&ApcState);
    HvHiveCleanup(v8);
    CmpDetachFromRegistryProcess(&ApcState);
    if ( *(_BYTE *)(v8 + 4784)
      && (*(_DWORD *)(v8 + 160) & 0x8000) == 0
      && (__int64)(*(_QWORD *)(v8 + 1800) - v5) > 0x100000 )
    {
      CmpDoFileSetSizeEx(v8, 0LL, v5, 0LL);
    }
    CmpCmdHiveClose(v8);
    v6 = *(struct _PRIVILEGE_SET **)(v8 + 4792);
    if ( v6 )
      CmpVolumeContextDecrementRefCount(v6);
  }
  HvShutdownComplete = 1;
  if ( (PopShutdownCleanly & 8) != 0 && !(_BYTE)CmFirstTime )
    CmpFreeAllMemory();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  v9 = 0;
  v10 = &CmpWellKnownVolumeList;
  if ( CmpWellKnownVolumeList )
  {
    do
    {
      v11 = (struct _PRIVILEGE_SET *)v10[1];
      if ( v11 )
        CmpVolumeContextDecrementRefCount(v11);
      v10 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v9];
    }
    while ( *v10 );
  }
  return CmpTraceShutdownStop();
}
