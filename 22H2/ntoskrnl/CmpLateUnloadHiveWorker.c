/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x14071B940
 * Callers:
 *     <none>
 * Callees:
 *     CmpDecrementAppHiveUnloadCount @ 0x140360BD0 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x140360C44 (CmpTryToRundownHive.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140648D30 (CmpDereferenceKeyControlBlock.c)
 *     CmpReleaseShutdownRundown @ 0x1406CE440 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1406CF870 (CmpAcquireShutdownRundown.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406EB3B0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1406EB4E0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406EB544 (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceHive @ 0x14071BA9C (CmpDereferenceHive.c)
 *     CmpCompleteUnloadKey @ 0x14071BF04 (CmpCompleteUnloadKey.c)
 */

_QWORD *__fastcall CmpLateUnloadHiveWorker(__int64 a1)
{
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  ULONG_PTR v7; // rbx
  __int64 v8; // rdx
  BOOLEAN v10[4]; // [rsp+20h] [rbp-48h] BYREF
  int v11; // [rsp+24h] [rbp-44h] BYREF
  _OWORD v12[3]; // [rsp+28h] [rbp-40h] BYREF

  v11 = 2;
  memset(v12, 0, sizeof(v12));
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 22;
  v2 = *(_QWORD *)(a1 + 2928);
  if ( (*(_DWORD *)(a1 + 160) & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 23;
LABEL_11:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    return (_QWORD *)CmpDereferenceHive(a1);
  }
  v10[0] = CmpAcquireShutdownRundown();
  if ( !v10[0] )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 24;
    goto LABEL_11;
  }
  if ( !*(_BYTE *)(a1 + 2936) )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 25;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
    ++CmpActiveAppHiveUnloadCount;
  v3 = CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)a1, v2, v10);
  *(_QWORD *)(a1 + 2944) = 0LL;
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 2928);
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4276), 1u) & 0x7F) + 4280) = 30;
    CmpAttachToRegistryProcess((__int64)v12, v4, v5, v6);
    CmpCompleteUnloadKey(v7, v8, &v11);
    CmpDetachFromRegistryProcess((__int64)v12);
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v7);
LABEL_8:
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive(a1);
    return CmpReleaseShutdownRundown();
  }
  if ( (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
    CmpDecrementAppHiveUnloadCount();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  if ( v10[0] )
    CmpReleaseShutdownRundown();
  return (_QWORD *)CmpDereferenceHive(a1);
}
