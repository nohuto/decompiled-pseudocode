/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x14075BD80
 * Callers:
 *     RtlpHpMetadataHeapStart @ 0x140371378 (RtlpHpMetadataHeapStart.c)
 *     ExPoolSetLimit @ 0x14063AFCC (ExPoolSetLimit.c)
 *     RtlpLogCapabilityCheckLatency @ 0x140660E0C (RtlpLogCapabilityCheckLatency.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406D75F4 (ExCheckFullProcessInformationAccess.c)
 *     SdbGetIndex @ 0x14075BCC0 (SdbGetIndex.c)
 *     ExpCheckTestsigningEnabled @ 0x1407F7D3C (ExpCheckTestsigningEnabled.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140842AF4 (SdbpGetStringTableItemFromStringRef.c)
 *     ExQueryBootEntropyInformation @ 0x14086423C (ExQueryBootEntropyInformation.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409FC784 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     RtlRunOnceBeginInitialize @ 0x14075BE60 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x14075BF10 (RtlRunOnceComplete.c)
 */

NTSTATUS __stdcall RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  PVOID v12; // r8
  NTSTATUS v13; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = RtlRunOnceBeginInitialize(RunOnce, 0, Context);
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_12;
  if ( v9 == 259 )
  {
    if ( ((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
    {
      if ( Context )
        v12 = *Context;
      else
        v12 = 0LL;
      v10 = RtlRunOnceComplete(RunOnce, 0, v12);
      if ( v10 >= 0 )
      {
        v10 = 0;
        goto LABEL_3;
      }
    }
    else
    {
      v10 = -1073741823;
      v13 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v13 >= 0 )
        goto LABEL_3;
      v10 = v13;
    }
LABEL_12:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    RtlRaiseStatus(v10);
  }
LABEL_3:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v10;
}
