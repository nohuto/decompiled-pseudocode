BOOLEAN __fastcall CmpCompleteUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rdi
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // ecx
  REGHANDLE v11; // r15
  unsigned int v12; // r9d
  __int64 v13; // rax
  unsigned int v14; // r9d
  ULONGLONG v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  int v26; // r14d
  unsigned int v27; // ebx
  struct _PRIVILEGE_SET *v28; // rcx
  unsigned int v29; // esi
  unsigned int v30; // eax
  REGHANDLE v31; // rbx
  BOOLEAN result; // al
  signed __int32 v33[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int16 v34; // [rsp+30h] [rbp-79h] BYREF
  int v35; // [rsp+38h] [rbp-71h] BYREF
  __int128 v36; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR v38; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v36 = 0LL;
  CmpInitializeDelayDerefContext(&v36);
  v6 = *(_DWORD *)(v3 + 4112) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 6;
  v7 = *(_QWORD *)(v3 + 4152);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v3 + 64);
    v9 = *(_DWORD *)(v8 + 144);
    if ( *(_QWORD *)(v7 + 16) == v7 + 16 )
      v10 = v9 & 0xFFFFFFFE;
    else
      v10 = v9 | 1;
    *(_DWORD *)(v8 + 144) = v10;
    HvMarkBaseBlockDirty(v3);
  }
  *(_DWORD *)(v3 + 160) |= 0x40u;
  v11 = EtwpRegTraceHandle;
  v34 = 0;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v12 = 0;
    if ( *(_QWORD *)(v3 + 1848) )
    {
      UserData[0].Ptr = *(_QWORD *)(v3 + 1848);
      v12 = 1;
      UserData[0].Size = *(unsigned __int16 *)(v3 + 1840);
      UserData[0].Reserved = 0;
    }
    v13 = v12;
    v14 = v12 + 1;
    UserData[v13].Ptr = (ULONGLONG)&v34;
    *(_QWORD *)&UserData[v13].Size = 2LL;
    v15 = *(_QWORD *)(v3 + 1864);
    if ( v15 )
    {
      v16 = v14++;
      UserData[v16].Ptr = v15;
      UserData[v16].Size = *(unsigned __int16 *)(v3 + 1856);
      *(&UserData[0].Reserved + 1 * v16) = 0;
    }
    v17 = v14;
    UserData[v17].Ptr = (ULONGLONG)&v34;
    *(_QWORD *)&UserData[v17].Size = 2LL;
    EtwWrite(v11, &EventDescriptor, 0LL, v14 + 1, UserData);
  }
  CmpRemoveHiveFromNamespace(v3, a1, (__int64)&v36);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 8;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 1;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(a1, 1LL, &v36);
  CmpMarkKeyUnbacked(a1, &v36);
  CmpDiscardKcb(a1);
  CmpRemoveLayerLinkForDiscardedKcb(a1);
  LOBYTE(v18) = 1;
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 72LL), v18);
  CmpDrainDelayDerefContext((_QWORD **)&v36);
  CmpUnlockRegistry(v20, v19, v21, v22);
  *a3 &= ~2u;
  if ( (*a3 & 4) != 0 )
  {
    UNLOCK_HIVE_LOAD();
    *a3 &= ~4u;
  }
  ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(v3 + 1856));
  CmpDestroySecurityCache(v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  CmpUnJoinClassOfTrust(v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(v3 + 160) & 0x400) != 0 )
  {
    v24 = *(_QWORD *)(v3 + 1624);
    if ( *(_QWORD *)(v24 + 8) != v3 + 1624 || (v25 = *(_QWORD **)(v3 + 1632), *v25 != v3 + 1624) )
      __fastfail(3u);
    *v25 = v24;
    *(_QWORD *)(v24 + 8) = v25;
  }
  CmpVERemoveHiveFromSIDMappingTable(v3);
  v26 = CmpFlushHive(v3, 0x2Cu);
  if ( v26 == -1073741811 )
    v26 = 0;
  v27 = *(_DWORD *)(v3 + 280) + 4096;
  HvHiveCleanup(v3);
  if ( v26 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1800) - v27) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0, v27, 0);
  CmpCmdHiveClose(v3);
  v28 = *(struct _PRIVILEGE_SET **)(v3 + 4792);
  if ( v28 )
    CmpVolumeContextDecrementRefCount(v28);
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 0;
    _InterlockedOr(v33, 0);
    if ( *(_QWORD *)(v3 + 4776) )
      ExfUnblockPushLock((volatile __int64 *)(v3 + 4776), 0LL);
  }
  v29 = 0;
  if ( *(_DWORD *)(v3 + 2920) )
  {
    do
    {
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v3 + 2928) + 8LL * v29), 0, 0);
      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v3 + 2928) + 8LL * v29));
      v30 = *(_DWORD *)(v3 + 2920);
      ++v29;
    }
    while ( v29 < v30 );
    if ( v30 )
      ExFreePoolWithTag(*(PVOID *)(v3 + 2928), 0);
  }
  v31 = EtwpRegTraceHandle;
  v35 = v26;
  v38 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &v38);
  if ( result )
  {
    *(_QWORD *)&v39.Size = 4LL;
    v39.Ptr = (ULONGLONG)&v35;
    return EtwWrite(v31, &v38, 0LL, 1u, &v39);
  }
  return result;
}
