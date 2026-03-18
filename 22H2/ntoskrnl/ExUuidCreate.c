/*
 * XREFs of ExUuidCreate @ 0x140688920
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140599180 (PopPowerButtonWorkCallback.c)
 *     DifExUuidCreateWrapper @ 0x1405DA1C0 (DifExUuidCreateWrapper.c)
 *     PipGenerateContainerID @ 0x1406850A8 (PipGenerateContainerID.c)
 *     CmpUuidCreate @ 0x140685EA8 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     BiCreateObject @ 0x14080581C (BiCreateObject.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x1409404D0 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 *     IoGetDeviceDirectory @ 0x1409550C0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1409619C0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     CmpCloneHwProfile @ 0x140A10264 (CmpCloneHwProfile.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140687ED0 (ExpUuidSaveSequenceNumberIf.c)
 *     ExpUuidGetValues @ 0x140872708 (ExpUuidGetValues.c)
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
      *(_DWORD *)Uuid->Data4 = dword_140D5327C;
      *(_DWORD *)&Uuid->Data4[4] = unk_140D53280;
      v6 = _InterlockedDecrement(&dword_140D53278);
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
