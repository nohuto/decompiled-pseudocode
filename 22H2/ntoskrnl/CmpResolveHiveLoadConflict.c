/*
 * XREFs of CmpResolveHiveLoadConflict @ 0x14086E774
 * Callers:
 *     CmLoadKey @ 0x14069DA54 (CmLoadKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     SetFailureLocation @ 0x14031DB78 (SetFailureLocation.c)
 *     CmpJoinClassOfTrust @ 0x14032CBB4 (CmpJoinClassOfTrust.c)
 *     CmpPerformTrustClassAccessCheck @ 0x14032CC30 (CmpPerformTrustClassAccessCheck.c)
 *     CmpUnJoinClassOfTrust @ 0x140360E0C (CmpUnJoinClassOfTrust.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     CmpLockKcbExclusive @ 0x1405EC35C (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140649D20 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpReferenceKeyControlBlock @ 0x14066D0B0 (CmpReferenceKeyControlBlock.c)
 *     CmpRecordUnloadEventForHive @ 0x14066D498 (CmpRecordUnloadEventForHive.c)
 *     CmpCleanupParseContext @ 0x1406CE840 (CmpCleanupParseContext.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406EB3B0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1406EB4E0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406EB544 (LOCK_HIVE_LOAD.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14086E62C (CmpIsHiveAlreadyLoaded.c)
 */

__int64 __fastcall CmpResolveHiveLoadConflict(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        char a7,
        __int64 *a8,
        _DMA_OPERATIONS **a9)
{
  __int64 v12; // r15
  int v13; // eax
  PADAPTER_OBJECT v14; // rsi
  unsigned int v15; // edi
  int v16; // eax
  int v17; // ebx
  __int64 *v18; // rdi
  int v19; // edx
  int v21; // [rsp+20h] [rbp-E0h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  _DMA_OPERATIONS **v26; // [rsp+60h] [rbp-A0h]
  _OWORD v27[19]; // [rsp+70h] [rbp-90h] BYREF

  v24 = a8;
  v25 = a2;
  v26 = a9;
  v23 = 0LL;
  v12 = 0LL;
  DmaAdapter = 0LL;
  memset(v27, 0, 0x128uLL);
  LODWORD(v27[6]) = -1;
  *((_QWORD *)&v27[9] + 1) = &v27[9];
  *(_QWORD *)&v27[9] = &v27[9];
  memset((char *)&v27[13] + 8, 0, 0x50uLL);
  v13 = ObReferenceObjectByNameEx(a1, 0LL, 0x20019u, (__int64)CmKeyObjectType, 0, (__int64)v27, &DmaAdapter);
  v14 = DmaAdapter;
  if ( v13 < 0 )
  {
    v15 = -1073741275;
    goto LABEL_27;
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  if ( !a4 )
    goto LABEL_9;
  if ( !CmpIsKeyDeletedForKeyBody(a4, 0LL) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
    v16 = CmpPerformTrustClassAccessCheck(v12, a7);
    v17 = v16;
    if ( v16 < 0 )
    {
      SetFailureLocation(a6, 0, 33, v16, 32);
LABEL_21:
      if ( v17 == -1073741275 )
        v17 = -1073741823;
      v15 = v17;
      goto LABEL_26;
    }
LABEL_9:
    if ( CmpIsHiveAlreadyLoaded((__int64)v14, v25, a3, &v23, v24) )
    {
      v18 = v23;
      v19 = *((_DWORD *)v23 + 40);
      if ( ((v19 & 0x8000) == 0 || (a3 & 0x2000) != 0) && ((v19 & 0x8000) != 0 || (a3 & 0x2000) == 0) )
      {
        CmpLockKcbExclusive((__int64)v14->DmaOperations);
        if ( (a3 & 0x800) != 0 )
        {
          CmpReferenceKeyControlBlock((ULONG_PTR)v14->DmaOperations);
          *v26 = v14->DmaOperations;
        }
        if ( a5 && (v17 = CmpRecordUnloadEventForHive((__int64)v18, a5), v17 < 0) )
        {
          CmpUnlockKcb((ULONG_PTR)v14->DmaOperations);
          SetFailureLocation(a6, 0, 33, v17, 80);
        }
        else
        {
          CmpUnlockKcb((ULONG_PTR)v14->DmaOperations);
          if ( v12 )
          {
            CmpUnJoinClassOfTrust((__int64)v18);
            *((_DWORD *)v18 + 1038) |= 1u;
            CmpJoinClassOfTrust((__int64)v18, v12, a7);
          }
          v17 = 0;
        }
        goto LABEL_21;
      }
      v21 = 64;
    }
    else
    {
      v21 = 48;
    }
    v15 = -1073741757;
    SetFailureLocation(a6, 0, 33, -1073741757, v21);
    goto LABEL_26;
  }
  v15 = -1073741444;
  SetFailureLocation(a6, 0, 33, -1073741444, 16);
LABEL_26:
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
LABEL_27:
  if ( v14 )
    HalPutDmaAdapter(v14);
  CmpCleanupParseContext((__int64)v27, 0);
  return v15;
}
