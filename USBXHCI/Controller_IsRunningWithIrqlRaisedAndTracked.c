/*
 * XREFs of Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C0034200
 * Callers:
 *     ESM_RunStateMachine @ 0x1C000C510 (ESM_RunStateMachine.c)
 *     ESM_ShouldQueueWorkItem @ 0x1C0051340 (ESM_ShouldQueueWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Controller_IsRunningWithIrqlRaisedAndTracked(__int64 a1)
{
  ULONG CurrentProcessorNumber; // eax
  int v3; // edx
  ULONG_PTR v4; // rax

  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  if ( CurrentProcessorNumber >= *(_DWORD *)(a1 + 872) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v3,
        4,
        321,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
        CurrentProcessorNumber);
    }
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
           WdfDriverGlobals,
           *(_QWORD *)a1);
    KeBugCheckEx(0x144u, 4uLL, v4, 2uLL, 4uLL);
  }
  return *(_BYTE *)(*(_QWORD *)(a1 + 864) + 2LL * CurrentProcessorNumber);
}
