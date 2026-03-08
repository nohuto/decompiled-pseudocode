/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x1407A2BE0
 * Callers:
 *     RtlpHpMetadataHeapStart @ 0x1402B7328 (RtlpHpMetadataHeapStart.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14035C910 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14035D974 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14036C9E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14039D7D4 (LdrpSetAlternateResourceModuleHandle.c)
 *     ExPoolSetLimit @ 0x140605324 (ExPoolSetLimit.c)
 *     RtlpLogCapabilityCheckLatency @ 0x14074480C (RtlpLogCapabilityCheckLatency.c)
 *     ExCheckFullProcessInformationAccess @ 0x140791A18 (ExCheckFullProcessInformationAccess.c)
 *     SdbGetIndex @ 0x14079FE64 (SdbGetIndex.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1407A2B08 (SdbpGetStringTableItemFromStringRef.c)
 *     ExQueryBootEntropyInformation @ 0x14080F120 (ExQueryBootEntropyInformation.c)
 *     ExpCheckTestsigningEnabled @ 0x1409F8C88 (ExpCheckTestsigningEnabled.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1409F9A04 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlRunOnceComplete @ 0x14079F240 (RtlRunOnceComplete.c)
 *     RtlRunOnceBeginInitialize @ 0x1407A2CC0 (RtlRunOnceBeginInitialize.c)
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
