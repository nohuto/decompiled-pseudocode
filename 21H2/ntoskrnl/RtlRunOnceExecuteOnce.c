/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x1405E9E40
 * Callers:
 *     RtlpHpMetadataHeapStart @ 0x14022325C (RtlpHpMetadataHeapStart.c)
 *     ExCheckFullProcessInformationAccess @ 0x140619F60 (ExCheckFullProcessInformationAccess.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140756810 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbGetIndex @ 0x14075A830 (SdbGetIndex.c)
 *     ExQueryBootEntropyInformation @ 0x14079ED94 (ExQueryBootEntropyInformation.c)
 *     RtlpLogCapabilityCheckLatency @ 0x14091B7D4 (RtlpLogCapabilityCheckLatency.c)
 *     ExpCheckTestsigningEnabled @ 0x14094F73C (ExpCheckTestsigningEnabled.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409505D0 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlRunOnceBeginInitialize @ 0x1405E9F20 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x1405E9FD0 (RtlRunOnceComplete.c)
 */

NTSTATUS __stdcall RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  PVOID v15; // r8
  NTSTATUS v16; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = RtlRunOnceBeginInitialize(RunOnce, 0, Context);
  v13 = v9;
  if ( v9 < 0 )
    goto LABEL_12;
  if ( v9 == 259 )
  {
    if ( ((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
    {
      if ( Context )
        v15 = *Context;
      else
        v15 = 0LL;
      v13 = RtlRunOnceComplete(RunOnce, 0, v15);
      if ( v13 >= 0 )
      {
        v13 = 0;
        goto LABEL_3;
      }
    }
    else
    {
      v13 = -1073741823;
      v16 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v16 >= 0 )
        goto LABEL_3;
      v13 = v16;
    }
LABEL_12:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
    RtlRaiseStatus(v13);
  }
LABEL_3:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v13;
}
