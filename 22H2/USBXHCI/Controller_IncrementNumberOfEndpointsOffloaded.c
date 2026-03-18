/*
 * XREFs of Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C0033778
 * Callers:
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C0048C9C (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C0049A90 (UsbDevice_SetResourceAssignmentCompletion.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1C000A948 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C000A988 (DynamicLock_Release.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 *     Interrupter_InitializeForOffload @ 0x1C003DF28 (Interrupter_InitializeForOffload.c)
 */

__int64 __fastcall Controller_IncrementNumberOfEndpointsOffloaded(__int64 a1)
{
  __int64 v2; // rdx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 648));
  if ( !*(_DWORD *)(a1 + 640) && *(_DWORD *)(a1 + 636) == 1 )
  {
    Interrupter_InitializeForOffload(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 32LL)
                                               + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 64LL)));
    v2 = *(_QWORD *)(a1 + 832);
    *(_BYTE *)(a1 + 840) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3040))(WdfDriverGlobals, v2);
  }
  ++*(_DWORD *)(a1 + 640);
  return DynamicLock_Release(*(_QWORD *)(a1 + 648));
}
