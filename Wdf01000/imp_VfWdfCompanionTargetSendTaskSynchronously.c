/*
 * XREFs of imp_VfWdfCompanionTargetSendTaskSynchronously @ 0x1C00B3470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfCompanionTargetSendTaskSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMPANIONTARGET__ *CompanionTarget,
        __int64 TaskQueueIdentifier,
        __int64 TaskOperationCode,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_TASK_SEND_OPTIONS *TaskOptions,
        unsigned __int64 *BytesReturned)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCOMPANIONTARGET__ *, __int64, __int64, _WDF_MEMORY_DESCRIPTOR *, _WDF_MEMORY_DESCRIPTOR *, _WDF_TASK_SEND_OPTIONS *, unsigned __int64 *))WdfVersion.Functions.pfnWdfCompanionTargetSendTaskSynchronously)(
           DriverGlobals,
           CompanionTarget,
           TaskQueueIdentifier,
           TaskOperationCode,
           InputBuffer,
           OutputBuffer,
           TaskOptions,
           BytesReturned);
}
