/*
 * XREFs of CommonBuffer_FlushWorkItems @ 0x1C000ED94
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000E9C0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_InitiateRecovery @ 0x1C0033990 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0033D04 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall CommonBuffer_FlushWorkItems(_QWORD *a1)
{
  void *i; // rcx
  NTSTATUS result; // eax
  int v4; // edx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -600000000LL;
  for ( i = a1 + 3; ; i = a1 + 3 )
  {
    result = KeWaitForSingleObject(i, Executive, 0, 0, &Timeout);
    if ( result != 258 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(*a1 + 72LL), v4, 8, 16, (__int64)&WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids);
    }
  }
  if ( a1[9] )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 3056))(WdfDriverGlobals);
  return result;
}
