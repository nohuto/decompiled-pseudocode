__int64 __fastcall CmpLateUnloadHiveWorker(PVOID P)
{
  char v2; // bl
  __int64 v3; // rdx
  char UnloadRundown; // si
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  ULONG_PTR v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // zf
  signed __int32 v22[8]; // [rsp+0h] [rbp-70h] BYREF
  int v23; // [rsp+20h] [rbp-50h] BYREF
  __int128 v24; // [rsp+28h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-38h] BYREF

  v24 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((__int64)&v24);
  v2 = 0;
  v23 = 0;
  *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1059, 1u) & 0x7F) + 1060) = 22;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    v8 = *((_DWORD *)P + 40);
    v23 = 6;
    if ( (v8 & 0x40) != 0 )
    {
      *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1059, 1u) & 0x7F) + 1060) = 23;
    }
    else if ( *((_BYTE *)P + 2944) )
    {
      v9 = *((_QWORD *)P + 367);
      if ( (*((_DWORD *)P + 1028) & 0x20) != 0 )
      {
        v2 = 1;
        ++CmpActiveAppHiveUnloadCount;
      }
      if ( CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)P, v9) )
      {
        v10 = *((_QWORD *)P + 367);
        *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1059, 1u) & 0x7F) + 1060) = 30;
        CmpAttachToRegistryProcess(&ApcState);
        CmpCompleteUnloadKey(v10, v11, &v23);
        CmpDetachFromRegistryProcess(&ApcState);
        CmpLockRegistry(v13, v12, v14, v15);
        CmpDereferenceKeyControlBlock(v10);
        CmpUnlockRegistry(v17, v16, v18, v19);
      }
      else if ( v2 )
      {
        CmpDecrementAppHiveUnloadCount();
      }
    }
    else
    {
      *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1059, 1u) & 0x7F) + 1060) = 25;
    }
  }
  else
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 1059, 1u) & 0x7F;
    *((_DWORD *)P + (unsigned int)v7 + 1060) = 24;
  }
  v20 = (v23 & 2) == 0;
  *((_DWORD *)P + 1200) = 0;
  if ( !v20 )
    CmpUnlockRegistry(v7, v3, v5, v6);
  _InterlockedOr(v22, 0);
  if ( *((_QWORD *)P + 601) )
    ExfUnblockPushLock((volatile __int64 *)P + 601, 0LL);
  if ( (v23 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
  return CmCleanupThreadInfo((__int64 *)&v24);
}
