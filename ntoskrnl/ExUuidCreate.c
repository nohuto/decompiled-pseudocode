/*
 * XREFs of ExUuidCreate @ 0x1406F7EF0
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140596C60 (PopPowerButtonWorkCallback.c)
 *     DifExUuidCreateWrapper @ 0x1405D7D10 (DifExUuidCreateWrapper.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     NtCreateJobObject @ 0x1406F7BA0 (NtCreateJobObject.c)
 *     CmpUuidCreate @ 0x140733C60 (CmpUuidCreate.c)
 *     PipGenerateContainerID @ 0x140733C8C (PipGenerateContainerID.c)
 *     BiCreateObject @ 0x14082CA14 (BiCreateObject.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14093D4B0 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 *     IoGetDeviceDirectory @ 0x1409520A0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14095E9A0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     CmpCloneHwProfile @ 0x140A0D554 (CmpCloneHwProfile.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x1406F6ECC (ExpUuidSaveSequenceNumberIf.c)
 *     ExpUuidGetValues @ 0x1408701E8 (ExpUuidGetValues.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS Values; // ebp
  __int64 v4; // rdi
  char v5; // cl
  int v6; // eax
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // r15

  CurrentThread = KeGetCurrentThread();
  Values = 0;
  while ( 1 )
  {
    do
    {
      v4 = ExpUuidCachedValues;
      v5 = ExpUuidCacheValid;
      *(_DWORD *)Uuid->Data4 = dword_140D53274;
      *(_DWORD *)&Uuid->Data4[4] = unk_140D53278;
      v6 = _InterlockedDecrement(&dword_140D53270);
    }
    while ( v4 != ExpUuidCachedValues );
    if ( v6 >= 0 )
    {
      v7 = v4 - v6;
      Uuid->Data1 = v7;
      Uuid->Data2 = WORD2(v7);
      Uuid->Data3 = HIWORD(v7) & 0xFFF | 0x1000;
      if ( !v5 )
        return 1073872982;
      return Values;
    }
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((__int64)&ExpUuidLock, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v9, (__int64)&ExpUuidLock);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    if ( v4 != ExpUuidCachedValues )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
        goto LABEL_14;
      goto LABEL_16;
    }
    Values = ExpUuidGetValues(&ExpUuidCachedValues);
    if ( Values )
      break;
    ExpUuidSaveSequenceNumberIf();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_14;
LABEL_16:
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
LABEL_14:
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return Values;
}
